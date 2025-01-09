## DoublyLinkedList (이중 연결 리스트)

#### 설명
- **이중 연결 리스트**는 각 노드가 **이전 노드**와 **다음 노드**를 가리키는 두 개의 포인터를 가지는 리스트
- **양방향 순회**가 가능하여, 리스트의 앞과 뒤를 모두 탐색 가능
- 삽입, 삭제 작업에서 더 효율적

#### 주요 기능
1. **append(value)**: 리스트의 끝에 새 노드를 추가
2. **prepend(value)**: 리스트의 시작 부분에 새 노드를 추가
3. **deleteNode(value)**: 특정 값을 가진 노드를 삭제
4. **printList()**: 리스트의 모든 노드를 출력

#### 이점
- **양방향 순회**: 앞뒤로 순회 가능
- **효율적인 삽입 및 삭제**: 중간에서의 삽입과 삭제가 용이

#### 코드 예시
```cpp
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
