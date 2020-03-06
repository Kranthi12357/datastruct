#remove duplicates from a unsorted linked list

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

    def delete(self,datas):
        temp = self.head
        prev = None
        if temp is not None:
            if temp.data == datas:
                self.head = temp.next
                temp = None
                return
        while temp.data != datas:
            prev = temp
            temp = temp.next
        prev.next = temp.next
        temp = None
    def removedup(self):
        temp =self.head
        s = set()
        while temp is not None:

           if temp.data in s:
                self.delete(temp.data)
           else:
               s.add(temp.data)
           temp = temp.next


if __name__ == '__main__':
    LinkedLists = LinkedList()
    LinkedLists.append(10)
    LinkedLists.append(30)
    LinkedLists.append(10)
    LinkedLists.append(20)
    LinkedLists.append(30)
    LinkedLists.append(40)
    LinkedLists.append(40)
    LinkedLists.append(10)
    LinkedLists.removedup()
    LinkedLists.print()