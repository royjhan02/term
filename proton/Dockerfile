FROM ubuntu:22.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    gcc \
    libc6-dev-i386 \
    clang-14 \
    llvm-14 \
    g++-12 \
    python3 \
    python3-pip \
    ninja-build \
    git \
    make \
    && apt-get clean

# Set clang-14 and g++-12 as default compilers
RUN update-alternatives --install /usr/bin/clang clang /usr/bin/clang-14 100 \
    && update-alternatives --install /usr/bin/clang++ clang++ /usr/bin/clang++-14 100 \
    && update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 100 \
    && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-12 100

# Install any Python dependencies
RUN python3 -m pip install llama-cpp-python tqdm

WORKDIR /project
COPY . /project

# (Optional) If your instrumenter binary is provided as source and you need to compile it,
# add build instructions here. For example:
#
# RUN make -C /project/bin
#
# Otherwise, if you already have a working binary for Ubuntu, ensure that its path is correct
# in the configuration (e.g., in config.py, the INSTRUMENTER_PATH should point to bin/instrumenter).

# Set the default command to run your termination checking script.
# Replace <path/to/model.gguf> with the actual path to your gguf model (you could also COPY it into the container)
CMD ["python3", "check_ter.py", "--in-file", "sample.c", "--gguf", "Llama-iproton.gguf", "--log-level", "info"]