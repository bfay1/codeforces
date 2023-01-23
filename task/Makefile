CXX=         g++
CXXFLAGS=    -g -Wall -Werror -Wpedantic -std=c++11

default: clean all

task:

.PHONY: all
all: task
	cat input.txt | ./task > output.txt && cat output.txt

.PHONY: clean
clean:
	rm -rf a.out *.o task

.PHONY: Makefile


