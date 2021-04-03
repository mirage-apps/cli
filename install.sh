#!/bin/bash
git clone https://github.com/mirage-apps/cli
cd cli
mkdir -p bin
make binary
mv bin/mirage /usr/local/bin/mirage
cd ..
mkdir ~/.mirage-store
rm -rf cli