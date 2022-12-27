#include "../header/graph.h"

void Graph::printMatrix() {
	for (int i = 0; i < _matrSize; i++, cout << endl)
		for (int j = 0; j < _matrSize; j++)
			cout << adjMatrix[i][j];
}

void Graph::printAdjList() {
	for (int i = 0; i < _matrSize; i++, cout << endl)
		for (int j = 0; j < adjList[i].size(); j++)
			cout << adjList[i][j];
}