 /*
 1. Linear Data Structure
Definition:

A Linear Data Structure is a type of data structure in which elements are arranged sequentially (in a line).

Each element has:

A previous element
A next element

Exceptions:

First element → no previous
Last element → no next

 Characteristics
🔹 Sequential Organization
Elements are stored one after another in sequence.
Example:
10 → 20 → 30 → 40
🔹 Order Preservation
The order of insertion is maintained.
🔹 Fixed or Dynamic Size
Array → Fixed size
Linked List, Stack, Queue → Dynamic size
🔹 Efficient Access
Some structures (like arrays) allow fast access using index.

 
2. ARRAY

 Definition:
An Array is a collection of elements of the same data type, stored in contiguous memory locations.

Example:

[10, 20, 30, 40]

 Characteristics of Array
🔹 Homogeneous Elements
All elements must be of the same data type.
🔹 Contiguous Memory
Elements are stored next to each other in memory.
🔹 Zero-Based Indexing
First element → index 0
Second element → index 1
🔹 Random Access
Elements can be accessed directly using index.
Time Complexity: O(1)

 3. Types of Array
🔹 1. One-Dimensional Array (1D)

A simple list of elements.

[1, 2, 3, 4]
🔹 2. Two-Dimensional Array (2D)

Array of arrays (matrix form).

[ [1,2],
  [3,4] ]
🔹 3. Multi-Dimensional Array

Arrays with more than two dimensions (3D, 4D, etc.)

 4. Array Operations

🔹 Access
Direct access using index
 Time: O(1)
🔹 Insertion
At end → O(1)
At specific position → O(n) (due to shifting)
🔹 Deletion
At end → O(1)
At specific position → O(n) (due to shifting)
🔹 Searching
Method	Time Complexity
Linear Search	O(n)
Binary Search	O(log n)


 5. LINKED LIST
 Definition:

A Linked List is a linear data structure consisting of nodes, where each node contains:

Data
A reference (pointer) to the next node

Example:

[10|•] → [20|•] → [30|•]
Important Terms
Term	Meaning
Node	Data + pointer
Head	First node
Tail	Last node
 Characteristics
Dynamic size
Non-contiguous memory
No random access
 6. Types of Linked List
🔹 1. Singly Linked List

Each node points to the next node.

1 → 2 → 3 → NULL
🔹 2. Doubly Linked List

Each node has:

Next pointer
Previous pointer
NULL ← 1 ↔ 2 ↔ 3 → NULL
🔹 3. Circular Linked List

Last node points back to the first node.

1 → 2 → 3 → (back to 1)
 7. Linked List Operations
🔹 Access

Requires traversal
 Time: O(n)

🔹 Searching

 Time: O(n)

🔹 Insertion

 Time: O(1) (if position is known)

🔹 Deletion

 Time: O(1) (if node is known)


8. STACK
 Definition:

A Stack is a linear data structure that follows the LIFO (Last In First Out) principle.

Example:

Push: 10, 20, 30
Pop → 30 removed first
 Types of Stack
🔹 Fixed Size Stack
Size cannot change
May cause overflow/underflow
🔹 Dynamic Stack
Size can grow/shrink
Implemented using linked list
Stack Operations
Operation	Description
push()	Insert element
pop()	Remove element
top()	View top element
size()	Number of elements
isEmpty()	Check if empty

10. Types of Queue
🔹 1. Input Restricted Queue
Insertion from one end
Deletion from both ends

🔹 2. Output Restricted Queue
Insertion from both ends
Deletion from one end

🔹 3. Circular Queue
Last position connects to first.

🔹 4. Deque (Double-Ended Queue)
Insertion and deletion from both ends.

🔹 5. Priority Queue
Elements are removed based on priority.

 11. Queue Operations
Operation	Description
enqueue()	Add element
dequeue()	Remove element
front()	First element
rear()	Last element
isFull()	Check full
isEmpty()	Check empty


12. Advantages of Linear Data Structures
Easy to understand and implement
Maintains order of elements
Useful for searching and sorting
Flexible (dynamic structures)
13. Disadvantages
Slow access in some structures (linked list)
Extra memory required (pointers)
Inefficient memory usage sometimes
Not suitable for all operations

*/