#include <bits/stdc++.h>
using namespace std;

class DSU {
 public:
  vector<int> parent;
  vector<int> rank;

  DSU(int n) {
    parent.resize(n);
    rank.resize(n);

    for (int i = 0; i < n; i++) {
      parent[i] = i;
      rank[i] = 1;
    }
  }

  int find(int x) { return parent[x] == x ? x : find(parent[x]); }

  void _union(int x, int y) {
    int x_root = find(x);
    int y_root = find(y);

    if (x_root == y_root) return;

    if (rank[x_root] < rank[y_root])
      parent[x_root] = y_root;
    else if (rank[x_root] > rank[y_root])
      parent[y_root] = x_root;
    else {
      parent[y_root] = x_root;
      rank[x_root]++;
    }
  }
};

int main() {
  int n = 5;

  DSU dsu(n);

  dsu._union(0, 1);
  dsu._union(2, 3);
  dsu._union(0, 4);

  cout << "Parent of 1: " << dsu.find(1) << endl;
  cout << "Parent of 3: " << dsu.find(3) << endl;

  return 0;
}
