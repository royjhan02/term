"""
Model handler for different LLM backends
"""

import os
import logging
import json
from abc import ABC, abstractmethod
import llama_cpp
import requests
from config import Config as c

l = logging.getLogger(__name__)

class ModelHandler(ABC):
    """Base class for model handlers"""
    
    @abstractmethod
    def generate(self, prompt_text):
        """Generate response from the model"""
        pass

    @abstractmethod
    def count_tokens(self, text):
        """Count tokens in the given text"""
        pass

class LlamaHandler(ModelHandler):
    """Handler for local Llama models via llama.cpp"""
    
    def __init__(self, model_path):
        if not os.path.exists(model_path):
            raise ValueError(f"Can't find model file at {model_path}")
            
        self.model = llama_cpp.Llama(
            model_path=model_path,
            n_ctx=c.CONTEXT_SIZE,
            n_threads=c.N_THREADS,
            n_threads_batch=c.N_THREADS,
        )

    def generate(self, prompt_text):
        response = self.model(
            prompt_text,
            max_tokens=c.MAX_NEW_TOKENS,
        )
        return response['choices'][0]['text']

    def count_tokens(self, text):
        return len(self.model.tokenize(text.encode('utf-8'), add_bos=False))

class OpenAIHandler(ModelHandler):
    """Handler for OpenAI API models"""
    
    def __init__(self, model="o3-mini"):
        self.model = model
        self.api_key = c.OPENAI_API_KEY
        self.url = f"{c.OPENAI_API_BASE}/chat/completions"

    def generate(self, prompt_text):
        try:
            payload = json.dumps({
                "model": self.model,
                "messages": [
                    {"role": "user", "content": prompt_text}
                ],
                "max_tokens": c.MAX_NEW_TOKENS,
            })
            headers = {
                'Content-Type': 'application/json',
                'api-key': self.api_key
            }
            response = requests.post(self.url, headers=headers, data=payload)
            response.raise_for_status()  # Raise exception for error status codes
            
            response_data = response.json()
            return response_data['choices'][0]['message']['content']
        except Exception as e:
            l.error(f"OpenAI API error: {str(e)}")
            raise

    def count_tokens(self, text):
        # This is an approximation, as exact token count requires the tiktoken library
        return len(text.split()) * 1.3  # Rough estimate

def create_model_handler(model_type="llama", **kwargs):
    """Factory function to create appropriate model handler"""
    if model_type == "llama":
        return LlamaHandler(kwargs.get("model_path"))
    elif model_type == "openai":
        return OpenAIHandler(
            model=kwargs.get("model", "o3-mini")
        )
    else:
        raise ValueError(f"Unknown model type: {model_type}")
