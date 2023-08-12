#include<iostream>
using namespace std;

//operations in a queue

class queue
{
    public:
    int size;
    int front;
    int rear;
    int *a;
    queue(int size)
    {
        this->size=size;
        front=-1;
        rear=-1;
        a=new int[size];
    }
    int enqueue(int val);
    void dequeue();
    void display();
    void isEmpty();
    void isFull();
    int firstElement();
    int lastElement();
};

//pushing an element into the queue

int queue::enqueue(int val)
{
    if(rear==size-1)
    {
        cout<<"Queue is Full!"<<endl;
    }
    else
    {
        rear++;
        a[rear]=val;
    }
}

//poping an element out of the queue

void queue::dequeue()
{
    if(front==rear)
    {
        cout<<"Queue is Empty!"<<endl;
    }
    else
    {
        front++;
        cout<<"The deleted value is "<<a[front]<<endl;
    }
}

//diplaying the elements in the queue

void queue::display()
{
    for(int i=front+1;i<=rear;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

//checking if the queue is empty

void queue::isEmpty()
{
    if(front==rear)
    {
        cout<<"The queue is Empty!"<<endl;
    }
    else
    {
        cout<<"The queue is not Empty!"<<endl;
    }
}

//checking if the queue is full

void queue::isFull()
{
    if(rear==size-1)
    {
        cout<<"The queue is full!"<<endl;
    }
    else
    {
        cout<<"The queue is not full!"<<endl;
    }
}

//displaying the first element in the queue

int queue::firstElement()
{
    if(front==-1)
    {
        cout<<"Queue is Empty!"<<endl;
    }
    return a[front+1];
}

//displaying the last element in the queue

int queue::lastElement()
{
    if(rear==-1)
    {
        cout<<"Queue is Empty!"<<endl;
    }
    return a[rear];
}
int main()
{
    queue q(20);
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
    cout<<"The first element in the queue is "<<q.firstElement()<<endl;
    cout<<"The last element in the queue is "<<q.lastElement()<<endl;

}
