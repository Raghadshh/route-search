routeSearch: main.o Graph.o
	g++ main.o Graph.o -o routeSearch

main.o: src/main.cpp src/Graph.h
	g++ -c src/main.cpp -o main.o

Graph.o: src/Graph.cpp src/Graph.h
	g++ -c src/Graph.cpp -o Graph.o

clean:
	del *.o routeSearch routeSearch.exe

run:
	.\routeSearch
