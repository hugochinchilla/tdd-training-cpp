default: docker-run

run-tests:
	cd build && cmake ..
	cd build && cmake --build .
	./build/tst/coffee_machine_tst

download-deps:
	git clone https://github.com/google/googletest lib/googletest

docker-build:
	docker build . -t codiumteam/tdd-training-cpp:coffee-machine

docker-run:
	docker run -v ${PWD}:/codium codiumteam/tdd-training-cpp:coffee-machine make run-tests
