#include<iostream>
using namespace std;
class Node{
public:
  int data;
  int pow;
  Node*next;
};
class Poly
{
public:
  void readpoly(Node* &head);
  void polyadd(Node* head4 , Node* head5 , Node* head6);
  void dispaly(Node* head);

};
void Poly::polyadd(Node* head4,Node* head5,Node* head6)
{
  while(head4->next && head5->next)
  {
    if(head4->pow >head5->pow)
    {
      head6->pow = head4->pow;
      head6->data = head4->data;
      head4 = head4->next;
    }
    else
    if(head4->pow <head5->pow)
    {
      head6->pow = head5->pow;
      head6->data = head5->data;
      head5 = head5->next;
    }
    else{
      head6->pow = head4->pow;
      head6->data = head4->data + head5->data;
      head4 = head4->next;
      head5 = head5->next;

    }
    head6->next = new Node;
    head6 = head6->next;
    head6->next = NULL;
  }
  while(head4->next || head5->next)
  {
    if(head4->next)
    {
      head6->pow = head4->pow;
      head6->data = head4->data;
      head4 = head4->next;
    }
    if(head5->next){
      head6->pow = head5->pow;
      head6->data = head5->data;
      head5 = head5->next;
    }
    head6->next = new Node;
    head6 = head6->next;
    head6->next = NULL;
  }
while(head4->next==NULL && head5->next==NULL)
  {  head6->pow = head4->pow;
      head6->data = head4->data + head5->data;
      head4 = head4->next;
      head5 = head5->next;

    head6->next = new Node;
    head6 = head6->next;
    head6->next = NULL;
  }
}
void Poly::readpoly(Node* &head){
  Node*tmp=new Node;
  cout<<"enter the data to insert"<<endl;
  cin>>tmp->data;
  cin>>tmp->pow;
  tmp->next = NULL;
  if(head == NULL){
    head = tmp;
  }
  else
  {
    Node*p = head;
    while(p->next!=NULL)
    {
      p=p->next;
    }
    p->next = tmp;

  }

}
void Poly::dispaly(Node* head)
{
    Node* p = head;
        while(p!=NULL)
        {
          cout<<p->data<<" "<<p->pow<<endl;
          p = p->next;
        }

}

int main()
{
  Node*head1 = NULL; Node*head2 = NULL;Node* head7 = NULL;
    Poly a;
    int ch;
    while(1)
    {
      cout<<"1.poly"<<endl;
      cout<<"2.polyadd"<<endl;
      cout<<"3.poly display"<<endl;
      cout<<"select the option"<<endl;
      cin>>ch;
      switch (ch) {
        case /* value */1:{
          int c;
          cout<<"1.polynomial "<<endl;
          cout<<"2.polynomial"<<endl;
          cin>>c;
          switch (c) {
            case /* value */1:a.readpoly(head1);
            break;
            case 2 : a.readpoly(head2);
            break;
          }
        }break;
        case 2 : {
          int d;
          cout<<"1.polynomial "<<endl;
          cout<<"2.polynomial"<<endl;
          cout<<"final"<<endl;
          cin>>d;
          switch (d) {
            case /* value */1:a.dispaly(head1);
            break;
            case 2 : a.dispaly(head2);
            break;
            case 3 : a.dispaly(head7);
            break;
          }
        }break;
        case 3 :{
                  head7 = new Node;
                  a.polyadd(head1,head2,head7);
              }
        break;
      }
    }


}
