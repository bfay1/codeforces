CC=        g++
CXXFLAGS=  -g -Wall -Wpedantic -Werror

default: test

task: task.o 

task.o: task.cpp

.PHONY:
test: all run 

.PHONY:
all: clean task

.PHONY:
clean:
	rm -rf a.out *.o task

.PHONY:
run:
	cat input.txt | ./task > output.txt && cat output.txt
