main: jobs.o test.o
	g++ -o jobs.o test.o
jobs: jobs.cpp test.cpp character.h
	g++ -c jobs.cpp test.cpp