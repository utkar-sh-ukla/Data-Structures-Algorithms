#include "../header/graph.h"

Graph::Graph(vector<vector<int>> v) {
	bool isMatrix = true;
	_matrSize = v.size();


	// Check for input vector is matrix or list
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (v[i][j] > 1) isWeighted = true;
		}
		if (v.size() != v[i].size()) {
			isMatrix = false;
			break;
		}
	}

	// Check matrix or list
	if (isMatrix) {
		for (int i = 0; i < v.size(); i++)
			if (v[i][i] != 0) throw exception("Matrix has loop!");
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v[i].size(); j++) {
				v[i][j] -= 1;
				if (v[i][j] > v.size())
					throw exception("Adjacency list is not correct");
			}
		}
	}

	if (isMatrix) {
		adjMatrix.resize(v.size(), vector<int>(v.size(), 0));
		copy(v.begin(), v.end(), adjMatrix.begin());
		matrixToList();
	}
	else {
		adjList.resize(v.size(), vector<int>());
		for (int i = 0; i < v.size(); i++)
			for (int j = 0; j < v[i].size(); j++)
				adjList[i].push_back(v[i][j]);
		listToMatrix();
	}

	lableInit();
}