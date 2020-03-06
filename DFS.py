from collections import defaultdict

class graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def AddEdge(self,src,dest):
        self.graph[src].append(dest)

    def DFS(self,index,visited):
        #create a queue and visted array

        visited[index] = True
        print(index,end='')

        for i in self.graph[index]:
             if visited[i] == False:
                self.DFS(i,visited)
    def DFStravesal(self,index):

            visited = [False]*(len(self.graph))

            self.DFS(index,visited)

Graph = graph()
Graph.AddEdge(0,1)
Graph.AddEdge(1,0)
Graph.AddEdge(0,2)
Graph.AddEdge(2,0)
Graph.AddEdge(1,3)
Graph.AddEdge(3,1)
Graph.AddEdge(1,4)
Graph.AddEdge(4,1)
Graph.AddEdge(3,4)
Graph.AddEdge(4,3)
Graph.AddEdge(3,5)
Graph.AddEdge(5,3)
Graph.AddEdge(4,5)
Graph.AddEdge(4,5)




Graph.DFStravesal(0)