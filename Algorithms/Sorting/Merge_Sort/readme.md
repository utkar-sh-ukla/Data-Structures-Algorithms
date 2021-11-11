#   Merge Sort algorithm

### Complexity

####    Time Complexity

-   Worst-case performance&nbsp;&nbsp; - &nbsp;&nbsp;     **`O(n*log n)`**
-   Best-case performance&nbsp;&nbsp; - &nbsp;&nbsp;	  **`Ω(n*log n)` typical, `Ω(n)` natural variant**
-   Average performance&nbsp;&nbsp; - &nbsp;&nbsp;	      **`Θ(n*log n)`**

####    Space Complexity

-   Worst-case space complexity&nbsp;&nbsp; - &nbsp;&nbsp;    **`O(n)` total with `O(n)` auxiliary,`O(1)` auxiliary with linked lists**

### Algorithm

Conceptually, a merge sort works as follows:

1.  Divide the unsorted list into n sublists, each containing one element (a list of one element is considered sorted).
2.  Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining. This will be the sorted list.

### Top Down Implementation
```cpp
#include <iostream>

/**
 *
 * The merge() function is used for merging two halves.
 * The merge(arr, l, m, r) is key process 
 * that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.
 *
 * @param arr - array with two halves arr[l...m] and arr[m+1...l]
 * @param l - left index or start index of first half array
 * @param m - right index or end index of first half array
 *
 * (The second array starts form m+1 and goes till l)
 *
 * @param l - end index or right index of second half array
 */
void merge(int *arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = new int[n1], *R = new int[n2];

    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 || j < n2) {
        if (j >= n2 || (i < n1 && L[i] <= R[j])) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    delete[] L;
    delete[] R;
}

/*
 *
 * @param arr - array to be sorted
 * @param l - left index or start index of array
 * @param r - right index or end index of array
 *
 */
void mergeSort(int *arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}


// Utility function used to print the array after sorting
 
void show(int *arr, int size) {
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
    std::cout << "\n";
}

/** Main function */
int main() {
    int size;
    std::cout << "Enter the number of elements : ";
    std::cin >> size;
    int *arr = new int[size];
    std::cout << "Enter the unsorted elements : ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    mergeSort(arr, 0, size - 1);
    std::cout << "Sorted array : ";
    show(arr, size);
    delete[] arr;
    return 0;
}
```

