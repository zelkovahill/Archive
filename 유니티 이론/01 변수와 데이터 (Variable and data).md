# 01 변수 : 변수와 데이터 (Variable and data)

[01.1 변수란?](#011-변수란)<br>
[01.2 변수의 쓰임](#012-변수의-쓰임)<br>
[01.3 변수 선언 (Variable Declaration)](#013-변수-선언-variable-declaration)<br>
[01.4 변수 특징](#014-변수-특징)<br>
[01.5 변수 타입](#015-변수-타입)<br>
[01.6 변수 선언 방식과 초기화](#016-변수-선언-방식과-초기화)<br>
[01.7 선언 위치, 키워드에 따라 다른 변수 종류](#017-선언-위치-키워드에-따라-다른-변수-종류)<br>
[01.8 데이터 형식](#018-데이터-형식)<br>
[01.9 메모리 영역 (변수의 저장 영역, 생존 범위)](#019-메모리-영역-변수의-저장-영역-생존-범위)<br>

<br>

## 01.1 변수란?
- 데이터(숫자, 문자 등)를 저장하고 사용하기 위해 배정되는 공간을 지칭하는 이름

<br>

## 01.2 변수의 쓰임
- 컴퓨터에 영화, 사진 등을 저장해두고 필요할 때 열어본다.
- 이와 같이 게임 내부에서도 플레이어 이름, 공격력 등 다양한 정보를 저장해두고 필요할 때 꺼내 쓰거나 데이터를 수정하기도 한다.
- 이렇게 게임 내부에서 데이터를 저장/사용하는 공간들을 변수라고 한다.
    - 변수에 저장되는 데이터는 단순하게는 플레이어 이름, 공격력과 같은 것에서 부터 화면에 보여지는 플레이어 이미지, 사운드 등 게임에 필요한 모든 정보

<br>

## 01.3 변수 선언 (variable declaration)
- 어떤 데이터를 저장 및 사용하기 위해 필요한 데이터 공간을 확보하고,
- 그 데이터를 활용하는 범위, 저장하는 데이터 속성,
- 그 공간을 지칭하는 이름을 설정하는 것

<br>

- 변수 선언에 필수가 되는 두가지는
- 저장할 데이터 자료형(Data Type), 변수이름

``` cs
// 변수 자료형, 변수 이름
int currentHP;    // 컴퓨터 메모리 임의의 장소에 변수 currentHP에게 할당된 공간


// 변수 이름 (식별자), 데이터 (값 할당)
currentHP = 35;    // 이 공간에 35 저장
```

<br>

## 01.4 변수 특징
- **변수의 이름은 대, 소문자를 구분한다.**
  - 일반적으로 소문자로 시작해서 단어가 구분될 때 첫 글자를 대문자로 사용 (ex. `maxCount`)
  - `int Value` 와 `int value` 는 다른 변수
 
<br> 

- **변수의 이름은 숫자로 시작할 수 없다**
  - `int value01`    <span style="color: green;">Good</span>
  - `int 01value`    <span style="color: red;">Error</span>
 
<br>

- **변수의 이름은 의미 있게 짓는다**
  - 에러가 발생하는 것은 아니지만 이 변수가 어떤 데이터를 나타내는지 이름으로 식별불가
  - `int enemyCount`, `int playerHP`    <span style="color: green;">Good</span>
  - `int a,b,f,j`                      <span style="color: red;">Bad</span>

<br>

- **변수를 사용하기 전에 값을 미리 할당해 두는 것이 좋다**
  - 값을 설정하지 않고 사용했을 때 컴파일러에 따라 애기치 못한 상황이 발생할 수 있다.
  - `int value = 0`, `float value = 1.2f`    <span style="color: green;">Good</span>
  - `int value`                              <span style="color: red;">Bad</span>
 
<br>

## 01.5 변수 타입
- **정수형(byte, short, int, long, Etc..)**
    - (소수점이 없는) 숫자를 저장하는 데이터 타입 (게임에서는 `int`가 가장 흔하게 사용된다.)
    - 표현 방식 : `-1`, `2`, `0`, `10`, `1000`, `-12332`

<br>

- **실수형(float, double, Etc..)**
    - 소수점이 있는 숫자를 저장하는 데이터 타입(`float` 소수점 7자리, `double` 소수점 15자리)
    - 표현 방식 : `-1.2f`, `0.3f`, `4.87`, `0.0`, `-3.5` (`float`과 `double`을 구분하기 위해 float은 뒤에 f를 붙임)

<br>

- **문자열 (string)**
  - 문자열을 저장하는 데이터 타입
  - 표현 방식 : `"Hello World"`, `"안녕, 내 이름은 우민이야."`
 
<br>

- **논리형 (bool)**
  - 표현 방식 : `true`, `false`

<br>

- **사용자 정의 형 (struct, class)**
  - 위에서 설명한 여러 데이터, 사용자 정의 형을 묶어 새로운 데이터 타입을 생성
``` cs
public class Student
{
    public     string     name;            // 이름
    public     int        age;             // 나이
    public     float      grade;           // 성적 (예 4.0 scale)
    public     bool       scolarship;      // 장학금 여부 (true = 있음, false = 없음)
}
```

<br>

## 01.6 변수 선언 방식과 초기화
- 변수를 초기화 한다는 것은 변수의 초기 값을 할당하는 것
- 변수 생성과 동시에 값을 할당하거나 유니티에서 초기화를 위해 1번만 호출되는 `Awake()`, `Start()` 메소드에 값을 할당한다.
``` cs
using UnityEngine;

public class Exercise00 : MonoBehaviour
{
    // 정수(int) 타입의 value01 변수 선언
    private int value01;

    // 같은 타입의 변수를 여러개 선언할 경우 쉼표로 구분해서 선언 가능
    private int value02, value03, value04;

    // 변수를 선언하면서 초기 값을 설정 (변수 초기화)
    private int value05 = 10;

    // 여러 개를 동시에 선언할 때도 초기화 가능
    private int value06 = 10, value07 = 20, value08 = 30;

    private void Awake()
    {
        value01 = 1;
        value02 = 2;
        value03 = 3;
        value04 = 4;
    }
}
```

<br>

## 01.7 선언 위치, 키워드에 따라 다른 변수 종류
- **클래스 멤버 변수**
    - 클래스 내부, 클래스 멤버 함수 외부에 선언되는 변수
    - 해당 클래스의 객체가 소멸될 때 까지 생존
    - 공유 범위에 따라 해당 클래스 또는 외부 클래스도 사용 가능

<br>

- **지역 변수**
  - 함수 내부에 선언되는 변수. 변수가 선언된 위치로 부터 아래에만 사용 가능
  - 코드 블록 `{` 내부에 변수가 선언되며, 코드 블록이 `}` 닫힐 때 변수 데이터가 소멸

<br>

- **읽기 전용 변수**
  - 클래스 멤버 변수를 선언할 때 변수 타입 앞에 `readonly` 키워드를 붙여서 사용
  - 변수를 선언할 때와 클래스의 생성자 함수에서 값을 설정할 수 있고, 그 이외엔 변경 불가
 
<br>

- **상수**
  - 클래스 멤버 변수를 선언할 때 변수 타입 앞에 `const` 키워드를 붙여서 사용
  - 변수를 선언할 때 값을 설정할 수 있고, 그 이외엔 변경 불가

<br>

**Tip.** 
개발자도 사람이기 때문에 우리가 이 변수는 값을 바꾸면 안돼! 라고 생각하면서도 개발 도중에 다른 값을 할당하려고 할 수도 있기 때문에 이렇게 강제적인 규칙을 부여하는 경우가 종종 있다.
 
``` cs
using UnityEngine;

public class Exercise00 : MonoBehaviour
{
    public int currentHP = 10;            // 클래스 멤버 변수
    public readonly int maxHP = 100;      // 읽기 전용 변수
    public const    int maxMP = 100;      // 상수

    public Exercise00()
    {
        // 읽기 전용 변수는 변수 초기화, 생성자에서 데이터 수정 가능
        maxHP = 200;
    }

    private void Awake()
    {
        int currentMP = 50;    // 지역 변수 (함수 내부에서 선언하며, 함수가 끝나는 지점에서 데이터 소멸)
        currentHP = 35;        // currentHP 변수에 35 저장
        // maxHP = 200;        // readonly로 정의된 변수는 데이터 변경 불가
        // maxMP = 200;        // const로 정의된 변수는 데이터 변경 불가

        // Console View에 데이터 출력 (readonly, const도 저장된 데이터 사용은 가능)
        Debug.Log(currentHP);
        Debug.Log(currentMP);
        Debug.Log(maxMP);
    }

    private void Update()
    {
        // currentMP = 100;    // 지역 변수는 해당 함수 범위를 벗어나면 소멸되기 때문에 다른 함수에서 쓸 수 없음
    }
}
```

<br>

## 01.8 데이터 형식



|          | **기본 데이터 형식**            | **복합 데이터 형식**        |
|----------|----------------------------------|----------------------------|
| **값 형식** | 정수 (`int`, `byte`, `short`, `long`, `char`, `Etc..`) <br>  실수 (`float`, `double`, `Etc..`) <br> 논리 (`bool`) |구조체 (`struct`)               |
| **참조 형식** | 문자열 (`string`) <br> 오브젝트 (`object`) |   배열 (`array`) <br> 클래스 (`class`) |

<br>

- **기본 데이터 형식 (Primitive Type)**
    - 정수, 실수, 문자열과 같이 하나의 정보를 가지는 데이터 형식

<br>

- **복합 데이터 형식 (Complex Data Type)**
    - 기본 데이터 형식, 복합 데이터 형식과 같은 데이터들을 결합해 만든 새로운 데이터 형식

<br>
 
- **값 형식 (Value Type)**
  - 변수가 일반적인 값을 담는 데이터 형식
  - 스택 메모리 영역에 데이터 저장
 
<br>

- **참조 형식 (Reference Type)**
  - 변수가 일반적인 값 대신 값이 있는 곳의 위치(주소 값)를 담는 데이터 형식
  - 힙 메모리 영역에 데이터 저장
 
<br>

## 01.9 메모리 영역 (변수의 저장 영역, 생존 범위)

- **스택 메모리 영역**
  - 함수 내부의 코드 블록 `{`,`}` 영역에 선언하는 지역 변수가 저장되는 공간
  - 지역 변수를 선언하면 스택 영역에 메모리가 할당 되며, 해당 변수가 선언된 코드 블록이 종료될 때 스택 영역에 할당된 메모리 삭제 (변수 소멸)
  - **TIP.** 메모리가 저장되는 방식이 자료구조의 "스택(stack)과 같아서 스택 메모리 영역이라고 불린다. <br>(스택 : 입구가 1개. 먼저 들어온 데이터가 나중에 나간다.)
 
<br>

``` cs
{
    int value = 30;
    {
        int value02 = 40;
    }
    int value03 = 50;
}
```
1. 바깥쪽 괄호 영역에서 `int value01 = 30;` 실행 (변수 `value01`의 데이터가 스택 메모리 영역에 저장)
2. 안쪽 괄호 영역에서 `int value02 = 40;` 실행 (변수 `value02`의 데이터가 스택 메모리 영역에 저장)
3. 안쪽 괄호 영역이 끝나며 변수 `value02`의 데이터가 스택 메모리 영역에서 삭제
4. 바깥쪽 괄호 영역에서 `int value03 = 50;` 실행 (변수 `value03`의 데이터가 스택 메모리 영역에 저장)
5. 바깥쪽 괄호 영역이 끝나며 변수 `value03`의 데이터가 스택 메모리 영역에서 삭제
6. 바깥쪽 괄호 영익이 끝나며 변수 `value01`의 데이터가 스택 메모리 영역에서 삭제

``` diff
+-----------------------+
|       스택 메모리      |
+-----------------------+
| value01 = 30          |  <- 1. 실행
+-----------------------+
| value02 = 40          |  <- 2. 실행
+-----------------------+
| value03 = 50          |  <- 4. 실행
+-----------------------+
|                       |  <- 3. value02 삭제
+-----------------------+
|                       |  <- 5. value03 삭제
+-----------------------+
| value01 = 30          |  <- 6. value01 삭제
+-----------------------+
```

<br>

- **힙 메모리 영역**
  - Hierarchy View에 존재하는 게임오브젝트, 컴포넌트는 클래스를 기반으로 제작되며, 모두 힙 메모리 영역에 저장
  - 다른 게임 오브젝트, 컴포넌트(힙에 저장된 데이터)를 사용하기 위해 변수를 만들어서 `GetComponent<>()`, `GameObject.Find()`와 같은 행위를 함 <br>(힙 메모리 영역에 있는 데이터에 접근하기 위해 주소 값을 나타내는 변수 생성)
  - 스택 영역과 다르게 코드 블록이 종료되는 지점과 상관 없이 데이터가 계속 유지 <br>(게임 내에 존재하는 게임오브젝트는 우리가 삭제하기 전까지 데이터 유지)
  - 프로그래머가 더 이상 사용하지 않는 쓰레기가 됐을 때 가비지 컬렉터가 처리 <br>(Destroy 함수를 이용해 게임오브젝트를 삭제했을 때)

``` cs
using UnityEngine;

public class Player : MonoBehaviour
{
    public string playerName = "Noname";
    private int   currentHP  = 100;

    public void TakeDamage(int damage)
    {
        // damage만큼 체력을 감소
        currentHP -= damage;

        Debug.Log(currentHP);
    }
}
```

``` cs
using UnityEngine;

public class GameSystem : MonoBehaviour
{

    private void Awake()
    {
        // "Player" 클래스 변수 선언
        Player player;

        // Hierarchy View에 있는 "PlayerObject" 게임오브젝트의
        // "Player" 컴포넌트 주소 값 정보를 얻어온다.
        // TIP. 예제를 위해 사용했지만 GameObject.Find()는 지양!

        player = GameObject.Find("PlayerObject").GetComponent<Player>();

        player.playName = "우민";

        player.TakeDamage(10);
    }
    
}

```
- 스택 메모리 영역에 선언된 `player` 변수를 통해 힙 메모리 영역에 저장되어 있는 실제 데이터에 접근
- (`PlayerObject` 게임오브젝트의 `Player` 컴포넌트 정보)
- `PlayerName` 정보를 "우민"로 수정

<br>

- 컴포넌트로 적용하지 않고 `new`로 직접 메모리를 할당해서 사용 가능

<br>
<br>

#### 참고자료
- [유튜브 고박사의 유니티 노트 [Unity C#] #01 변수 : 변수와 데이터 (Variable and data)](https://www.youtube.com/watch?v=YKiTGbPIZKQ&list=PLC2Tit6NyVicT5cCqILMWXpXVEoM9ufyH&index=1)
