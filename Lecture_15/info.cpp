/*
BALANCED BINARY TREE (Optimized Notes)
Definition

A Balanced Binary Tree is a binary tree where:

The difference between heights of left and right subtree is ≤ 1

Key Condition (VERY IMPORTANT)

For every node:

|Height(left) − Height(right)| ≤ 1

Also:

Left subtree must be balanced
Right subtree must be balanced
Height Formula (Important Addition)

h=1+max(h left,h right)

Base case:

Height of NULL node = 0
Time Complexity

For balanced trees:

Searching → O(log n)
Insertion → O(log n)
Deletion → O(log n)

Reason: height remains small (logarithmic)

DRY RUN (IMPORTANT)
Example Tree
        1
       / \
      2   3
     /
    4
Step-by-Step

Node 4:
Left = 0
Right = 0
Diff = 0 → Balanced

Node 2:
Left = 1 (node 4)
Right = 0
Diff = 1 → Balanced

Node 3:
Left = 0
Right = 0
Diff = 0 → Balanced

Node 1:
Left = 2
Right = 1
Diff = 1 → Balanced

Final Result: Balanced Tree

PASSES & STEPS (VERY IMPORTANT)
1. Height Function

For each node:

Calls itself on left subtree
Calls itself on right subtree

Steps:

Visits each node once

Steps ≈ n

2. isBalanced Function (Naive Approach)

For each node:

Height is calculated repeatedly
Left subtree checked
Right subtree checked

Total Complexity:

O(n²)

Steps Explanation (Naive)

For n nodes:

Each node → height calculation takes O(n)

So:
Total Steps ≈ n × n = n²

3. Optimized Idea (IMPORTANT FOR THEORY)

We combine:

Height calculation
Balance checking

In one traversal

Steps Calculation Example

Tree nodes = 4

Normal Method:
Height calculated many times
Steps ≈ n² = 16
Optimized Method:
Each node visited once

Steps = n = 4

PASSES CONCEPT (ADDED FOR CLARITY)
Naive Approach:
Multiple passes due to repeated height calculations

Passes ≈ n

Optimized Approach:
Single traversal of tree

Passes = 1

FLOWCHART (BALANCED TREE CHECK)
Optimized Approach Flow
        START
          |
     Is Node NULL?
       /       \
     Yes       No
     |          |
   Return 0   Check Left Subtree
                  |
         Left invalid?
            /        \
          Yes        No
          |           |
       Stop        Check Right Subtree
                          |
                 Right invalid?
                    /        \
                  Yes        No
                  |           |
               Stop        Compare Heights
                                |
                     |left - right| > 1 ?
                          /        \
                        Yes        No
                        |           |
                     Not Balanced   Return Height
                                   |
                                  END
Types of Balanced Trees (Important Addition)
AVL Tree
Red-Black Tree
B-Trees (used in databases)
Advantages
Operations in O(log n)
Tree height remains small
Efficient searching and updates
Suitable for large datasets
Good for range queries
Disadvantages (Added)
Complex implementation
Requires rotations (in AVL/Red-Black trees)
Extra work to maintain balance
Short Exam Answer (3–4 lines)

A balanced binary tree is a tree in which the height difference between left and right subtrees of every node is at most 1.
This ensures efficient operations like insertion, deletion, and searching in O(log n) time.
Examples include AVL trees and Red-Black trees.
*/