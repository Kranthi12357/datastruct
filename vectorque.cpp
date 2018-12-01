#include<iostream>
#include<vector>
using namespace std;

class queue
{

int front;
int rear;
public:
void insert();
void deleted();
void display();

vector<int> q;
queue()
{
	front =-1;
	rear = -1;

}
};
void queue::deleted()
{

	if(front ==-1 && rear == -1)
	{
		cout<<"queue is empty"<<endl;

	}
	else
	if(front == rear)
	{	
		front = -1;
		rear = -1;

	}
	else
	{

	cout<<q[front];
		++front;						

		
	}



}
void queue::display()
{


	for(int i=front ;i<=rear;i++)
	{

		cout<<q[i]<<endl;


	}

}
void  queue::insert()
{

	
	int e;
	cout<<"enter the element"<<endl;
	cin>>e;
	if(front == -1)
	{

		q.push_back(e);
		rear++;
		front ++;
	
	}
	else
	{
	
		q.push_back(e);
		++rear;

	}
}

int main()
{
	int ch;
	queue a;
	while(1)
	{
		cout<<"1.insert"<<endl;
		cout<<"2.delete"<<endl;
		cout<<"3.display"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1 :a.insert();
				break;
		
			case 3 : a.display();
				break;

			case  2 :a.deleted();
					break;
		}
	}	





}
