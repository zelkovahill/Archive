#include "CircularQueue.h"

int main()
{
    CircularQueue queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);

    queue.printQueue();

    queue.dequeue();
    queue.dequeue();
    queue.dequeue();

    queue.printQueue();

    queue.enqueue(60);
    queue.enqueue(70);
    queue.printQueue();

    std::cout << "Front item : " << queue.peek() << std::endl;

    return 0;
}
