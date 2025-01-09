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
