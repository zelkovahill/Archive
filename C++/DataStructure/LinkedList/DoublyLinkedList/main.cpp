#include "DoublyLinkedList.h"

int main()
{
    DoublyLinkedList list;

    // 리스트에 값 추가
    list.append(10);
    list.append(20);
    list.append(30);

    std::cout << "List (forward) : ";
    list.printList(); // 출력: 10 <-> 20 <-> 30

    std::cout << "List (backward) : ";
    list.printReverseList(); // 출력: 30 <-> 20 <-> 10

    // 리스트 앞에 값 추가
    list.prepend(5);
    std::cout << "After prepending 5 : ";
    list.printList(); // 출력: 5 <-> 10 <-> 20 <-> 30

    // 특정 값의 노드 삭제
    list.deleteNode(20);
    std::cout << "After deleting 20 : ";
    list.printList(); // 출력: 5 <-> 10 <-> 30

    // 값 검색
    if (list.search(10))
    {
        std::cout << "10 is in the list." << std::endl;
    }
    else
    {
        std::cout << "10 is not in the list." << std::endl;
    }

    return 0;
}
