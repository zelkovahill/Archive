#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

#include <iostream>

struct Node
{
    int data;
    Node *next;

    // 생성자
    Node(int value) : data(value), next(nullptr) {}
};

// 원형 연결 리스트 클래스 정의
class CircularLinkedList
{
private:
    Node *tail; // 마지막 노드를 가리키는 포인터 (tail->next = head)

public:
    CircularLinkedList();  // 생성자
    ~CircularLinkedList(); // 소멸자

    void append(int value);     // 리스트 끝에 노드 추가
    void prepend(int value);    // 리스트 앞에 노드 추가
    void deleteNode(int value); // 특정 값의 노드 삭제
    void printList() const;     // 리스트 출력
};

#endif // CIRCULARLINKEDLIST_H
