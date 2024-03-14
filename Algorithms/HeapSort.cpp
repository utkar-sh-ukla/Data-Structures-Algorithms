#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>& arr, int n, int index) {
  int largestNode = index;
  int left = 2 * index + 1;
  int right = 2 * index + 2;

  if (left < n && arr[left] > arr[largestNode]) largestNode = left;

  if (right < n && arr[right] > arr[largestNode]) largestNode = right;

  if (largestNode != index) {
    swap(arr[index], arr[largestNode]);
    heapify(arr, n, largestNode);
  }
}

void heapSort(vector<int>& arr, int n) {
  // Building max heap
  for (int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);

  // Extracting elements from heap in descending order
  for (int i = n - 1; i > 0; i--) {
    swap(arr[0], arr[i]);
    heapify(arr, i, 0);
  }
}

int main() {
  vector<int> arr = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
  int n = arr.size();

  heapSort(arr, n);

  cout << "Sorted Array: ";
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;

  return 0;
}
