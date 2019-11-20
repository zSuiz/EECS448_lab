QueueDemo: main.o Queue.o tester.o
	g++ -g -Wall -std=c++11 main.o Queue.o tester.o -o QueueDemo

main.o: main.cpp
	g++ -g -std=c++11 -c main.cpp

tester.o: tester.h tester.cpp
	g++ -g -std=c++11 -c tester.cpp

clean:
	rm main.o tester.o QueueDemo *~
