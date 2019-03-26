masterword: masterword.o batches.o main.o
	g++ $^ -Wall -std=c++14 -pedantic -o $@

%.o: %.cpp
	g++ -c -Wall -std=c++14 -pedantic $^ 

clean:
	rm *.o masterword 
