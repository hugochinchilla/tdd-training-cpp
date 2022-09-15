FROM gcc:latest

RUN env
RUN apt-get update && apt-get -y install cmake

WORKDIR /codium

COPY Makefile .
RUN make download-deps

VOLUME ["/codium", "/codium/lib"]