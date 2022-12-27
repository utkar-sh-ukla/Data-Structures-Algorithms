#include "../header/graph.h"

void Graph::dfs(int vertexNum) {
	if (writeTrace) algorithmTrace.push_back(vertexNum);
	label[vertexNum] = true;
	for (auto iter : adjList[vertexNum])
		if (label[iter] == false) {
			stackForDfs.push(iter);
			dfs(iter);
			stackForDfs.pop();
		}
}

vector<int> Graph::getDfsTrace(int vertex) {
	lableReload();
	if (!algorithmTrace.empty()) algorithmTrace.clear();
	writeTrace = true;
	dfs(vertex);
	writeTrace = false;
	return algorithmTrace;
}