#include<iostream>
using namespace std;

class circular
{

public:
int front;
int rear;
int *que;
int size;


public:
void display();
void insert(int ele);
void delet();
circular()
{

size = 5;
que = new int[size];

front = -1;
rear = -1;

}


};

void circular::insert(int ele)
{


if((front==0&&rear == (size-1))||(rear == front-1))
{


cout<<"stack is full";


}
else
if(rear == (size-1) )
{

rear =0;

que[rear] = ele;

}
else
if(front==-1&&rear==-1)
{

que[++rear]= ele;

++front;

}
else
{


que[++rear] = ele;


}





}

void circular:: delet()
{

if(front == -1&& rear == -1 )
{


cout<<"list is empty";

}
else
if(front == rear )
{

front = -1;
rear = -1;

}
else
if(front == (size-1))
{


front = 0;

}




else
{

cout<<que[front];
++front;


}
}


void circular::display()
{
	int i;
if(front==-1&&rear == -1)
{


cout<<"list is empty";


}
else
if(rear>= front)
{
	
for(i=front;i<=rear;i++)
{

cout<<que[i];


}

}
else
{

for(i = front ;i<=size ;i++)
{
  cout<< " VALUES"<<que[i]<<endl;

}

for(i=0;i<=rear ;i++)
	cout<<"VALUES "<<que[i]<<endl;


}
}

int main()
{

	circular a;
int ch,ele;

while(1)
{



cout<<"1.insert"<<endl;
cout<<"2.display"<<endl;
cout<<"3.delete"<<endl;
cout<<"enter your choice";
cin>>ch;

switch(ch)
{

	case 1 : {
			cout<<"enter your element";
			cin>>ele;

			a.insert(ele);


			}break;


	case 2 : a.display();

			break;




	case 3 : a.delet();
			break;

	
}






}


}
