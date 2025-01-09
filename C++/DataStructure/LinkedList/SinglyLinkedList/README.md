## 단일 연결 리스트 SinglyLinkedList

#### 설명
- 각 노드가 하나의 포인터(다음 노드를 가리키는)를 가지고 있는 리스트
- 순차적으로 리스트를 탐색 가능

<br>

#### 주요 기능
- 노드 추가 (append, prepend)
- 특정 값으로 노드 삭제 (deleteNode)
- 리스트 출력 (printList)

<br>

#### 코드 예시
``` cpp
class SinglyLinkedList
{
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    void append(int value);
    void prepend(int value);
    void deleteNode(int value);
    void printList() const;

private:
    Node* head;
};
```
