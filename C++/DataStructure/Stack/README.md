## 스택
- LIFO (LAST IN, FIRST OUT)
- 가장 최근에 추가된 데이터가 가장 먼저 제거

#### 주요 기능
- 동적 메모리 관리를 통한 스택 구현

##### 스택 연산
- push : 데이터를 스택에 추가
- pop : 최상단 데이터를 제거하고 반환
- peek : 최상단 데이터를 제거하지 않고 반환
- isEmpty : 스택이 비어있는지 확인
- printStack : 스택의 모든 데이터를 출력


#### 코드 구조
``` cpp
#ifndef STACK_H
#define STACK_H

#include <iostream>

// 노드 구조체 정의
struct Node
{
    int data;   // 데이터 필드
    Node *next; // 다음 노드를 가리키는 포인터

    // 생성자
    Node(int value) : data(value), next(nullptr) {}
};

// 스택 클래스 정의
class Stack
{
private:
    Node *top; // 스택의 최상단 노드를 가리킴

public:
    Stack();  // 생성자
    ~Stack(); // 소멸자

    bool isEmpty() const;    // 스택이 비어있는지 확인
    void push(int value);    // 스택에 데이터 추가
    int pop();               // 스택에서 데이터 삭제
    int peek() const;        // 스택의 최상단 데이터 반환
    void printStack() const; // 스택 출력
};

#endif // STACK_H
```
