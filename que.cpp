

#include<iostream>
using namespace std;


class queqe1
{
public:
int size ;
int *que;
int front;
int rear;
queqe1( )
{ size = 5;

que = new int;
front = -1;
rear = -1;
}

void delet();
void display();

void insertEle(int );


};


void queqe1::insertEle(int no)
{


if(front== 0 && rear== (size-1))
{


cout<<"queqe is full";

}
else
if(front==(size-2)&& rear == (size-1) )
{


cout<<"queqe is full";

}
else
if(front== -1 )
{

que[++rear] = no;
++front;

}
else
{


que[++rear]= no;

}


}

void queqe1::delet()
{

if(front==-1&& rear==-1)
{


cout<<"list is empty";

}
else
if(front == rear)
{


front = -1;
rear = -1;

}
else
{


cout<<que[front];
++front;


}

}

void queqe1::display()
{
int i;


if(rear == -1 &&front ==-1)
{
cout<<"list is empty";

}
else
{

for(i=front;i<=rear;i++)
{

cout<<"values"<<que[i]<<endl;
}


}


}


int main()
{	

queqe1 z;
int ch,ele;
while(1)
{
	cout<<"1.insert"<<endl;
	cout<<"2.delet"<<endl;
	cout<<"3.display"<<endl;
	cout<<"enter your choice";
	cin>>ch;
	switch(ch)
	{

		case 1 :{	cout<<"enter your ele";
				cin>>ele;
				 z.insertEle(ele); 
			}
				break;
		case 2 :     z.delet();
				break;
		case 3 : z.display();
				break;
	}
}




}

