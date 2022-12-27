#include "../header/graph.h"

void Graph::listToMatrix() {
	adjMatrix.resize(adjList.size(), vector<int>(adjList.size(), 0));
	for (int i = 0; i < adjList.size(); i++) {
		for (int j = 0; j < adjList[i].size(); j++) {
			int indJ = adjList[i][j];
			adjMatrix[i][indJ] = 1;
		}
	}
}