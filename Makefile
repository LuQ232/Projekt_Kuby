exe: main.o lathe.o time.o
	g++ main.o lathe.o time.o -o exe

main.o: ./src/main.cpp
	g++ -c ./src/main.cpp


time.o: ./src/time.cpp
	g++ -c ./src/time.cpp


lathe.o: ./src/lathe.cpp
	g++ -c ./src/lathe.cpp

clean: rm -rf *o exe