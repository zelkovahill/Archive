### C++ Data Types

|**Data Type**|**Description**|
|-|-|
|`bool`|boolean (true or false)|
|`char`|character('a', 'b', etc.)|
|`char[]`|character array (C-style string if null terminated)|
|`string`|C++ string (from the STL)|
|`int`|integer (1, 2, -1, 1000, etc.|
|`long int`|long integer|
|`float`|single precision floating point|
|`double`|double precision floating point|

**These are the most commonly used types; this is not a complete list.**

<br>

### Operators

The most commonly used operators in order of precedence:
|||
|-|-|
|1|`++`(Post-increment), `--`(post-decrement)|
|2|`!`(not), `++`(pre-increment), `--`(pre-decrement)|
|3|`*`, `/`, `%`|
|4|`+`, `-`|
|5|`<`, `<=`, `>`, `>=`|
|6|`==`(equal-to), `!=`(not-equal-to)|
|7|`&&`(and)|
|8|`\|\|`|
|9|`=`(assignment), `*=`, `/=`. `%=`, `+=`, `-=`|

#### Console Input/Output

|||
|-|-|
|`cout <<`|console out, printing to screen|
|`cin >>`|console in, reading from keyboard|
|`cerr <<`|console error|

##### Example
``` cpp
cout << "Enter an integer : ";
cin >> i;
cout << "Input : " << i << endl;

```
