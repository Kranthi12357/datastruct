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

    def detectloop(self):
        s = set()
        tmp = self.head
        while tmp is not None:

            if tmp  in s:
                return True

            s.add(tmp)
            tmp = tmp.next
        return False

    def detectloop1(self):
        s = set()
        tmp = self.head
        while tmp is not None:

            if tmp in s:
                return tmp

            s.add(tmp)
            tmp = tmp.next
        return False

    def length_of_loop(self):
        if(self.detectloop()):
            tmp = self.detectloop1()
            val = tmp.data
            count = 0
            while tmp is not None:
                if tmp is None:
                    return 0
                count = count +1
                tmp = tmp.next;
                if tmp.data == val:
                    return count
        else:
            return  "loop not found"

    def makeloop(self,value):
        l = self.head
        for i in range(1,value):
            l = l.next

        end = self.head
        while end.next is not None:
            end = end.next

        end.next = l

if __name__ == '__main__':
    LinkedLists = LinkedList()
    LinkedLists.append(10)
    LinkedLists.append(20)
    LinkedLists.push(40)
    LinkedLists.push(60)
    LinkedLists.insert(20,70)
    LinkedLists.insert(10,80)
    LinkedLists.insert(10,80)
    LinkedLists.insert(10,80)
    LinkedLists.makeloop(8)
    print(LinkedLists.length_of_loop())