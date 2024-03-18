APPEND = Circle
all : main.o Circle.o
	g++ main.o 	Circle.o -o $(APPEND)

main.o : main.cpp
	g++ -c main.cpp -o main.o

Circle.o : Circle.cpp
	g++  -c Circle.cpp -o Circle.o

clean:
	rm main.o Circle.o $(APPEND)