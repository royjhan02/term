FROM ubuntu:22.04

ARG DEBIAN_FRONTEND=noninteractive

# Install prerequisites and add deadsnakes PPA for Python 3.12
RUN apt-get update && apt-get install -y software-properties-common curl && \
    add-apt-repository ppa:deadsnakes/ppa -y && \
    apt-get update && \
    apt-get install -y python3.12 python3.12-venv python3.12-dev

# Install required toolchain packages
RUN apt-get update && apt-get install -y \
    gcc \
    libc6-dev-i386 \
    clang-14 \
    llvm-14 \
    g++-12 \
    ninja-build \
    git \
    make \
    cbmc \
    && apt-get clean

# Set default compilers using update-alternatives
RUN update-alternatives --install /usr/bin/clang clang /usr/bin/clang-14 100 \
    && update-alternatives --install /usr/bin/clang++ clang++ /usr/bin/clang++-14 100 \
    && update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 100 \
    && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-12 100

# Set environment variables so that CMake can find the proper C++ compiler
ENV CXX=/usr/bin/g++-12
ENV CC=/usr/bin/gcc-12

# Bootstrap pip for Python 3.12 using ensurepip, then upgrade pip and install dependencies
RUN /usr/bin/python3.12 -m ensurepip --upgrade && \
    /usr/bin/python3.12 -m pip install --upgrade pip && \
    /usr/bin/python3.12 -m pip install llama-cpp-python tqdm

WORKDIR /project
COPY . /project

CMD ["/usr/bin/python3.12", "check_ter.py", "--in-file", "sample.c", "--gguf", "Llama-iproton.gguf", "--log-level", "info"]
