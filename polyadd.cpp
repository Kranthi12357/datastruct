#include<iostream>
using namespace std;

class node
{
	int coeff;
	int pow;
	node*next;
	friend class polyadd;

};
class polyadd
{
public:
	node*head;
	node*head1;
	node*head2;
	polyadd()
	{
			head = NULL;
			head1 = NULL;
			head2 = NULL;
	}
	void createNode(node* p);
	void createnode();
	void display(node* &p);
	void display1();
	void polyadd1(node* r,node* p ,node* q);
	void polyadd2();
};
void polyadd::display1()
{
		int k;
		cout<<"enter your choice"<<endl;
		cin>>k;
		switch (k) {
			case /* value */1:display(head);
			break;
			case 2 : display(head1);
			break;
			case 3 : display(head2);
			break;
		}


}
void polyadd::polyadd2()
{

	head2 = new node;
	polyadd1(head2,head,head1);


}
void polyadd::createnode()
{	int tmp;
		cout<<"enter you choice"<<endl;
		cin>>tmp;
		switch(tmp)
		{
				case 1: createNode(head);
				break;
			case 2 : createNode(head1);
			break;
		}

}
void polyadd::polyadd1(node* r,node* p,node* q)
{
	while(p->next && q->next)
	{

		if(p->pow > q->pow )
		{
				r->pow = p->pow;
				r->coeff = p->coeff;
				p = p->next;

		}
		else
		if(p->pow < q->pow )
				{
						r->pow = q->pow;
						r->coeff = q->coeff;
						q = q->next;

				}
				else
				{
						r->pow = p->pow;
						r->coeff = p->coeff + q->coeff;
						p = p->next;
						q = q->next;


				}

				r->next = new node;
				r = r->next;
				r ->next = NULL;

	}
	while(p->next || q->next)
	{
			if(p->next)
			{
					r->pow = p->pow;
					r->coeff = p->coeff;
					p=p->next;


			}
			if(q->next)
				{
						r->pow = q->pow;
						r->coeff = q->coeff;
						q=q->next;


				}

				r->next = new node;
				r = r->next;
				r ->next = NULL;

	}



}
void polyadd::display(node* &p)
{
	while(p!=NULL)
	{
			cout<<p->coeff<<"x"<<"^"<<p->pow<<endl;
			p = p->next;
			if(p!=NULL)
			{

				cout<<"+";
			}

	}
}
void polyadd::createNode( node* t)
{

			cout<<"enter the coefficient and pow"<<endl;
			node*tmp = new node;
			cin>>tmp->pow;
			cin>>tmp->coeff;
			if(t == NULL)
			{
				t = tmp;
			}
			else
			{
					node*p = t;
					while(p->next!=NULL)
					{
							p = p->next;

					}
							p->next = tmp;
							tmp->next = NULL;
			}
}

int main()
{
		int ch;
		polyadd a;
		while(1)
		{
				cout<<"1.append"<<endl;
				cout<<"enter your choice"<<endl;
				cin>>ch;
				switch (ch) {
					case /* value */1:
						{
								a.createnode();

						}break;

						case 2 : a.display1();
							break;

			case 3 : a.polyadd2();
							break;
		}


	}



}
