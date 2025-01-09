#include "Stack.h"

int main()
{
    Stack stack;

    // 스택에 데이터 추가
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // 스택 출력
    stack.printStack();

    // 스택에서 데이터 삭제
    stack.pop();

    // peek
    std::cout << "Peek: " << stack.peek() << std::endl;

    // 스택 출력
    stack.printStack();

    return 0;
}
