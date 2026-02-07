# Project 1 – World Airline Route Search

This project is about building a graph-based airline route search system. 
The program reads a flight dataset, stores cities and their direct flight connections, 
and finds routes with the smallest number of connections based on different queries.

Cities are treated as nodes and flights are treated as directed edges.

## How to run 

### On UNT CSE Linux Machines
- **Build:** `make` → compiles all `.cpp` files with `g++`
- **Run:** `make run` → runs the compiled program (`./routeSearch`)
- **Clean:** `make clean` → removes all `.o` files and the `routeSearch` executable

### On Windows (MinGW32)
- **Build:** `mingw32-make` → compiles all `.cpp` files with `g++`
- **Run:** `mingw32-make run` → runs the compiled program (`routeSearch.exe`)
- **Clean:** `mingw32-make clean` → removes all `.o` files and `routeSearch.exe`