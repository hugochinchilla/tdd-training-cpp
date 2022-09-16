default: docker-run

run:
	cd build && cmake ..
	cd build && cmake --build .
	./build/test/password_validator_test

docker-run:
	docker run -v ${PWD}:/codium codiumteam/tdd-training-cpp make run
