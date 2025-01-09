#include "CircularLinkedList.h"

int main()
{
    CircularLinkedList list;

    // 리스트에 값 추가
    list.append(10);
    list.append(20);
    list.append(30);

    // 리스트 출력
    std::cout << "Initial List: ";
    list.printList();

    // 리스트 앞에 값 추가
    list.prepend(5);
    std::cout << "After Prepending 5: ";
    list.printList();

    // 특정 값의 노드 삭제
    list.deleteNode(20);
    std::cout << "After Deleting 20: ";
    list.printList();

    return 0;
}
