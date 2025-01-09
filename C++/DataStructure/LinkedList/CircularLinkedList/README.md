# 원형 연결 리스트 CircularLinkedList

#### 설명
- 마지막 노드가 첫 번째 노드를 가리키는 구조를 가진 리스트
- 끝에서 다시 처음으로 돌아갈 수 있는 특징
- 모든 노드는 순환하는 방식으로 연결
- 주로 원형 큐나 반복적인 순회가 필요한 상황에서 사용


<br>

- ### 주요 기능:
- **append(value)**: 리스트의 끝에 새 노드를 추가
- **prepend(value)**: 리스트의 시작 부분에 새 노드를 추가
- **deleteNode(value)**: 특정 값을 가진 노드를 삭제
- **printList()**: 리스트의 모든 노드를 출력

<br>

#### 코드 예시
```cpp
class CircularLinkedList {
public:
    CircularLinkedList();
    ~CircularLinkedList();
    void append(int value);      // 리스트 끝에 노드 추가
    void prepend(int value);     // 리스트 시작 부분에 노드 추가
    void deleteNode(int value);  // 특정 값의 노드 삭제
    void printList() const;      // 리스트 출력

private:
    Node* tail;                  // 리스트의 마지막 노드를 가리키는 포인터
};
```
