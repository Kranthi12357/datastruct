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

    def printpos(self,ele):
        tmp =self.head
        i = 0
        while i < ele:
            tmp = tmp.next
            i+=1
        if tmp is None:
            return
        else :
            print(tmp.data)
    def printrevpos(self,ele):
        i = 1
        temp =self.head
        while i < (self.length() - ele +1):
            temp = temp.next
            i+=1
        if temp is None:
            return
        else:
             print(temp.data)


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
    LinkedLists.push(60)
    LinkedLists.insert(20,70)
    LinkedLists.insert(10,80)
    print(LinkedLists.length())
    #LinkedLists.print()
    #LinkedLists.printpos(6)
    LinkedLists.printrevpos(6)