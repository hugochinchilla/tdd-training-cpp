default: docker-run

run-tests:
	cd build && cmake ..
	cd build && cmake --build .
	./build/test/coffee_machine_test

docker-build:
	docker build . -t codiumteam/tdd-training-cpp:coffee-machine

docker-run:
	docker run -v ${PWD}:/codium codiumteam/tdd-training-cpp:coffee-machine make run-tests
