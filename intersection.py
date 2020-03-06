class Node:
    def __init__(self,data,next):
        self.data = data
        self.next = next

class LinkedList:

    def __init__(self):
        self.head = None

    def append(self,data):
        tmp = Node(data,None)
        if self.head == None:
            self.head = tmp
        else:
            temp = self.head
            while temp.next is not None:
                temp = temp.next
            temp.next = tmp
    def print(self):
        t = self.head
        while t is not None:
            print(t.data)
            t = t.next
    def push(self,data):
        tmp = Node(data,None)
        tmp.next  = self.head
        self.head = tmp
    def insert(self,index,element):
        tmp = Node(element,None)
        temp = self.head
        while temp.data != index:
               temp = temp.next
        tmp.next = temp.next
        temp.next = tmp

    def length(self):
        count = 0
        temp =self.head
        while temp:
            count+=1
            temp = temp.next
        return count
    def insert(self,first,second):
        tmp = first.head
        s = []
        while tmp !=None:
            s.append(tmp.data)
            tmp = tmp.next
        temp = second.head
        while temp !=None:
            if temp.data in s:
                return s.index(temp.data) +1
            else:
                temp = temp.next

if __name__ == '__main__':
    LinkedLists = LinkedList()
    LinkedLists.append(1)
    LinkedLists.append(2)
    LinkedLists.append(2)
    LinkedLists.append(3)
    LinkedLists.append(4)
    LinkedLists.append(4)
    LinkedLists.append(5)
    LinkedLists.append(6)
    LinkedLists.append(7)
    LinkedListss = LinkedList()
    LinkedListss.append(10)
    LinkedListss.append(9)
    LinkedListss.append(8)
    LinkedListss.append(4)
    LinkedListss.append(4)
    LinkedListss.append(5)
    LinkedListss.append(6)
    LinkedListss.append(7)
    LinkedListsss = LinkedList()
    print(LinkedListsss.insert(LinkedLists,LinkedListss))
