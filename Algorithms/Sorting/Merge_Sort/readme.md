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
