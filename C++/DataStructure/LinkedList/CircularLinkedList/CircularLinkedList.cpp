#include "CircularLinkedList.h"

// 생성자
CircularLinkedList::CircularLinkedList() : tail(nullptr) {}

// 소멸자
CircularLinkedList::~CircularLinkedList()
{
    if (tail == nullptr)
        return;

    Node *current = tail->next; // head 노드부터 시작
    Node *temp;

    while (current != tail)
    {
        temp = current;
        current = current->next;
        delete temp;
    }
    delete current; // 마지막 노드 삭제
    tail = nullptr;
}

// 새 노드를 리스트 끝에 추가하는 함수
void CircularLinkedList::append(int value)
{
    Node *newNode = new Node(value);

    if (tail == nullptr)
    {
        tail = newNode;
        tail->next = tail; // 자기 자신을 가리킴
    }
    else
    {
        newNode->next = tail->next; // 새 노드가 기존 Head를 가리킴
        tail->next = newNode;       // tail의 next가 새 노드를 설정
        tail = newNode;             // tail을 새 노드로 갱신
    }
}


// 새 노드를 리스트 앞에 추가하는 함수
void CircularLinkedList::prepend(int value)
{
    Node *newNode = new Node(value);

    if (tail == nullptr)
    {
        tail = newNode;
        tail->next = tail;
    }
    else
    {
        newNode->next = tail->next; // 새 노드가 기존 head를 가리킴
        tail->next = newNode;       // tail의 next가 새 노드를 설정
    }
}

// 특정 값을 가진 노드를 삭제하는 함수
void CircularLinkedList::deleteNode(int value)
{
    if (tail == nullptr)
        return;

    Node *current = tail->next; // head 노드부터 시작
    Node *prev = tail;

    // 노드를 찾는 동안 계속 순회
    while (current != tail)
    {
        if (current->data == value)
        {
            if (current == tail)
            { // 삭제할 노드가 tail인 경우
                if (current->next == current)
                {
                    // 리스트에 노드가 하나만 있는 경우
                    delete current;
                    tail = nullptr;
                }
                else
                {
                    prev->next = current->next;
                    delete current;
                    tail = prev; // tail 갱신
                }
            }
            else
            {
                prev->next = current->next;
                delete current;
            }
            return; // 노드 삭제 후 종료
        }
        prev = current;
        current = current->next;
    }
}

// 리스트의 모든 노드를 출력하는 함수
void CircularLinkedList::printList() const
{
    if (tail == nullptr)
    {
        std::cout << "List is empty" << std::endl;
        return;
    }

    Node *current = tail->next; // head 노드부터 시작
    while (current != tail)
    {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    // 마지막 노드는 "->" 없이 출력
    std::cout << current->data << std::endl;
}
