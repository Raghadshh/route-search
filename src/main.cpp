#include "Graph.h"        // includes Graph class

int main() {
    Graph g;                              // make graph object

    // load the file (this is our test file right now)
    g.loadFromFile("data/flight.txt");

    // print it so we can confirm it loaded right
    g.printGraph();                       // should show A -> B C etc

    cout << endl;

    // test BFS distance from city A (change A to whatever exists)
    auto distances = g.bfsDistance("A");

    // print distances so we can see if BFS works
    for (auto& p : distances) {
        cout << "A -> " << p.first << " : " << p.second << endl;
    }

    return 0;                             // program done
}
