#include "GraphList.h"
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

GraphList::GraphList(int vertices)
{
	numberOfVertices = vertices;
	ajacencyList = new list<int>[numberOfVertices];
}

void GraphList::addEdge(int origin, int destination)
{
	ajacencyList[origin].push_front(destination);
}

bool GraphList::isEdge(int origin, int destintation)
{
	list<int>::iterator found = find(ajacencyList->begin(), ajacencyList->end(), destintation);
	if (ajacencyList[origin].end() == found) {
		return false;
	}
	return true;
}

void GraphList::removeEdge(int origin, int destination)
{
	ajacencyList[origin].remove(destination);
}

void GraphList::displayList()
{
	cout << "Node  | Destinations ";

	for (int adjanciesColumn = 0; adjanciesColumn < numberOfVertices; adjanciesColumn++) {
		cout << adjanciesColumn << " ";
	}

	cout << endl << endl;

	for (int origin = 0; origin < numberOfVertices; origin++) {
		cout << "  " << origin << "->                ";
		for (list<int>::iterator destination = ajacencyList[origin].begin(); destination != ajacencyList[origin].end(); destination++) {
			cout << *destination << " ";
		}
		cout << endl;
	}
}
