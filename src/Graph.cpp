#include "Graph.h"       // our header
#include <fstream>       // file reading
#include <sstream>       // stringstream for splitting lines

void Graph::loadFromFile(const string& filename) {
    ifstream file(filename);                 // open file

    // if file cant open then we cant do anything
    if (!file.is_open()) {
        cout << "Error opening file: " << filename << endl;  
        return;                                              
    }

    string line;                            // stores each line from the file

    // read line by line
    while (getline(file, line)) {
        stringstream ss(line);              // split line into words
        string source;                      // first city on the line (from city)

        ss >> source;                       // grab the first word (source city)

        // if the line is empty then source might be "" so just skip it
        if (source == "") {
            continue;                 
        }

        string dest;                        // destination city (to city)

        // every other word is a destination
        while (ss >> dest) {
            adjList[source].push_back(dest);  // add directed edge: source -> dest
            // ^ this is basically storing who you can fly to directly
        }

     
    }

    file.close();  
}

void Graph::printGraph() const {
    // print the adjacency list so we can see if the graph loaded correctly
    for (auto& pair : adjList) {                 // loop through each city in the map
        cout << pair.first << " -> ";            // city name

        for (auto& neighbor : pair.second) {     // list of neighbors (destinations)
            cout << neighbor << " ";             // print each destination
        }

        cout << endl;                            // new line after each city
    }

}
