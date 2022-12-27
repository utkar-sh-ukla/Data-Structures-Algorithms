#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Graph {
private:
	vector<vector<int>> adjMatrix;
	vector<vector<int>> adjList;
	vector<int> algorithmTrace;
	vector<bool> label;
	queue<int> queForBfs;
	stack<int> stackForDfs;
	int _matrSize;
	bool writeTrace = false;
	bool isWeighted = false;

	void matrixToList();
	void listToMatrix();

	void lableInit();
	void lableReload();

	void dfs(int vertexNum);
	void bfs(int vertexNum);

public:
	Graph(vector<vector<int>> v);
	void printMatrix();
	void printAdjList();
	vector<int> getBfsTrace(int vertex);
	vector<int> getDfsTrace(int vertex);
};
