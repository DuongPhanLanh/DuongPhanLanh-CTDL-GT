#include <iostream>
#define SIZE 5

using namespace std;

class Queue {
   private:
  int items[SIZE], front, rear;

   public:
  Queue() {
    front = -1;
    rear = -1;
  }

  bool isFull() {
    if (front == 0 && rear == SIZE - 1) {
      return true;
    }
    return false;
  }

  bool isEmpty() {
    if (front == -1)
      return true;
    else
      return false;
  }

  void enQueue(int element) {
    if (isFull()) {
      cout << "Queue da day";
    } else {
      if (front == -1) front = 0;
      rear++;
      items[rear] = element;
      cout << endl
         << "Chen " << element << endl;
    }
  }

  int deQueue() {
    int e;
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
      return (-1);
    } else {
      e = items[front];
      if (front >= rear) {
        front = -1;
        rear = -1;
      } 
      else {
        front++;
      }
      cout << endl
         << "Deleted -> " << e << endl;
      return (e);
    }
  }

  void display() {
    
    int i;
    if (isEmpty()) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << endl
         << "Muc truoc do la:  " << front;
      cout << endl
         << "Con lai:  ";
      for (i = front; i <= rear; i++)
        cout << items[i] << "  ";
      cout << endl
         << "Phan tu sau la:  " << rear << endl;
    }
  }
};

int main() {
  Queue q;

  q.deQueue();

  
  q.enQueue(1);
  q.enQueue(4);
  q.enQueue(3);
  q.enQueue(2);
  q.enQueue(5);

  // phan tu thu 6 ko co vi SIZE 5
  q.enQueue(6);

  q.display();

  
  q.deQueue();

  
  q.display();

  return 0;
}
