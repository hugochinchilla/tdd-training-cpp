.PHONY: docker-build
docker-build:
	docker build . -t codiumteam/tdd-training-cpp

.PHONY: docker-push
docker-push:
	docker push codiumteam/tdd-training-cpp --all-tags

docker-remove-images:
	docker images codiumteam/tdd-training-cpp -q | xargs  docker rmi --force $1
