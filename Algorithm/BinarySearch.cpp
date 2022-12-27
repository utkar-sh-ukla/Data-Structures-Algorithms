int binarySearch(vector<int>&v, int low, int high, int target) {
    if(low <= high) {
        if(v[mid] < target)
            return binarySearch(v, mid+1, high, target);

        else if(v[mid] > target)
            return binarySearch(v, low, mid-1, target);

        return mid;
    }
    return -1;
}
