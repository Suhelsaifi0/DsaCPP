#include <iostream>
using namespace std;

class Cqueue
{

public:
  int *arr;
  int size;
  int front;
  int rear;

  Cqueue(int size)
  {
    arr = new int[size];
    this->size = size;
    front = -1;
    rear = -1;
  }

  void push(int value)
  {
    // OverFlow Condition
    // Element Case -> First Element
    // Circular Case
    // Normal Case
    if ((front == 0 && rear == size - 1) || (rear == front - 1))
    {
      cout << "Stack OverFlow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
      front++;
      rear++;
      arr[rear] = value;
    }

    else if (rear == size - 1 && front != 0)
    {
      rear = 0;
      arr[rear] = value;
    }

    else
    {
      rear++;
      arr[rear] = value;
    }
  }

  void pop()
  {
    // UnderFlow Condition
    // Single Element
    // Circular Case
    // Normal Case
    if (front == -1 && rear == -1)
    {
      cout << "UnderFlow Stack" << endl;
    }
    else if (front == rear)
    {
      arr[front] = -1;
      front = -1;
      rear = -1;
    }
    else if (front == size - 1)
    {
      arr[front] = -1;
      front = 0;
    }
    else
    {
      arr[front] = -1;
      front++;
    }
  }

  void print()
  {
    cout << "PRINTED QUEUE" << endl;
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{

  Cqueue cq(5);
  cq.push(10);
  cq.print();
  cq.push(20);
  cq.print();
  cq.push(30);
  cq.print();
  cq.push(40);
  cq.print();
  cq.push(50);
  cq.print();
  cq.push(100);
  cq.print();

  cq.pop();
  cq.print();
  cq.pop();
  cq.print();
  cq.pop();
  cq.print();
  cq.pop();
  cq.print();
  cq.push(100);
  cq.print();
  cq.push(110);
  cq.print();
  cq.push(120);
  cq.print();
  cq.push(130);
  cq.print();
  cq.push(130);
  cq.print();

  return 0;
}
