#include <bits/stdc++.h>
using namespace std;

vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
  vector<int> dist(V, INT_MAX);
  dist[S] = 0;

  for (int i = 0; i < V - 1; ++i) {
    for (auto& edge : edges) {
      int u = edge[0], v = edge[1], wt = edge[2];
      if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
        dist[v] = dist[u] + wt;
      }
    }
  }

  for (auto& edge : edges) {
    int u = edge[0], v = edge[1], wt = edge[2];
    if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
      return {-1};  // Negative cycle detected
    }
  }

  return dist;
}

int main() {
  int V = 6;
  vector<vector<int>> edges = {{3, 2, 6},  {5, 3, 1},  {0, 1, 5}, {1, 5, -3},
                               {1, 2, -2}, {3, 4, -2}, {2, 4, 3}};

  int S = 0;
  vector<int> dist = bellman_ford(V, edges, S);

  for (int d : dist) {
    cout << (d == INT_MAX ? -1 : d) << " ";
  }
  cout << endl;

  return 0;
}
