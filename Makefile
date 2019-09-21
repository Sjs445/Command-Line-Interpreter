all:
	g++ -std=c++11 -pthread -o myShell myShell.cpp
	./myShell
clean:
	rm myShell