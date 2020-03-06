
class AdjNode:
    def __init__(self,data):
        self.data = data
        self.next = None

class Graph:
    def __init__(self,vertices):
        self.v = vertices
        self.graph = [None] * self.v
    def add_edge(self,src,dest):
        node = AdjNode(dest)
        node.next = self.graph[src]
        self.graph[src] = node

        node = AdjNode(src)
        node.next = self.graph[dest]
        self.graph[dest] = node

    def print_graph(self):
        for i in range(self.v):
            print('adjacent vertex of{}'.format(i))
            temp = self.graph[i]
            while temp:
                print(temp.data)
                temp=temp.next

if __name__ == '__main__':
    V = 4
    graph = Graph(V)
    graph.add_edge(0,1)
    graph.add_edge(0,2)
    graph.add_edge(0,3)
    graph.print_graph()