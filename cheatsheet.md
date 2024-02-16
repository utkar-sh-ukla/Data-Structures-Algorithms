Certainly! Let's present the information in a more organized way using tables.

---

# C++ Data Structures and Algorithms Cheat Sheet

## 1.0 Data Structures

### 1.1 Overview

- Data structures organize and store data efficiently.

### 1.2 Vector `std::vector`

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| Dynamic array           | `push_back()`: Adds at end   | Access: O(1)             |
| Automatic resizing      | `pop_back()`: Removes last   | Insertion/Deletion (end): O(1) |
| Random access           | `size()`: Returns size       | Insertion/Deletion (mid): O(n) |
|                         | `empty()`: Checks if empty   |                          |

### 1.3 Deque `std::deque`

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| Double-ended queue      | `push_back()`, `pop_back()`  | Access: O(1)             |
|                         | `push_front()`, `pop_front()`| Insertion/Deletion (both ends): O(1) |
|                         | `size()`, `empty()`           | Insertion/Deletion (mid): O(n) |

### 1.4 List `std::list` and `std::forward_list`

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| Doubly/Singly linked     | `push_back()`, `pop_back()`  | Access: O(n)             |
| lists                   | `push_front()`, `pop_front()`| Insertion/Deletion (both ends): O(1) |
|                         | `size()`, `empty()`           | Insertion/Deletion (mid): O(1) |

### 1.5 Map `std::map` and `std::unordered_map`

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| Associative containers   | `insert(pair)`: Insert       | Access: O(log n) for `std::map`, |
|                         | `erase(key)`: Remove         | O(1) average for `std::unordered_map` |
|                         | `find(key)`: Find            | Insertion/Deletion: O(log n) for `std::map`, |
|                         |                              | O(1) average for `std::unordered_map` |

### 1.6 Set `std::set`

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| Container of unique     | `insert(val)`: Insert        | Access: O(log n)         |
| elements in sorted order| `erase(val)`: Remove         | Insertion/Deletion: O(log n) |

### 1.7 Stack `std::stack`

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| LIFO container          | `push(val)`: Push            | Access: O(1)             |
|                         | `pop()`: Pop                 | Insertion/Deletion: O(1) |
|                         | `top()`: Get top element     |                          |

### 1.8 Queue `std::queue`

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| FIFO container          | `push(val)`: Push            | Access: O(1)             |
|                         | `pop()`: Pop                 | Insertion/Deletion: O(1) |
|                         | `front()`: Get front element |                          |

### 1.9 Priority Queue `std::priority_queue`

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| Queue with priority      | `push(val)`: Insert          | Access: O(1)             |
| values                  | `pop()`: Remove highest      | Insertion/Deletion: O(log n) |
|                         | `top()`: Get highest priority |                          |

### 1.10 Heap `std::priority_queue`

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| Binary heap             | Similar to `std::priority_queue`| Similar to `std::priority_queue` |

## 2.0 Trees

### 2.1 Binary Tree

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| Tree with at most two   | Tree traversal methods       | Access/Search/Insertion/Deletion: |
| children                | `insert(val)`: Insert        | O(log n) for balanced trees, O(n) for unbalanced |
|                         | `remove(val)`: Remove        |                          |

### 2.2 Balanced Trees

| **Properties**          | **Methods**                  | **Complexities**        |
|-------------------------|------------------------------|--------------------------|
| Balanced height trees   | Same as Binary Tree          | Same as Binary Tree      |