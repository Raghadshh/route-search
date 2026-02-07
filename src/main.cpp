#include "Graph.h"        // includes Graph class

int main() {
    Graph g;                              // make graph object

    // load the file (this is our test file right now)
    g.loadFromFile("data/flight.txt");

    // print it so we can confirm it loaded right
    g.printGraph();                       // should show A -> B C etc

    return 0;                             // program done
}
