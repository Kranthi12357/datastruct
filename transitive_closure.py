from collections import defaultdict


class Graph:
    def __init__(self,size):
        self.size = size
        self.graph = defaultdict(list)
        self.tc = [[0 for i in range(self.size)] for  i in range(self.size)]
    def DFS(self,index,visited):
        visited[index] = True

        for i in self.graph[index]:
            if visited[i] == False:
                self.DFS(i,visited)

    def DFSgraph(self,index):

        visited = [False]*(len(self.graph))

        self.DFS(index,visited)
    def addEdge(self,v,w):
        self.graph[v].append(w)
    def MotherVertex(self):
        v =  0
        visited =[False]*(self.size)
        for i in range(self.size):
            if visited[i] == False:
                self.DFS(i,visited)
                v = i

        visited = [False]*((self.size))
        self.DFS(v,visited)
        if any(i == False for i in visited):
            return -1
        else:
            return v


graph = Graph(7)
graph.addEdge(0, 1)
graph.addEdge(0, 2)
graph.addEdge(1, 3)
graph.addEdge(4, 1)
graph.addEdge(6, 4)
graph.addEdge(5, 6)
graph.addEdge(5, 2)
graph.addEdge(6, 0)

print(graph.MotherVertex())