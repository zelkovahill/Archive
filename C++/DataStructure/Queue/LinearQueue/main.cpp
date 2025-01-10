#include "LinearQueue.h"

int main()
{
    LinearQueue queue;

    std::cout << "큐에 데이터 추가 (enqueue)" << std::endl;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    queue.printQueue();

    std::cout << "\n큐의 첫 번째 데이터 확인 (peek): " << queue.peek() << std::endl;

    std::cout << "큐에서 데이터 삭제 (dequeue)" << std::endl;
    queue.dequeue();
    queue.dequeue();

    queue.printQueue();

    std::cout << "\n큐가 비었는지 확인 : " << queue.isEmpty() << std::endl;

    return 0;
}
