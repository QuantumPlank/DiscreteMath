FROM ubuntu:22.04

RUN apt-get update && apt-get upgrade -y

# Tools
RUN apt-get install -y \
    curl

# C
RUN apt-get install -y \
    build-essential
# Rust
RUN curl https://sh.rustup.rs -sSf | sh -s -- -y
RUN echo 'source $HOME/.cargo/env' >> $HOME/.bashrc
ENV PATH="/root/.cargo/bin:${PATH}"

# Go
RUN curl -OL https://go.dev/dl/go1.22.3.linux-amd64.tar.gz; \
    tar -C /usr/local -xvf go1.22.3.linux-amd64.tar.gz; \
    rm go1.22.3.linux-amd64.tar.gz;
ENV PATH="${PATH}:/usr/local/go/bin"

# Lua

# Typescript

# Python
