#include "CircularQueue.h"

CircularQueue::CircularQueue(int capacity)
{
    size = capacity + 1;
    queue = new int[size];
    front = 0;
    rear = 0;
}

CircularQueue::~CircularQueue()
{
    delete[] queue;
}

bool CircularQueue::isEmpty() const
{
    return front == rear;
}

bool CircularQueue::isFull() const
{
    return (rear + 1) % size == front;
}

bool CircularQueue::enqueue(int value)
{
    if (isFull())
    {
        // 큐 오버플로우 발생
        return false;
    }

    queue[rear] = value;
    rear = (rear + 1) % size;
    return true;
}

bool CircularQueue::dequeue()
{
    if (isEmpty())
    {
        // 큐 언더플로우 발생
        return false;
    }

    front = (front + 1) % size;
    return true;
}

int CircularQueue::peek() const
{
    if (isEmpty())
    {
        // 큐가 비어있을 때
        return -1;
    }

    return queue[front];
}

void CircularQueue::printQueue() const
{
    if (isEmpty())
    {
        std::cout << "큐가 비어있습니다." << std::endl;
        return;
    }

    int i = front;
    while (i != rear)
    {
        std::cout << queue[i] << " ";
        i = (i + 1) % size;
    }
    std::cout << std::endl;
}
