from collections import defaultdict

class graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def AddEdge(self,src,dest):
        self.graph[src].append(dest)

    def BFS(self,index):
        #create a queue and visted array
        queue = []
        visited  =[False]*(len(self.graph))

        queue.append(index)
        visited[index] = True

        while queue:

            value =queue.pop(0)
            print(value)

            for i in self.graph[value]:
                if visited[i] == False:
                    queue.append(i)
                    visited[i] = True

Graph = graph()
Graph.AddEdge(0,1)
Graph.AddEdge(0,2)
Graph.AddEdge(1,2)
Graph.AddEdge(2,0)
Graph.AddEdge(2,3)
Graph.AddEdge(3,3)
Graph.BFS(3)