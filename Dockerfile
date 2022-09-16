FROM gcc:latest

RUN env
RUN apt-get update && apt-get -y install cmake

WORKDIR /codium

VOLUME ["/codium"]