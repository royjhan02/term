import re
import sys

# Function to count "else if" occurrences in a C code
def count_else_if_keywords(file_path):
    # Regular expression pattern to match "else if" surrounded by word boundaries
    pattern = r'\belse\s+if\b'
    
    # Initialize the counter
    count = 0

    try:
        with open(file_path, 'r') as file:
            # Read the C code from the file
            c_code = file.read()

            # Use re.findall to find all "else if" occurrences
            matches = re.findall(pattern, c_code)

            # Count the occurrences
            count = len(matches)
            
    except FileNotFoundError:
        print(f"File not found: {file_path}")
    
    return count

# Example usage with command-line argument
if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Usage: python count_else_if.py <file_name.c>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    keyword_count = count_else_if_keywords(file_path)
    print(f'Number of "else if" keywords in the C program: {keyword_count}')

