#include <bits/stdc++.h>
using namespace std;

struct Queue {
	int size, capacity;
	int* queue;
	Queue(int c)
	{
		size  = 0;
		capacity = c;
		queue = new int[capacity];
	}
	void queueEnqueue(int data)
	{
		if (capacity == size) {
			cout<<"\nQueue is full\n";
			return;
		}
		else {
			queue[size] = data;
			size++;
		}
		return;
	}
    void queueDequeue() {
        if(size==0){
            cout<<"Empty queue"<<"\n";

        }
       else {
            for (int i = 0; i < size - 1; i++) {
                queue[i] = queue[i + 1];
            }
            size--;
        }
    }
    void isFull() {
        if(size==capacity){
            cout<<"Queue is Full"<<"\n";
        }
        else {
            cout<<"Queue is not full"<<"\n";
        }
    }
    void isEmpty() {
        if(size==0){
            cout<<"Queue is Empty"<<"\n";
        }
        else {
            cout<<"Queue is not Empty"<<"\n";
        }
    }
};

int main()
{

	Queue q(4);
    q.isEmpty();
	q.queueEnqueue(20);
	q.queueEnqueue(30);
	q.queueEnqueue(40);
	q.queueEnqueue(50);
    q.isFull();
    q.queueDequeue();
	q.isFull();
	return 0;
}
