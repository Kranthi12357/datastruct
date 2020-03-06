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
    def swap(self,x,y):
        if x is y:
            return
        tmpx = self.head
        prevx = None
        while tmpx!=None and tmpx.data != x:
            prevy = tmpx
            tmpx = tmpx.next

        tmpy = self.head
        prevy =None
        while tmpy != None and  tmpy.data !=y:
            prevy = tmpy
            tmpy = tmpy.next
        if tmpy == None or tmpx == None:
            return

        if prevx!=None:
            prevx.next = tmpy
        else:
            self.head = tmpy

        if prevy != None:
            prevy.next = tmpx
        else:
            self.head = tmpx

        temp = tmpx.next
        tmpx.next = tmpy.next
        tmpy.next = temp


if __name__ == '__main__':
    LinkedLists = LinkedList()
    LinkedLists.append(10)
    LinkedLists.append(20)
    LinkedLists.append(30)
    LinkedLists.append(40)
    LinkedLists.swap(20,40)
    LinkedLists.print()