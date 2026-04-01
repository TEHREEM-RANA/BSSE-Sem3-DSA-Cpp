/*
 1. Non-Linear Data Structure
 Definition:

A Non-Linear Data Structure is a data structure where elements are not arranged sequentially.
Instead, data is organized in a hierarchical or network form.

 Example:

Tree 
Graph 
 Key Idea:

One element can be connected to multiple elements (not just one next/previous)

 2. TREE
 Definition:

A Tree is a hierarchical data structure where data is stored in the form of parent-child relationships.

 It consists of:

Nodes
Edges

 The topmost node is called the Root

 Structure Example
        15   ← Root
       /  \
     35    6
    / \   / \
   1  10 5   7
 3. Tree Terminologies (VERY IMPORTANT)
🔹 Parent Node

A node that has children
 Example: 35 is parent of 1 and 10

🔹 Child Node

A node that comes under another node

🔹 Root Node

Topmost node (no parent)
 Example: 15

🔹 Leaf Node (External Node)

Nodes with no children
 Example: 1, 10, 5, 7

🔹 Sibling

Nodes with same parent
 Example: 1 and 10

🔹 Ancestor

All nodes above a node

 Example:

Ancestors of 10 → 15, 35
🔹 Descendant

All nodes below a node

 Example:

Descendants of 35 → 1, 10
🔹 Level of Node

Distance from root
 Root = Level 0

🔹 Internal Node

Node with at least one child

🔹 Subtree

A node with all its children

 4. Tree Operations
Operation	Description
Create	Make a tree
Insert	Add element
Search	Find element
Traversal	Visit all nodes
 5. Types of Trees
🔹 1. Binary Tree

Each node has at most 2 children

 Left child
 Right child

🔹 2. Binary Search Tree (BST)
 Rule:
Left child < Parent
Right child > Parent

 Used for fast searching

🔹 3. AVL Tree

 Self-balancing BST

 Rule:
Height difference between left & right ≤ 1

 Uses rotations to stay balanced

 6. Applications of Tree
Heap → used in priority queue
B-Tree / B+ Tree → databases indexing
Syntax Tree → compiler design
Spanning Tree → networks
DNS (Domain Name System)

 7. GRAPH
 Definition:

A Graph is a collection of:

Vertices (nodes)
Edges (connections)

 Used to represent relationships

 Example:
A —— B
|     |
C —— D

 8. Graph Properties
🔹 Weighted Graph

Edges have values (distance, cost, etc.)

🔹 Connected Graph

All nodes are connected

🔹 Disconnected Graph

Some nodes are not connected

🔹 Directed Graph (Digraph)

Edges have direction

A → B → C
🔹 Undirected Graph

No direction

A — B — C
🔹 Loop (Self Loop)

Node connects to itself

🔹 Cyclic Graph
Directed Cyclic

 Loop exists with direction

Undirected Cyclic

 Can return to same node

 9. Applications of Graph
Google Maps (routes, distances)
Social Networks (friends connection)
Web (web pages as nodes)
Operating System (resource allocation graph)

*/