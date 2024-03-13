#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[low];
  int i = low;
  for (int j = low + 1; j <= high; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[low], arr[i]);
  return i;
}

void quickSort(vector<int> &arr, int low, int high) {
  if (low < high) {
    int pIndex = partition(arr, low, high);
    quickSort(arr, low, pIndex - 1);
    quickSort(arr, pIndex + 1, high);
  }
}

int main() {
  vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
  cout << "Before Using Quick Sort:\n";
  for (int num : arr) cout << num << " ";
  cout << endl;

  quickSort(arr, 0, arr.size() - 1);

  cout << "After Using Quick Sort:\n";
  for (int num : arr) cout << num << " ";
  cout << endl;

  return 0;
}
