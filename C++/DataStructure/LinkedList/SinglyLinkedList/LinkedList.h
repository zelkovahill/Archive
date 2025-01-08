#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

// 노드 구조체 정의
struct Node
{
    int data;   // 노드에 저장되는 데이터
    Node *next; // 다음 노드를 가리키는 포인터

    Node(int val) : data(val), next(nullptr) {} // 생성자
};

// 연결 리스트 클래스 정의
class LinkedList
{
private:
    Node *head; // 리스트의 첫 번째 노드를 가리키는 포인터

public:
    LinkedList();  // 생성자
    ~LinkedList(); // 소멸자

    void append(int value);       // 리스트 끝에 노드 추가
    void prepend(int value);      // 리스트 앞에 노드 추가
    void deleteNode(int value);   // 특정 값의 노드 삭제
    void printList() const;       // 리스트 출력
    bool search(int value) const; // 특정 값의 노드 검색
};
#endif
