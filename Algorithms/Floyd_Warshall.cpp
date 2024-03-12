#include <bits/stdc++.h>
using namespace std;

constexpr int V = 4;
constexpr int INF = 1e9;

void shortest_distance(vector<vector<int>>& matrix) {
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {0, 2, INF, INF},
        {1, 0, 3, INF},
        {INF, INF, 0, INF},
        {3, 5, 4, 0}
    };

    shortest_distance(matrix);

    for (const auto& row : matrix) {
        for (int cell : row) {
            if (cell == INF)
                cout << -1 << " ";
            else
                cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}
