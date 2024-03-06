#include <bits/stdc++.h>
using namespace std;

vector<int> topoSort(int N, vector<vector<int>>& adj) {
  vector<int> indegree(N), topo;
  queue<int> q;

  for (int i = 0; i < N; ++i) {
    for (int neighbor : adj[i]) {
      indegree[neighbor]++;
    }
  }

  for (int i = 0; i < N; ++i) {
    if (indegree[i] == 0) {
      q.push(i);
    }
  }

  while (!q.empty()) {
    int node = q.front();
    q.pop();
    topo.push_back(node);

    for (int neighbor : adj[node]) {
      if (--indegree[neighbor] == 0) {
        q.push(neighbor);
      }
    }
  }

  return topo;
}

int main() {
  int N = 6;
  vector<vector<int>> adj(N, vector<int>());
  adj[5] = {2, 0};
  adj[4] = {0, 1};
  adj[3] = {1};
  adj[2] = {3};

  vector<int> topo = topoSort(N, adj);
  for (int node : topo) {
    cout << node << " ";
  }

  return 0;
}