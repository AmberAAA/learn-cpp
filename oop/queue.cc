#include <iostream>

typedef int Item;

class Queue
{
  struct Node
  {
    Item item;
    struct Node *next;
  };

private:
  enum
  {
    Q_SIZE = 10
  };

  Node *front;
  Node *rear;
  int items;
  const int qSize;

public:
  Queue(int qs = Q_SIZE);
  ~Queue();
  bool isEmpty() const;
  bool isFull() const;
  int queueCount() const;
  bool enQueue(const Item &item);
  bool deQueue(Item &item);
};

Queue::Queue(int qs) : qSize(qs)
{
  front = rear = nullptr;
  items = 0;
}

bool Queue::isEmpty() const
{
  return items == 0;
}

bool Queue::isFull() const
{
  return qSize == items;
}

int Queue::queueCount() const
{
  return qSize;
}

bool Queue::enQueue(const Item &item)
{
  if (isFull())
    return false;
  Node *node = new Node();
  node->item = item;
  if (isEmpty())
  {
    front = node;
    rear = node;
  }
  else
  {
    rear->next = node;
    rear = node;
  }
  items++;
  return true;
}

bool Queue::deQueue(Item &item)
{
  if (isEmpty())
    return false;
  item = front->item;
  Node *temp = front;
  front = front->next;
  delete temp;
  items--;
  return true;
}

Queue::~Queue()
{
  Node *temp;
  while (front != nullptr)
  {
    temp = front;
    front->next = front;
    delete temp;
  }
}

int main(int argc, char const *argv[])
{
  Queue *qu = new Queue(2);
  qu->enQueue(0);
  qu->enQueue(1);
  qu->enQueue(2);
  qu->enQueue(3);
  Item item;
  int i = 0;
  while (i <= 4)
  {
    i++;
    if (qu->deQueue(item))
    {
      std::cout << item << std::endl;
    }
    else
    {
      std::cout << "HIHI" << std::endl;
    }
  }

  return 0;
}
