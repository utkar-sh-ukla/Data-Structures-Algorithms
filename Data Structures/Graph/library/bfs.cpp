#include "../header/graph.h"

void Graph::bfs(int vertexNum) {
	if (writeTrace) algorithmTrace.push_back(vertexNum);
	label[vertexNum] = true;
	for (auto iter : adjList[vertexNum])
		if (label[iter] == false) {
			label[iter] = true;
			queForBfs.push(iter);
		}

	if (!queForBfs.empty()) {
		int buffer = queForBfs.front();
		queForBfs.pop();
		bfs(buffer);
	} 
}

vector<int> Graph::getBfsTrace(int vertex) {
	lableReload();
	if (!algorithmTrace.empty()) algorithmTrace.clear();
	writeTrace = true;
	bfs(vertex);
	writeTrace = false;
	return algorithmTrace;
}