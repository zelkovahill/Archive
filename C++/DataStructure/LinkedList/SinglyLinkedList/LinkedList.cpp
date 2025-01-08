#include "LinkedList.h"

// 생성자 : 빈 연결 리스트를 초기화
LinkedList::LinkedList() : head(nullptr) {}

// 소멸자 : 동적으로 할당된 메모리를 해제
LinkedList::~LinkedList()
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

// 리스트 끝에 새로운 노드 추가
void LinkedList::append(int value)
{
    Node *newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// 리스트 앞에 새로운 노드 추가
void LinkedList::prepend(int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// 특정 값을 가진 노드 삭제
void LinkedList::deleteNode(int value)
{
    // 리스트가 비어 있으면 반환
    if (head == nullptr)
    {
        return;
    }

    // 삭제할 노드가 헤드 노드일 경우
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *current = head;

    while (current->next != nullptr)
    {
        if (current->next->data == value)
        {
            Node *temp = current->next;
            current->next = current->next->next;
            delete temp;
            return;
        }
        current = current->next;
    }
}

// 리스트 출력
void LinkedList::printList() const
{
    Node *current = head;

    if (current == nullptr)
    {
        std::cout << "List is empty." << std::endl;
        return;
    }

    while (current != nullptr)
    {
        std::cout << current->data;
        if (current->next != nullptr)
        {
            std::cout << " -> ";
        }
        current = current->next;
    }
    std::cout << std::endl;
}

// 특정 값의 노드가 존재하는지 확인
bool LinkedList::search(int value) const
{
    Node *current = head;

    // 리스트가 비어 있으면 바로 false 반환
    if (current == nullptr)
    {
        return false;
    }

    while (current != nullptr)
    {
        if (current->data == value)
        {
            return true;
        }

        current = current->next;
    }
    return false;
}
