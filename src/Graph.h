#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>              // for cout/cerr
#include <unordered_map>         // hash map (fast lookup)
#include <vector>                // dynamic array
#include <string>                // std::string

using namespace std;          

class Graph {
private:
    // adjacency list:
    // key   = city name (like "Moscow")
    // value = list of cities you can fly to from that city
    unordered_map<string, vector<string>> adjList;

public:
    // loads the flight routes from the txt file
    // ex line: A B C  means  A->B and A->C
    void loadFromFile(const string& filename);

    // prints what we loaded (debugging)
    void printGraph() const;
};

#endif
