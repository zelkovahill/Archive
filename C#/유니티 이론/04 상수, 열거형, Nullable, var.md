# 04 변수 : 상수, 열거형, Nullable, var

#### cosnt
- 상수는 데이터를 초기화 할 때 1회 이외에 절대 변경할 수 없는 변수
    - 변경하지 말아야 할 변수를 건드려 프로그램에서 오류가 발생하는 것을 방지

``` cs
const 자료형 상수명 = 값;

const int MaxHP = 100; // 변수의 선언과 비슷하지만 데이터 형식 앞에 const zldnjem cnrk
                       // 상수가 가지는 데이털르 반드시 대입

MaxHP = 10;            // 초기화 이후에 상수의 값을 변경하려 하면 에러 발생
```

<br>

#### 상수 (const) vs 일기 전용 변수 (readonly)
|속성|쓰기|읽기|
|-|-|-|
|`const`|오직 초기화 구문에서만 가능|`static` 속성 불가능 <br>(기본적으로 정적 멤버 취급)|
|`readonly`|초기화 구문, 생성자에서 가능 <br>할당 순서는 초기화 구문 -> 생성자|`non-static` : 인스턴스 필드로써 사용 <br>`static` : 정적 필드로써 사용|

<br>

#### 열거형은? 상수를 하나의 그룹으로 묶어 관리
- 게임에서 캐릭터를 만들었을 때 캐릭터의 동작을 상수화 해서 저정할 때
``` cs
const int PlayerIdle = 1;
const int PlayerMove = 2;
const int PlayerAttack = 3;
const int PlayerDefense = 4;
const int PlayerDie = 5;

enum PlayerState {Idle, Move, Attack, Defense, Die}
```

<br>

#### 열거 형식의 정의

``` cs
enum 열거형식명 : 기반자료형 {상수1, 상수2, 상수3, .. }
enum PlayerState : int {Idle, Move, Attack, Defense, }
// 기반 자료형은 정수 계열 (byte, sbyte, short, ushort, int, uint, long, ulong, char)만 사용 가능

enum 열거형식명 {상수1, 상수2, 상수3, ..}
enum PlayerState {Idle, Move, Attack, Defence}
// 기반 자료형을 생략할 경우 컴파일러가 int를 기반 자료형으로 사용
```


<br>

#### 열거형 내부 상수에 저장되는 값

``` cs
enum PlayerState {Idle, Move, Attack, Defense, }
```
- 상수의 값을 입력하지 않으면 처 번째 요소에 0
- 두 번째 요소에 1과 같이 1씩 증가한 값이 자동으로 저장
- 예제에선
    - Idle = 0
    - Move = 1
    - Attack = 2
    - Defense = 3

<br>

``` cs
enum 열거형식명 {상수1 = 값1, 상수2 = 값2, 상수3 = 값3, .. }
```
- 열거 요소의 값을 프로그래머가 원하는 값으로 입력하는 것도 가능
- 입력이 없으면 앞의 숫자 +1로 자동 저장

<br>

``` cs
enum PlayerState {Idle = 0, Move, Attack = 10, Defense, }
```

- Idle = 0
- Move = 1
- Attack = 10
- Defense = 11

<br>

#### Nullable이란?
- 0이 아닌 비어 있는 변수, `null` 상태를 가질 수 있는 변수
    - `int`, `float`을 초기화할 때 `null` 사용 불가능.
    - 잘 사용하지 않는 -1, 0 등의 숫자로 초기화함

<br>

#### Nullable 변수의 선언
- 데이터가 비어있을 때 (`null`) `Value`를 호출하면 `"InvalidOperationException"` 예외 오류를 출력

``` cs
데이터형식? 변수이름;

int? intValue = null;
float? floatValue = null;
string? stringValue = null;
```

``` cs
int? intValue = null;
Debug.Log(intValue.HasValue);

intValue = 31;
Debug.Log(intValue.HasValue);
Debug.Log(intValue.Value);
```

#### TIP.
- `Nullable` 형식은 `HasValue`와 `Value` 두 가지 속성을 가진다.
    - `HasValue` : 변수가 값을 가지고 있는지 가지고 있지 않은지 (`true`/`false`)
    - `Value` : 변수에 담겨 있는 값


<br>

#### 강한 형식 검사와 약한 형식 검사
- **강한 형식 검사**
    - 변수나 상수와 같은 데이터의 형식을 깐깐하게 검사하는 방식
    - 장점
        - 의도치 않은 형식의 데이터를 읽거나 할당하는 것과 같은 프로그래머의 실수를 줄여준다.
    - 단점
        - 코드를 작성할 때 형식(`int`, `long`, etc..)을 정확하게 표기해야 한다.

<br>

- **약한 형식 검사**
    - 컴파일러가 자동으로 해당 변수의 형식으로 지정하는 방식
    - `var` 키워드가 약한 형식 검사를 지원
    - 컴파일러가 변수의 형식을 판단 할 수 있도록 선언과 동시에 초기화

``` cs
var valueInt = 31;
var valueDouble = 3.141592;
var valueString = "와 편리하네요";
```

#### TIP.
- 클래스의 멤버 변수는 초기화 하지 않는 경우도 있기 때문에 `var` 키워드는 지역 변수로만 사용할 수 있다.

<br>

#### 참고자료
- [유튜브 고박사의 유니티 노트[Unity C#] #04 변수 : 상수, 열거형, Nullable, var](https://www.youtube.com/watch?v=O3L2GMcQn1U&list=PLC2Tit6NyVicT5cCqILMWXpXVEoM9ufyH&index=4)
