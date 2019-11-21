#pragma once
#include <iostream>
#include <list>
#include <string>

using namespace std;


class GraphList
{
	private:
		int numberOfVertices;
		list<int> *ajacencyList;

	public:
		GraphList(int);
		void addEdge(int, int);
		bool isEdge(int, int);
		void removeEdge(int, int);
		void displayList();
};

