/* # Dijkstra’s Algorithm

## Definition
Dijkstra’s Algorithm is a shortest path algorithm that finds the minimum distance from one source vertex to all other vertices in a graph.
It works only when all edge weights are positive (or zero).

## Key Points
✔ Single Source Shortest Path Algorithm
✔ Works on Weighted Graphs
✔ Works on Directed and Undirected Graphs
✔ Cannot handle Negative Edge Weights
✔ Uses Greedy Approach

## Formula

Distance Update Formula:

If
dist[u] + weight(u,v) < dist[v]
Then
dist[v] = dist[u] + weight(u,v)

Where:

* dist[u] = distance of current node
* weight(u,v) = edge weight
* dist[v] = neighbor distance

## Working Principle

1. Choose source vertex.
2. Assign distance 0 to source.
3. Assign ∞ (infinity) to all other vertices.
4. Select nearest unvisited vertex.
5. Update distances of neighbors.
6. Mark current vertex as visited.
7. Repeat until all vertices are visited.

## Algorithm Steps

### Start
* Select source node S.
### Initialization
For every vertex:
    distance = ∞
distance[source] = 0
### Processing
While unvisited vertices exist:
1. Pick vertex with minimum distance.
2. Mark it visited.
3. For each neighbor:
      If new distance is smaller:
            Update distance
### Output
Print shortest distance from source to every vertex.
### End
Program terminates.

## Flowchart Steps


Start
  |
  v
Initialize distances
(source = 0, others = ∞)
  |
  v
Choose minimum distance vertex
  |
  v
Visited?
  |
  No
  |
  v
Update neighbor distances
  |
  v
Mark vertex visited
  |
  v
Any unvisited vertex left?
  |
 Yes ---------
  |          |
  -----------|
  |
  v
No
  |
  v
Print Result
  |
  v
End

## Time Complexity

### Using Priority Queue
O(E log V)
Where:
* V = Vertices
* E = Edges

## Space Complexity
O(V)

## Advantages
✔ Fast
✔ Efficient for large graphs
✔ Easy implementation using Priority Queue
✔ Gives shortest path to all vertices
## Disadvantages
✘ Cannot handle negative weights
✘ Wrong results with negative cycles

# Example (Dry Run)
Graph:

```text
A --4--> B
A --1--> C
C --2--> B
B --1--> D
C --5--> D
Source = A

## Initial Distances


A = 0
B = ∞
C = ∞
D = ∞

## Pass 1

Select A
A → B = 4
A → C = 1
Distances:
A = 0
B = 4
C = 1
D = ∞
## Pass 2
Select C (minimum = 1)
C → B
1 + 2 = 3
B = 3
C → D
1 + 5 = 6
D = 6

Distances:

A = 0
B = 3
C = 1
D = 6

## Pass 3
Select B

B → D

3 + 1 = 4

D = 4

Distances:

A = 0
B = 3
C = 1
D = 4

## Pass 4
Select D
No update.
## Final Answer

A = 0
B = 3
C = 1
D = 4
Shortest Path:
A → C → B → D
Cost:
1 + 2 + 1 = 4

## Conclusion
Dijkstra’s Algorithm is one of the fastest shortest-path algorithms and is best used when all edge weights are positive.


# Bellman-Ford Algorithm

## Definition
Bellman-Ford Algorithm finds the shortest path from one source vertex to all other vertices.
Unlike Dijkstra, it can handle Negative Edge Weights.

## Key Points

✔ Single Source Shortest Path
✔ Handles Negative Weights
✔ Detects Negative Cycles
✔ Works on Directed Graphs
✔ Dynamic Relaxation Method

## Formula

Relaxation Formula:

If
dist[u] + weight < dist[v]

Then
dist[v] = dist[u] + weight

## Working Principle

1. Initialize source = 0.
2. Others = ∞.
3. Relax all edges V−1 times.
4. Check one more time:

   * If distance still changes
   * Negative cycle exists.

## Algorithm Steps
### Start
Choose source vertex.
### Initialization
distance[source] = 0
others = ∞
### Relaxation
Repeat V-1 times:
For every edge (u,v,w)
If dist[u] + w < dist[v]
Update dist[v]
### Negative Cycle Check
Run one more pass
If distance changes:
Negative Cycle Exists
### Output
Print shortest distances.
### End


## Flowchart Steps


Start
  |
  v
Initialize distances
  |
  v
Repeat V-1 Times
  |
  v
For every edge
  |
  v
Can distance improve?
  |
 Yes --> Update
  |
 No
  |
  v
Next Edge
  |
  v
All passes complete?
  |
  v
Check Negative Cycle
  |
  v
Print Result
  |
  v
End

## Time Complexity
O(V × E)
## Space Complexity
O(V)

## Advantages
✔ Supports negative weights
✔ Detects negative cycles
✔ Easy concept

## Disadvantages
✘ Slower than Dijkstra
✘ More passes required

# Example (Dry Run)

Vertices:
A, B, C
Edges:
A → B = 4
A → C = 5
B → C = -2
Source = A
## Initial
A = 0
B = ∞
C = ∞

## Formula
Passes = V - 1
For 3 vertices:
Passes = 3 - 1 = 2

## Pass 1
### Edge A→B
0 + 4 = 4
B = 4
### Edge A→C
0 + 5 = 5
C = 5
### Edge B→C
4 + (-2) = 2
C = 2
Distances:
A = 0
B = 4
C = 2
## Pass 2
### Edge A→B
0 + 4 = 4
No Change
### Edge A→C
0 + 5 = 5
No Change
### Edge B→C
4 + (-2) = 2
No Change

Distances:
A = 0
B = 4
C = 2

## Negative Cycle Check

No distance changes.

No Negative Cycle
## Final Answer

A = 0
B = 4
C = 2

Shortest Path:

A → B → C

Cost:

4 + (-2) = 2

## Conclusion
Bellman-Ford Algorithm is slower than Dijkstra but can handle negative weights and detect negative cycles, making it more versatile.

# Quick Exam Difference

| Feature                  | Dijkstra         | Bellman-Ford     |
| ------------------------ | ---------------- | ---------------- |
| Negative Weights         | ❌ No             | ✔ Yes            |
| Negative Cycle Detection | ❌ No             | ✔ Yes            |
| Time Complexity          | O(E log V)       | O(VE)            |
| Faster                   | ✔ Yes            | ❌ No             |
| Greedy                   | ✔ Yes            | ❌ No             |
| Used For                 | Positive Weights | Negative Weights |

**Remember:**

* **Dijkstra = Fast but no negative weights**
* **Bellman-Ford = Slower but handles negative weights + detects negative cycles**
*/