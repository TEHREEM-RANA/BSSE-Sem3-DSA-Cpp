/*
AVL TREE (Self-Balancing BST)
Definition

An AVL Tree is a self-balancing Binary Search Tree (BST) where:

The difference between heights of left and right subtree is at most 1

Balance Factor Formula

BF=h left−hright
	​


Condition:

-1 ≤ BF ≤ 1

Height Formula (Important Addition)

h=1+max(hleft,hright)

Key Idea
Tree automatically balances itself after insertion/deletion
Uses rotations to maintain balance
Keeps tree height logarithmic
Time Complexity
Operation	Complexity
Search	O(log n)
Insert	O(log n)
Delete	O(log n)

Reason: Height always remains O(log n)

Rotations in AVL Tree
1. LL (Left-Left Case)
Insertion in left subtree of left child
Tree becomes left heavy

Fix:

Right Rotation
2. RR (Right-Right Case)
Insertion in right subtree of right child
Tree becomes right heavy

Fix:

Left Rotation
3. LR (Left-Right Case)
Insertion in right subtree of left child

Fix:

Left Rotation + Right Rotation
4. RL (Right-Left Case)
Insertion in left subtree of right child

Fix:

Right Rotation + Left Rotation
AVL Tree Flowchart (Insertion)
        START
          |
    Insert Node (BST)
          |
     Update Height
          |
   Calculate Balance Factor
          |
   BF in [-1, 1] ?
      /        \
    Yes        No
    |           |
  Finish   Identify Case
               |
     LL / RR / LR / RL
               |
        Apply Rotation
               |
            Finish
DRY RUN (IMPORTANT)
Insert: 10, 20, 30
Step 1:

Insert 10

10
Step 2:

Insert 20

10
  \
   20

BF(10) = -1 → Balanced

Step 3:

Insert 30

10
  \
   20
     \
      30

BF(10) = -2 → Unbalanced

Case:

RR Case

Fix:

Apply Left Rotation
After Rotation:
     20
    /  \
  10    30

Final Tree is Balanced

PASSES & STEPS (IMPORTANT FOR EXAMS)
Passes
One insertion follows one path from root to leaf

Example (Insert 30):

10 → 20 → 30

Passes = 1 (single traversal path)

Steps Count (Detailed)

For inserting one node:

Comparisons → O(log n)
Traversal → log n steps
Height update → constant per node
Balance check → constant per node
Rotation → O(1)
Total Steps Formula

Total Steps ≈ log n + constant operations

Expanded Step Understanding

If tree height = h:

Nodes visited = h
Comparisons = h
Updates = h

Since:
h ≈ log n

So:
Total Steps ≈ log n

Rotations Cost (Important Addition)
Single rotation → O(1)
Double rotation → O(1)
Only a few nodes are modified
Why AVL is Faster than BST (Important Concept)

Normal BST:

Can become skewed → O(n)

AVL Tree:

Always balanced → O(log n)
Properties of AVL Tree (Added)
It is a Binary Search Tree
It maintains balance factor at every node
Height is always minimal (logarithmic)
Rebalancing happens after every insertion/deletion
Applications (Added)
Databases (indexing)
Memory management systems
Searching systems
Real-time applications requiring fast lookup
Short Exam Answer (3–4 lines)

An AVL tree is a self-balancing binary search tree in which the balance factor of every node is between -1 and 1.
It maintains height balance using rotations after insertion and deletion.
This ensures all operations such as search, insert, and delete run in O(log n) time.

Key Points (Exam Ready)
AVL = Self-balancing BST
Balance Factor range: -1 to +1
Uses 4 rotations (LL, RR, LR, RL)
Height always O(log n)
Rotations take constant time
Inorder traversal → always sorted output
Prevents skewed tree formation
Improves search efficiency
*/