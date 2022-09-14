default: docker-run

docker-build:
	docker build . -t codiumteam/tdd-training-cpp:user-registration
docker-run:
	docker run -v ${PWD}:/opt/project -w /opt/project codiumteam/tdd-training-cpp:user-registration ./run-once.sh
docker-windows-run:
	docker run -v %cd%:/opt/project -w /opt/project codiumteam/tdd-training-cpp:user-registration ./run-once.sh