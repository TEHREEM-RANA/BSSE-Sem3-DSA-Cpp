/*TREE TRAVERSAL 
🔹 Definition

Tree Traversal means visiting each node exactly once in a specific order.

 Unlike arrays/linked lists, trees have multiple traversal methods because of hierarchical structure.

🔹 Types of Traversal
Tree traversals are broadly classified into two categories:
1. Depth First Search (DFS)
Preorder
Inorder
Postorder
2. Breadth First Search (BFS)
Level Order Traversal
(Bread First Search)
🔹 Example Tree
        1
       / \
      2   3
     / \   \
    4   5   6
DRY RUN (VERY IMPORTANT)
🔹 Preorder (Root → Left → Right)
Steps:
1 → 2 → 4 → 5 → 3 → 6

 Output:

1 2 4 5 3 6

 Logic: Visit root first, then go deep left, then right

🔹 Inorder (Left → Root → Right)
Steps:
4 → 2 → 5 → 1 → 3 → 6

 Output:

4 2 5 1 3 6

 Important: In BST → gives sorted order

🔹 Postorder (Left → Right → Root)
Steps:
4 → 5 → 2 → 6 → 3 → 1

 Output:

4 5 2 6 3 1

 Logic: Visit children first, root at last

🔹 Level Order (BFS)
Level-wise:
Level 0 → 1
Level 1 → 2, 3
Level 2 → 4, 5, 6

 Output:

1 2 3 4 5 6

 Uses Queue (FIFO)

 PASSES & STEPS 
🔹 1. DFS Traversals (Pre, In, Post)

 Each node visited exactly once

Formula:
Steps = n
Passes = n (each node = one visit/pass)
Example:
Nodes = 6
Steps = 6
Passes = 6

 Time Complexity:

O(n)

 Auxiliary Space:

O(h)   (h = height of tree)
🔹 2. BFS (Level Order)

 Each node:

Enqueued once
Dequeued once
Formula:
Enqueue = n
Dequeue = n

 Total Steps ≈ 2n

 Passes (Level-wise):

Passes = Number of levels = height (h)
Example:
Levels = 3
Passes = 3
Steps ≈ 6 enqueue + 6 dequeue = 12

 Time Complexity:

O(n)

 Auxiliary Space:

O(n)   (queue stores nodes)
 FLOWCHARTS (IMPORTANT FOR EXAMS)
🔹 DFS Traversal Flow (General)
        START
          |
          v
     Is Node NULL?
       /       \
     Yes       No
     |          |
   RETURN   Visit Node
                  |
            Go Left Subtree
                  |
            Go Right Subtree
                  |
                 END
🔹 BFS (Level Order) Flowchart
        START
          |
          v
     Create Queue
          |
     Insert Root
          |
     While Queue NOT Empty
          |
     Remove (Dequeue) Node
          |
       Visit Node
          |
   Add Left Child (if exists)
          |
   Add Right Child (if exists)
          |
        Repeat
          |
         END


 SHORT EXAM DEFINITIONS (3–4 lines)
🔹 Preorder

Traversal where root is visited first, then left subtree, then right subtree.

🔹 Inorder

Traversal where left subtree is visited first, then root, then right subtree.

🔹 Postorder

Traversal where left and right subtree are visited first, then root.

🔹 Level Order

Traversal where nodes are visited level by level using queue (BFS).

 Important Points (Exam Booster)
Tree traversal = visit each node once only
DFS uses recursion or stack
BFS uses queue (FIFO)
Inorder traversal → sorted output (BST only)
DFS space = O(h), BFS space = O(n)
Steps (DFS) = n, Steps (BFS) ≈ 2n
Passes (DFS) = n, Passes (BFS) = levels (h)
*/