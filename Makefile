masterword: masterword.o batches.o main.o
	g++ $^ -O2 -Wall -std=c++14 -pedantic -o $@

%.o: %.cpp
	g++ -c -O2 -Wall -std=c++14 -pedantic $^ 

clean:
	rm *.o masterword 
