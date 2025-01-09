#include "Stack.h"

// 생성자
Stack::Stack() : top(nullptr) {}

// 소멸자
Stack::~Stack()
{
    while (!isEmpty())
    {
        pop();
    }
}

// 스택이 비어있는지 확인
bool Stack::isEmpty() const
{
    return top == nullptr;
}

// 스택에 데이터 추가 (push)
void Stack::push(int value)
{
    Node *newNode = new Node(value); // 새 노드 생성
    newNode->next = top;             // 새 노드가 기존 top을 가리키도록 설정
    top = newNode;                   // top을 새 노드로 업데이트
}

// 스택에서 데이터 삭제 (pop)
int Stack::pop()
{
    if (isEmpty())
    {
        // 스택 언더플로우 발생
        return -1;
    }

    int popedValue = top->data; // 최상단 데이터 저장
    Node *temp = top;           // 최상단 노드 포인터 저장
    top = top->next;            // top을 다음 노드로 이동
    delete temp;                // 제거된 노드 메모리 해제
    return popedValue;
}

// 스택의 최상단 데이터 반환 (peek)
int Stack::peek() const
{
    if (isEmpty())
    {
        // 스택이 비어있을 때
        return -1;
    }

    return top->data;
}

// 스택 출력
void Stack::printStack() const
{
    if (isEmpty())
    {
        return;
    }

    Node *current = top;

    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
