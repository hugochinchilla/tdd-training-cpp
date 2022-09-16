default: docker-run

run:
	cd build && cmake ..
	cd build && cmake --build .
	./build/test/coffee_machine_test

clean:
	rm -rf build/*

docker-run:
	docker run -v ${PWD}:/codium codiumteam/tdd-training-cpp make run
