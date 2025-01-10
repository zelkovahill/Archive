#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#include <iostream>

class CircularQueue
{
private:
    int *queue;
    int size;
    int front;
    int rear;

public:
    CircularQueue(int capacity);
    ~CircularQueue();

    bool isEmpty() const;
    bool isFull() const;

    bool enqueue(int value);
    bool dequeue();
    int peek() const;
    void printQueue() const;
};

#endif // CIRCULARQUEUE_H
