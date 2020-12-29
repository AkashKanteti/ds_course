//-----------------This program contains answers to all three questions-------------------
#include<iostream>
using namespace std;
class ll;
class node
{
	int data;
	node *next;
	public:
		node(int x)
		{
			next=NULL;
			data=x;
		}
	friend class ll;
};
class ll
{
	node *head;
	public:
		ll()
		{
			head=NULL;
		}
		void insert_any(int,int);
		void delete_beg();
		void delete_end();
		void display();
};
void ll::display()
{
	node *t=head;
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->next;
	}
}
//------------------------------------Q1--------------------------------
void ll::insert_any(int x,int data)
{
	node *t=new node(data);
	node *temp=head;
	if(x==0)
	{
		t->next=head;
		head=t;
	}
	else
	{
		for(int i=1;i<x;++i,temp=temp->next);
		t->next=temp->next;
		temp->next=t;
	}
}
//------------------------------------Q2--------------------------------
void ll::delete_beg()
{
	if(head==NULL)
	{
		cout<<"nothing to delete"<<endl;
	}
	else
	{
		node *temp=head->next;
		delete head;
		head=temp;
	}
}
//------------------------------------Q3--------------------------------
void ll::delete_end()
{
	if(head==NULL)
		cout<<"nothing to delete"<<endl;
	else
	{
		node *t=head,*i;
		if(t->next==NULL)
			head=NULL;
		else{
			for(;t->next!=NULL;)
			{
				i=t;
				t=t->next;	
			}
			i->next=NULL;
		}
	}
}
int main()
{
	ll l;
	l.insert_any(0,10);
	l.insert_any(1,20);
	l.insert_any(0,-10);
	l.insert_any(1,0);
	l.display();
	l.delete_beg();
	l.display();
	l.delete_end();
	l.display();
}








