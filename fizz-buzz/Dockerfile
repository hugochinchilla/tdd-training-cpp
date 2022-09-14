FROM gcc:latest

RUN env
RUN apt-get update && apt-get -y install cmake

WORKDIR /codium

COPY Makefile .
RUN make build-deps

CMD ["make", "clean", "all"]

VOLUME ["/codium", "/codium/build"]