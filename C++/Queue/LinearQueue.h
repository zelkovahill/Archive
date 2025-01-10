#ifndef LINEARQUEUE_H
#define LINEARQUEUE_H

#include <iostream>

struct Node
{
public:
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinearQueue
{
private:
    Node *front;
    Node *rear;

public:
    LinearQueue();
    ~LinearQueue();

    bool isEmpty() const;
    void enqueue(int value);
    int dequeue();
    int peek() const;
    void printQueue() const;
};

#endif // LINEARQUEUE_H
