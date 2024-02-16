#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
  vector<int> L(arr.begin() + left, arr.begin() + mid + 1);
  vector<int> R(arr.begin() + mid + 1, arr.begin() + right + 1);

  L.push_back(INT_MAX);
  R.push_back(INT_MAX);

  int i = 0, j = 0;

  for (int k = left; k <= right; ++k) {
    if (L[i] <= R[j])
      arr[k] = L[i++];
    else
      arr[k] = R[j++];
  }
}

void mergeSort(vector<int>& arr, int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
  }
}

void printArray(const vector<int>& arr) {
  for (int i : arr) cout << i << " ";
  cout << endl;
}

int main() {
  vector<int> arr = {2, 5, 1, 3, 4};

  cout << "Original array: ";
  printArray(arr);

  mergeSort(arr, 0, arr.size() - 1);

  cout << "Sorted array: ";
  printArray(arr);

  return 0;
}
