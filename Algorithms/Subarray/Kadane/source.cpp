int maxSumSubArray(vector <int> &A) {
  int n = A.size();                                 //size of vector
  int local_max = 0;
  int global_max = INT_MIN;                         // -infinity
  
  for(int i=0; i<n; i++) {
    local_max = max(A[i], local_max + A[i]);
    global_max = max(global_max, local_max);
  }
  return global_max;
}