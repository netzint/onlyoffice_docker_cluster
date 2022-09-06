#!/bin/bash

###############################################
# Build OnlyOffice without license limitations
# by hermanntoast <dev@hermann-toast.de>
# V2.0 at 02/09/2022
###############################################

apt-get update

apt-get install \
    ca-certificates \
    curl \
    gnupg \
    lsb-release

git clone \
    --depth=1 \
    --recursive \
    https://github.com/hermanntoast/build_tools.git ./tmp_build_tools

cd ./tmp_build_tools

docker build --tag netzint/onlyoffice-documentserver:7.1.1 .

cd ..
rm -r ./tmp_build_tools
