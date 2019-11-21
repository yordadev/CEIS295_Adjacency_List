#include<iostream>
#include "Graph.h"
#include "GraphList.h"

void main(int argc, char* argv[]) {


	// Excercise Two

	GraphList graph(3);

	graph.addEdge(0, 1);
	graph.addEdge(0, 2);
	graph.addEdge(1, 2);
	graph.addEdge(2, 0);
	graph.addEdge(2, 1);
	graph.addEdge(2, 2);

	if (graph.isEdge(0, 1)) {
		std::cout << "(0, 1) is an edge\n\n\n";
	}

	graph.removeEdge(0, 1);

	if (!graph.isEdge(0, 1)) {
		std::cout << "(0, 1) is not an edge\n\n\n";
	}

	graph.addEdge(0, 1);

	graph.displayList();

}

