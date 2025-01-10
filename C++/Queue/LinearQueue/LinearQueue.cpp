#include "LinearQueue.h"

LinearQueue::LinearQueue() : front(nullptr), rear(nullptr) {}

LinearQueue::~LinearQueue()
{
    while (!isEmpty())
    {
        dequeue();
    }
}

bool LinearQueue::isEmpty() const
{
    return front == nullptr;
}

void LinearQueue::enqueue(int value)
{
    Node *newNode = new Node(value);

    if (isEmpty())
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

int LinearQueue::dequeue()
{
    if (isEmpty())
    {
        // 큐 언더플로우 발생
        return -1;
    }

    Node *temp = front;
    int dequeuedValue = front->data;
    front = front->next;

    if (front == nullptr)
    {
        rear = nullptr;
    }

    delete temp;
    return dequeuedValue;
}

int LinearQueue::peek() const
{
    if (isEmpty())
    {
        // 큐가 비어있을 때
        return -1;
    }

    return front->data;
}

void LinearQueue::printQueue() const
{
    if (isEmpty())
    {
        std::cout << "Queue is empty" << std::endl;
        return;
    }

    Node *current = front;

    while (current != nullptr)
    {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr\n";
}
