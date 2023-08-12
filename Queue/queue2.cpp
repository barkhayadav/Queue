#include<iostream>
using namespace std;

//operations in a queue using linked list

class node
{
    public:
    int data;
    node*next;
};
class queue
{
    node*front;
    node*rear;
    public:
    queue()
    {
        front=NULL;
        rear=NULL;
    }
    void enqueue(int val);
    void dequeue();
    void display();
};

//pushing an element into the queue

void queue::enqueue(int val)
{
    node*temp=new node();
    if(temp==NULL)
    {
        cout<<"Queue is FULL!"<<endl;
    }
    else
    {
        temp->data=val;
        temp->next=NULL;
        if(front==NULL && rear==NULL)
        {
            front=temp;
            rear=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
}

//poping an element out of the queue

void queue::dequeue()
{
    if(front==NULL)
    {
        cout<<"Queue is Empty!"<<endl;
    }
    else
    {
        node*p=front;
        cout<<"The deleted value is "<<front->data<<endl;
        front=front->next;
        delete p;  
    }
}

//diplaying the elements in the queue

void queue::display()
{
    node*q=front;
    while(q!=NULL)
    {
        cout<<q->data<<" ";
        q=q->next;
    }
    cout<<endl;
}
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
}