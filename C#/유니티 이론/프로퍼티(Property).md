## 프로퍼티(Property)
- 클래스의 필드에 접근할 수 있는 안전한 방법을 제공하는 **특수한 메서드**
- 프로퍼티를 사용하면 필드의 **읽기(Read)**, **쓰기(Write)**, **수정** 등을 제어 가능

<br>

### 프로퍼티의 역할

#### 1.캡슐화
외부에서 필드에 직접 접근하지 못하게 보호하고, 대신 프로퍼티를 통해 제어된 접근을 허용

<br>

#### 2. 유효성 검사
필드에 값을 설정할 때 특정 조건을 검사하고 값을 제한 가능

<br>

#### 3. 읽기 전용/쓰기 전용
값을 읽기만 하거나 쓰기만 가능하도록 설정 가능

<br>

### 구조

``` cs
class Example
{
  private iont _field;  // private 필드

  public int Property  // 프로퍼티 선언
  {
    get { return _field; }  // get 접근자
    set { _field = value; } // set 전급자
  }
}
```
#### get 접근자 : 프로퍼티 값을 반환.
#### set 접근자 : 값을 설정. `value` 키워드를 사용해 전달받은 값을 나타냄.

<br>

### 예제
#### 1. 기본 사용
``` cs
class Player
{
  private int _health;  // 실제 데이터를 저장하는 필드

  public int Health
  {
    get { return _health; } // 값을 읽을 때 사용
    set { _health = value; } // 값을 설정할 때 사용
  }
}

class Program
{
  static void Main()
  {
    Player player = new Player();

    player.Health = 50;  // set 접근자 호출
    Console.WriteLine(player.Health);  // get 접근자 호출 -> 출력 : 50
  }
}

```

<br>

#### 2. 유효성 검사 추가
``` cs
class Player
{
    private int _health;

    public int Health
    {
        get { return _health; }
        set
        {
            if (value < 0)
                _health = 0;   // 값 제한
            else if (value > 100)
                _health = 100;   // 값 제한
            else
                _health = value;
        }
    }
}

class Program
{
    static void Main()
    {
        Player player = new Player();

        player.Health = 150; // 100 으로 제한
        Console.WriteLine(player.Health); // 출력 : 100

        player.Health = -10; // 0 으로 제한
        Console.WriteLine(player.Health); // 출력 : 0
    }
}
```

<br>

### 자동 구현 프로퍼티
필드와 프로퍼티를 간단히 작성할 수 있는 방법으로, **자동 구현 프로퍼티** 사용 가능
``` cs
class Player
{
    public int Health { get; set; } // 필드를 따로 선언하지 않아도 됨
}

class Program
{
    static void Main()
    {
        Player player = new Player();

        player.Health = 100;
        Console.WriteLine(player.Health); // 출력 : 100
    }
}
```
- 자동 구현 프로퍼티는 내부적으로 필드를 자동 생성
- 간단한 로직이 필요 없느 경우 사용하기 적합

<br>

### 읽기 전용 프로퍼티
get만 구현하여 값을 읽기 전용을 설정 가능
``` cs
class Player
{
    private int _score;

    public int Score
    {
        get { return _score; }
    }

    public Player()
    {
        _score = 10; // 생성자에서 초기화
    }
}
```

<br>

### 속성 초기화 (C# 6.0)
``` cs
class Player
{
    public int Level { get; set; } = 1; // 기본값 설정
}
```
