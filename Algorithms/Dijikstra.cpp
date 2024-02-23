#include <bits/stdc++.h>
using namespace std;

class Dijkstra {
 public:
  vector<int> shortestDistances(int V, vector<vector<pair<int, int>>>& adj, int src) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> distances(V, INT_MAX);

    distances[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
      auto [dist, node] = pq.top();
      pq.pop();

      for (auto [nextNode, weight] : adj[node]) {
        if (dist + weight < distances[nextNode]) {
          distances[nextNode] = dist + weight;
          pq.push({dist + weight, nextNode});
        }
      }
    }

    return distances;
  }
};

int main() {
  int V = 3, E = 3, S = 2;
  vector<vector<pair<int, int>>> adj(V);
  vector<vector<pair<int, int>>> edges{{{1, 1}, {2, 6}}, {{2, 3}, {0, 1}}, {{1, 3}, {0, 6}}};

  for (int u=0; u<V; u++) {
    for (auto [v, weight] : edges[u]) {
      adj[u].push_back({v, weight});
    }
  }

  Dijkstra dijkstra;
  vector<int> result = dijkstra.shortestDistances(V, adj, S);

  for (auto &res : result) {
    cout << res << " ";
  }
  cout << endl;

  return 0;
}
