# Introduction to graph 
- Types , Convention uses
- directed graph and undirected graph
- cyles in a graph 
  - graph can be open also like binary tree
  - cycles means start and end node are the same 

##### paths 

- path is a sequence of edges that connect a sequence of vertices where every vertex appears exactly once
- a node cannot appear twice in a path
###### Degree of the graph

- degree of a node is the number of edges connected to that node
- in directed graph , in-degree and out-degree are different
- in-degree is the number of edges that point to that node
- out-degree is the number of edges that point away from that node
- in undirected graph , degree is the number of edges connected to that node
- degree of a graph is the sum of the degrees of all the nodes in the graph
`total degree of the graph == 2Edege`

### edge weight 
- edge weight is a number associated with an edge that represents some property of the edge


# graph representation in c++
- Input n - nodes
- Input m - edges
- Input edge list


## store 
- matrix way 
- adjacency list way
- adjacency matrix way
 

space NxN

in adjanceny list way we store in vector
- vector of vector
- vector of list
 spcae 2E

# way to store weighted graph
- matrix way
- adjacency list way
- adjacency matrix way
- heap way
- priority queue way
- vector of pair way
- vector of vector of pair way   // most used

int // pair vector jab define karenge
