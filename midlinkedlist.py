import math
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
    def middle(self):
        tmp =self.head
        if (self.length())%2 ==0:
            i = 0
            while i < (self.length())/2:
                tmp =tmp.next
                i  = i+1
            print(tmp.data)
        else:
            i = 0
            while i < (self.length())/2-1:
                tmp =tmp.next
                i  = i+1
            print(tmp.data)





    def length(self):
        count = 0
        temp =self.head
        while temp:
            count+=1
            temp = temp.next
        return count

if __name__ == '__main__':
    LinkedLists = LinkedList()
    LinkedLists.append(10)
    LinkedLists.append(20)

    LinkedLists.push(40)
    #LinkedLists.push(60)
    LinkedLists.insert(20,70)
    LinkedLists.insert(10,80)
    LinkedLists.print()
    LinkedLists.middle()
    print(LinkedLists.length())