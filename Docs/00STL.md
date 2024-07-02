# C++ Standard Template Library (STL)

The C++ Standard Template Library (STL) is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks. Below is a brief overview of some commonly used STL components along with their basic functions.

## Vector

A `vector` is a dynamic array that can resize itself automatically when an element is added or removed.

### Basic Functions
- **`push_back(element)`**: Adds an element to the end of the vector.
- **`pop_back()`**: Removes the last element of the vector.
- **`size()`**: Returns the number of elements in the vector.
- **`empty()`**: Returns whether the vector is empty.
- **`at(index)`**: Returns the element at the specified index.
- **`clear()`**: Removes all elements from the vector.
- **`begin()`**: Returns an iterator to the first element.
- **`end()`**: Returns an iterator to the element following the last element.

## List

A `list` is a doubly linked list that can be used to perform insertion and deletion operations efficiently.

### Basic Functions
- **`push_back(element)`**: Adds an element to the end of the list.
- **`push_front(element)`**: Adds an element to the front of the list.
- **`pop_back()`**: Removes the last element of the list.
- **`pop_front()`**: Removes the first element of the list.
- **`size()`**: Returns the number of elements in the list.
- **`empty()`**: Returns whether the list is empty.
- **`clear()`**: Removes all elements from the list.
- **`begin()`**: Returns an iterator to the first element.
- **`end()`**: Returns an iterator to the element following the last element.

## Deque

A `deque` (double-ended queue) is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end.

### Basic Functions
- **`push_back(element)`**: Adds an element to the end of the deque.
- **`push_front(element)`**: Adds an element to the front of the deque.
- **`pop_back()`**: Removes the last element of the deque.
- **`pop_front()`**: Removes the first element of the deque.
- **`size()`**: Returns the number of elements in the deque.
- **`empty()`**: Returns whether the deque is empty.
- **`clear()`**: Removes all elements from the deque.
- **`begin()`**: Returns an iterator to the first element.
- **`end()`**: Returns an iterator to the element following the last element.

## Map

A `map` is an associative container that stores elements formed by a combination of a key value and a mapped value, following a specific order.

### Basic Functions
- **`insert(pair<key, value>)`**: Inserts a new element in the map.
- **`erase(iterator)`**: Removes the element at the specified position.
- **`find(key)`**: Searches the container for an element with the specified key.
- **`size()`**: Returns the number of elements in the map.
- **`empty()`**: Returns whether the map is empty.
- **`clear()`**: Removes all elements from the map.
- **`begin()`**: Returns an iterator to the first element.
- **`end()`**: Returns an iterator to the element following the last element.

## Set

A `set` is an associative container that contains a sorted set of unique objects of type Key.

### Basic Functions
- **`insert(element)`**: Inserts a new element in the set.
- **`erase(element)`**: Removes the element from the set.
- **`find(key)`**: Searches the container for an element with the specified key.
- **`size()`**: Returns the number of elements in the set.
- **`empty()`**: Returns whether the set is empty.
- **`clear()`**: Removes all elements from the set.
- **`begin()`**: Returns an iterator to the first element.
- **`end()`**: Returns an iterator to the element following the last element.

## Stack

A `stack` is a container adapter that provides a LIFO (last-in, first-out) data structure.

### Basic Functions
- **`push(element)`**: Adds an element to the top of the stack.
- **`pop()`**: Removes the element on top of the stack.
- **`top()`**: Returns a reference to the top element in the stack.
- **`size()`**: Returns the number of elements in the stack.
- **`empty()`**: Returns whether the stack is empty.

## Queue

A `queue` is a container adapter that provides a FIFO (first-in, first-out) data structure.

### Basic Functions
- **`push(element)`**: Adds an element to the end of the queue.
- **`pop()`**: Removes the element at the front of the queue.
- **`front()`**: Returns a reference to the front element in the queue.
- **`back()`**: Returns a reference to the last element in the queue.
- **`size()`**: Returns the number of elements in the queue.
- **`empty()`**: Returns whether the queue is empty.

## Priority Queue

A `priority_queue` is a container adapter that provides a way to maintain a dynamically ordered sequence of elements.

### Basic Functions
- **`push(element)`**: Adds an element to the priority queue.
- **`pop()`**: Removes the top element from the priority queue.
- **`top()`**: Returns a reference to the top element in the priority queue.
- **`size()`**: Returns the number of elements in the priority queue.
- **`empty()`**: Returns whether the priority queue is empty.

## Algorithm Functions

The STL also includes a set of common algorithms that operate on containers.

### Basic Functions
- **`sort(begin, end)`**: Sorts the elements in the range [begin, end).
- **`reverse(begin, end)`**: Reverses the order of the elements in the range [begin, end).
- **`max_element(begin, end)`**: Returns an iterator to the largest element in the range [begin, end).
- **`min_element(begin, end)`**: Returns an iterator to the smallest element in the range [begin, end).
- **`accumulate(begin, end, init)`**: Accumulates the elements in the range [begin, end) starting with the initial value init.
- **`find(begin, end, value)`**: Finds the first occurrence of value in the range [begin, end).

This is a basic overview of some commonly used components and functions of the C++ Standard Template Library. Each component and function can be used in a variety of ways to create efficient and effective C++ programs.
