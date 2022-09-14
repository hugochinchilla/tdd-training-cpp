docker-build:
	docker build . -t codiumteam/tdd-training-cpp:print-date

docker-run:
	docker run -v ${PWD}:/opt/project -w /opt/project codiumteam/tdd-training-cpp:print-date ./run-once.sh
