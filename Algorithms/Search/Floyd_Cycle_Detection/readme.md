#   Floyd Cycle Algorithim

### Complexity

####    Time Complexity

>   O(λ + μ)

####    Space Complexity

>   O(1)

### Algorithm

The algorithm maintains two pointers into the given sequence, one (the tortoise) at *x<sub>i</sub>*, and the other (the hare) at *x<sub>2i</sub>*. At each step of the algorithm, it increases *i* by one, moving the tortoise one step forward and the hare two steps forward in the sequence, and then compares the sequence values at these two pointers. The smallest value of *i* > 0 for which the tortoise and hare point to equal values is the desired value *ν*.
