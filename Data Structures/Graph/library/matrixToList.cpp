#include "../header/graph.h"

void Graph::matrixToList() {
	adjList.resize(_matrSize, vector<int>());
	for (int i = 0; i < _matrSize; i++) {
		for (int j = i + 1; j < _matrSize; j++) {
			if (adjMatrix[i][j] > 0) {
				adjList[i].push_back(j);
				adjList[j].push_back(i);
			}
		}
	}
}