default: docker-run

all:
	cmake -S . -O cmake-build-debug/
	cmake --build cmake-build-debug --target all -j 12
	./cmake-build-debug/tst/coffee_machine_tst

docker-build:
	docker build . -t codiumteam/tdd-training-cpp:coffee-machine

docker-run:
	docker run -v ${PWD}:/opt/project -w /opt/project codiumteam/tdd-training-cpp:coffee-machine ./run-once.sh
