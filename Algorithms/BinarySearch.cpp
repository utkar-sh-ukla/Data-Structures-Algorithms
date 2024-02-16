#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& v, int target) {
  int low = 0;
  int high = v.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (v[mid] == target) {
      return mid;
    } else if (v[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  vector<int> v = {2, 5, 8, 12, 16};
  int target = 12;

  int index = binarySearch(v, target);

  if (index != -1) {
    cout << "Target " << target << " found at index " << index << endl;
  } else {
    cout << "Target " << target << " not found" << endl;
  }

  return 0;
}