class phone:
    def __init__(self,name):
        self.name = name
        self.next = None
class mobile:
    def __init__(self):
        self.head = None
    def prin(self):
        tmp = self.head
        while tmp:
            print(tmp.name)
            tmp = tmp.next

if __name__ =='__main__':
    mobile1 = mobile()
    mobile1.head = phone("hello")
    s = phone('hi')
    mobile1.head.next = s
    mobile1.prin()
