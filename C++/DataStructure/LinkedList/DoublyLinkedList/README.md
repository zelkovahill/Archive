## 이중 연결 리스트 DoublyLinkedList

#### 설명
- 각 노드가 이전 노드와 다음 노드를 가리키는 구조를 가진 리스트
- 노드를 양방향으로 순회 가능

<br>

#### 주요 기능
- 노드 추가 (append, prepend)
- 특정 값을 노드 삭제 (deleteNode)
- 리스트 출력 (printList)

<br>

#### 코드 예시
``` cpp
class DoublyLinkedList
{
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    void append(int value);
    void prepend(int value);
    void deleteNode(int value);
    void printList() const;

private:
    Node* head;
    Node* tail;
};
```
