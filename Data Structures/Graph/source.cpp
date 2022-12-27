#include "header/graph.h"

int main() {

	vector<vector<int>> task1({ { 2, 4, 6 },
								{ 1 },
								{ 5, 9 },
								{ 1 },
								{ 3, 9 },
								{ 1 },
								{ 8, 10 },
								{ 7, 10 , 11 },
								{ 3, 5 },
								{ 7, 8, 12 },
								{ 8, 12},
								{ 10, 11 } });

	vector<vector<int>> task2({ { 0, 1, 0, 0, 0, 0, 0, 0, 0 },
								{ 1, 0, 1, 0, 0, 1, 1, 0, 0 },
								{ 0, 1, 0, 0, 0, 0, 0, 0, 0 },
								{ 0, 0, 0, 0, 1, 0, 0, 1, 1 },
								{ 0, 0, 0, 1, 0, 0, 0, 1, 0 },
								{ 0, 1, 0, 0, 0, 0, 1, 0, 0 },
								{ 0, 1, 0, 0, 0, 1, 0, 0, 0 },
								{ 0, 0, 0, 1, 1, 0, 0, 0, 1 },
								{ 0, 0, 0, 1, 0, 0, 0, 1, 0 } });
		
	vector<vector<int>> task3({ { 2, 9 },
								{ 1, 3, 7, 8 },
								{ 2, 7 },
								{ 5, 9 },
								{ 4, 6, 7, 9, 10 },
								{ 5, 7, 10 },
								{ 2, 3, 5, 6, 8 },
								{ 2, 7, 9 },
								{ 1, 4, 5, 8, 10 },
								{ 5, 6, 9 } });

	try
	{
		Graph g1(task1);
		Graph g5(task2);
		Graph g6(task3);
		vector<int>bfs = g6.getBfsTrace(1);
		vector<int>dfs = g6.getDfsTrace(1);
		for (auto i : bfs) {
			cout << i << " ";
		}
		cout << endl;
		for (auto i : dfs) {
			cout << i << " ";
		}
	}
	catch (const exception& exp)
	{
		cout << exp.what() << endl;
	}

}