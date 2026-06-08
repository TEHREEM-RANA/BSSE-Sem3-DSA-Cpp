/* BINARY TREE (Optimized Notes – English)
🔹 Definition

A Binary Tree is a non-linear hierarchical data structure where each node has at most 2 children:

Left Child
Right Child

Top node = Root
Last nodes = Leaf Nodes

🔹 Terminologies (Important for Exams)
Parent Node → A node that has children
Child Node → A node under a parent
Ancestor → Path from root to a node
Descendant → All nodes below a node
Subtree → A node + its descendants
Leaf Node → Node with no children
Internal Node → Node with at least 1 child
Edge → Connection between nodes
Path → Sequence of connected nodes
Depth/Level → Number of edges from root
Height → Longest path from root to leaf

🔹 Types
1. Simple Binary Tree
No restriction
Each node has ≤ 2 children
2. Binary Search Tree (BST)

Follows rule:

 Left < Root < Right

🔹  Valid BST Conditions

✔ All values in left subtree are smaller
✔ All values in right subtree are greater
✔ No duplicate values

 Not BST if:

Duplicate exists
Smaller value in right subtree
Larger value in left subtree

 Important Rule:
Condition applies to the entire subtree, not just direct children

🔹 Operations
Traversal (DFS, BFS)
Search
Insertion
Deletion
🔹 Traversal Types
1. Inorder (L → Root → R)

 Gives sorted output in BST

2. Preorder (Root → L → R)
3. Postorder (L → R → Root)
 DRY RUN (Insertion in BST)

Insert: 50, 30, 70, 20, 40

Step 1: 50 → Root
Step 2: 30 → left of 50
Step 3: 70 → right of 50
Step 4: 20 → left of 30
Step 5: 40 → right of 30
Final Tree:
        50
       /  \
     30    70
    /  \
  20   40
🔹 Inorder Traversal

Steps:

20 → 30 → 40 → 50 → 70

 Output:

20 30 40 50 70

 Exam Tip:
In BST → Inorder traversal = Sorted order

 Search Dry Run (Key = 40)
50 → go left
30 → go right
40 → FOUND

 Total Steps = 3

 Time Complexity (VERY IMPORTANT)
🔹 Traversal
Visit all nodes
 O(n)
🔹 BST Search
Best Case (Balanced Tree) → O(log n)
Worst Case (Skewed Tree) → O(n)
 Steps & Passes (IMPORTANT FOR DRY RUN)
🔹 1. Steps Formula

 Steps = Number of nodes visited

Example:

50 → Step 1  
30 → Step 2  
40 → Step 3  

 Total Steps = 3

🔹 2. Number of Passes

Pass = One complete iteration or comparison level

For BST Search:

 Passes ≈ Height of tree

Formula:
Best Case:
 Passes = log₂(n)
Worst Case:
 Passes = n
Example:

Searching 40:

Pass 1: Compare with 50  
Pass 2: Compare with 30  
Pass 3: Compare with 40  

 Passes = 3

 FLOWCHART (BST SEARCH)
        START
          |
          v
     Is Tree Empty?
       /       \
     Yes       No
     |          |
   STOP     Compare Key with Root
                  |
        -----------------------
        |         |          |
     Equal     Less       Greater
      |          |           |
    FOUND    Go Left     Go Right
      |          |           |
     STOP   Repeat      Repeat
🔹 Advantages

 Fast searching (BST)
Easy to implement
 Good for hierarchical data
 Relatively memory efficient

🔹 Disadvantages

 Only 2 children allowed
 Extra memory for pointers
Performance degrades in skewed tree

🔹 Applications
File Systems (Hierarchical Data)
Huffman Coding
Decision Trees
Database Indexing

 Important Points (Exam Booster)
BST Rule: Left < Root < Right
Duplicates usually not allowed
Inorder traversal = Sorted output
Skewed tree → Worst case O(n)
Each visit = 1 step
Height of tree affects performance

Extra Coverage: Types of Binary Trees
Full Binary Tree: Every node has either 0 or 2 children. (No node has only 1 child).
Complete Binary Tree: All levels are completely filled, except possibly the last, which is filled from
 left to right. (Used in Heap Sort!).
Perfect Binary Tree: All internal nodes have 2 children, and all leaves are at the same level.
Skewed Binary Tree: All nodes only have left children (Left-Skewed) or only right children (Right-Skewed).
Basically, looks like a linked list.

Formula for Passes and Steps
Best / Average Case (Balanced Tree):
Passes (Levels searched) ≈ log₂(n)
Steps (Comparisons) ≈ log₂(n)
Worst Case (Skewed Tree):
Passes = n
Steps = n

Time Complexity: Best O(1), Average BST O(log n), binary tree Worst O(n) (if skewed).
Space Complexity: O(h) for recursion stack.
*/