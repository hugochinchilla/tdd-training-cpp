docker-build:
	docker build . -t gcc-googletest
docker-run:
	docker run -v ${PWD}:/opt/project -w /opt/project gcc-googletest ./run-once.sh
docker-windows-run:
	docker run -v %cd%:/opt/project -w /opt/project gcc-googletest ./run-once.sh