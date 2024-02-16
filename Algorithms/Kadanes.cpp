#include <bits/stdc++.h>
using namespace std;

int maxSumSubArray(const vector<int>& A) {
  int n = A.size();
  int local_max = 0;
  int global_max = numeric_limits<int>::min();

  for (int i = 0; i < n; ++i) {
    local_max = max(A[i], local_max + A[i]);
    global_max = max(global_max, local_max);
  }

  return global_max;
}

int main() {
  vector<int> arr = {1, -2, 3, -1, 2, -4, 2, 3};

  int result = maxSumSubArray(arr);

  cout << "Maximum Sum Subarray: " << result << endl;

  return 0;
}