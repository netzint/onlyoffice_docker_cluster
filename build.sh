#!/bin/bash

TAG=$(cat ./currenttag.txt)

mv buildfiles/DocumentServer/server/.git2 buildfiles/DocumentServer/server/.git
mv buildfiles/DocumentServer/web-apps/.git2 buildfiles/DocumentServer/web-apps/.git

docker login

docker build -t netzint/onlyoffice-documentserver:$TAG .
docker tag netzint/onlyoffice-documentserver:$TAG netzint/onlyoffice-documentserver:latest

docker push netzint/onlyoffice-documentserver:$TAG
docker push netzint/onlyoffice-documentserver:latest

mv buildfiles/DocumentServer/server/.git buildfiles/DocumentServer/server/.git2
mv buildfiles/DocumentServer/web-apps/.git buildfiles/DocumentServer/web-apps/.git2