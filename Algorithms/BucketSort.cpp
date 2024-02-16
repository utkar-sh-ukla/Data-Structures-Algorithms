#include <bits/stdc++.h>
using namespace std;

void bucketSort(vector<float>& arr) {
  int n = arr.size();
  vector<vector<float>> buckets(n);

  for (int i = 0; i < n; ++i) {
    int bucketIndex = n * arr[i];
    buckets[bucketIndex].push_back(arr[i]);
  }

  for (auto& bucket : buckets) sort(bucket.begin(), bucket.end());

  int index = 0;
  for (auto& bucket : buckets)
    for (float value : bucket) arr[index++] = value;
}

int main() {
  vector<float> arr = {0.42, 0.32, 0.33, 0.52, 0.37, 0.47, 0.51};
  bucketSort(arr);

  cout << "Sorted array: ";
  for (float val : arr) cout << val << " ";

  return 0;
}