#include "LinkedList.h"

int main()
{
    LinkedList list;

    // 리스트에 값 추가
    list.append(10);
    list.append(20);
    list.append(30);
    list.prepend(5);

    // 리스트 출력
    std::cout << "Linked List : ";
    list.printList(); // 출력: 5 -> 10 -> 20 -> 30 -> nullptr

    // 노드 삭제
    list.deleteNode(20);
    std::cout << "After deleting 20 : ";
    list.printList(); // 출력: 5 -> 10 -> 30 -> nullptr

    // 값 검색
    if (list.search(10))
    {
        std::cout << "10 is in the list." << std::endl;
    }
    else
    {
        std::cout << "10 is not in the list." << std::endl;
    }

    if (list.search(20))
    {
        std::cout << " 20 is in the list." << std::endl;
    }
    else
    {
        std::cout << "20 is not int the list." << std::endl;
    }

    return 0;
}
