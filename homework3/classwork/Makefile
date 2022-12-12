INC=-I./include

all: min main
	g++ $(INC) build/min.o build/main.o -o build/min

main: main.cc
	g++ $(INC) main.cc -c -o build/main.o

min: include/min.h src/min.cc
	g++ $(INC) src/min.cc -c -o build/min.o

clean:
	rm -rf build/*