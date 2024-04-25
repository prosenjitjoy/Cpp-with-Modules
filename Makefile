configure:
	CXX=clang++ CC=clang cmake -GNinja .

build: configure
	ninja -v

run: build
	./hello

.DEFAULT_GOAL := run