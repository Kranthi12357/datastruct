class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
class LinkedList:
    def __init__(self):
        self.head = None
    def prin(self):
        tmp = self.head
        while tmp:
            print(tmp.data)
            tmp =tmp.next
    def insert(self,value):
        new_node = Node(value)
        if self.head == None:
            self.head = new_node
        else:
            tmp = self.head
            while  tmp.next is not None:
                tmp = tmp.next
            tmp.next = new_node

    def insertbe(self,value):
        new_node = Node(value)
        new_node.next = self.head
        self.head = new_node
    def delete(self,value):
        tmp = self.head
        if (tmp is not None):
            if (tmp.data == value):
                self.head = tmp.next
                tmp.next = None
                return
        while(tmp is not None):
            if tmp.data == value:
                break
            prev = tmp
            tmp = tmp.next
        if tmp == None:
            return
        prev.next = tmp.next
        tmp.next = None
if __name__ =='__main__':
    LinkedLists = LinkedList()
    LinkedLists.insert(3)
    LinkedLists.insert(2)
    LinkedLists.insert(1)
    LinkedLists.insertbe(0)
    LinkedLists.delete(9)
    LinkedLists.prin()
