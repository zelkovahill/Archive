#include "DoublyLinkedList.h"

// 생성자 : 헤드와 테일 초기화
DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

// 소멸자 : 동적으로 할당된 노드 삭제
DoublyLinkedList::~DoublyLinkedList()
{
    Node *current = head;
    Node *nextNode = nullptr;

    while (current != nullptr)
    {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

// 리스트 끝에 노드 추가
void DoublyLinkedList::append(int value)
{
    Node *newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoublyLinkedList::prepend(int value)
{
    Node *newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// 특정 값의 노드 삭제
void DoublyLinkedList::deleteNode(int value)
{
    if (head == nullptr)
    {
        return;
    }

    Node *current = head;

    while (current != nullptr && current->data != value)
    {
        current = current->next;
    }

    if (current == nullptr)
    {
        return;
    }

    // 노드 삭제
    if (current == head) // 삭제할 노드가 첫 번째 노드일 경우
    {
        head = current->next;

        if (head != nullptr)
        {
            head->prev = nullptr;
        }
    }
    else if (current == tail) // 삭제할 노드가 마지막일 경우
    {
        tail = current->prev;

        if (tail != nullptr)
        {
            tail->next = nullptr;
        }
    }
    else // 중간 노드일 경우
    {
        current->prev->next = current->next;
        current->next->prev = current->prev;
    }

    delete current;
}

// 리스트 출력 (앞에서부터)
void DoublyLinkedList::printList() const
{
    Node *current = head;

    if (current == nullptr)
    {
        return;
    }

    while (current != nullptr)
    {
        std::cout << current->data;

        if (current->next != nullptr)
        {
            std::cout << " <-> ";
        }
        current = current->next;
    }

    std::cout << std::endl;
}

// 리스트 출력 (뒤에서부터)
void DoublyLinkedList::printReverseList() const
{
    Node *current = tail;

    if (current == nullptr)
    {
        return;
    }

    while (current != nullptr)
    {
        std::cout << current->data;

        if (current->prev != nullptr)
        {
            std::cout << " <-> ";
        }
        current = current->prev;
    }

    std::cout << std::endl;
}

// 특정 값의 노드 검색
bool DoublyLinkedList::search(int value) const
{
    Node *current = head;

    while (current != nullptr)
    {
        if (current != nullptr)
        {
            return true;
        }

        current = current->next;
    }

    return false;
}
