## This is Java Tutorial

### Enviroment Setup for **64-Bit Wondows**
1. Download JDK - [Click Me](https://download.oracle.com/java/19/latest/jdk-19_windows-x64_bin.exe)
2. Download IDE - [Click Me](https://code.visualstudio.com/sha/download?build=stable&os=win32-x64)

### Orientation Lecture
1. **JP-001** - Structure Program
```
class namaste{
    public static void main(String[] args){
        System.out.println("Namaste Java");
    }
}
```
#### Key Point
 - Class Name & Source-File Name are Same
 - Source-File name have **.java** extension
 - File-Name.java is **a Source File.**
 - File-Name.class is **a byte-Code.**

#### Always Remember
 - JVM Stands for **Java Virtual Machine**
    - It is have java compiler.
 - JRE Stands for **Java Runtime Enviroment**
    - it is have java interpreter & liabraries.
 - JDK Stands for **Java Development Kit**
    - It is have java development tools.

2. **JP-002** - Print Variable Value
```
public class sample{
    public static void main(String[] args){
		int a,b;
		a=5;
		b=10;
		System.out.println("Value of a is "+a);
		System.out.println("Value of b is "+b);
    }
}
```

3. How to compile & run JAVA source file in command prompt?
	* Compile command
		* javac "file-name.java"
	* Run command
		* java "file-name"

4. Difference between print & println function

 print | println |
:--- | :--- |
 its print string as it is. | Its print string & end with newline 
 ```System.out.print("Namaste Java");``` | ```Java System.out.println ("Namaste Java"); ```
	
5. You can also print mathematical expression in java like that,
	```System.out.println(10+5);```
	-> 15
	```System.out.println(10-5);```
	-> 5
	```System.out.println(10/5);``` //Its give quotient
	-> 2
	```System.out.println(10%5);``` //Its give remainder
	-> 0
		```System.out.println(10//5);``` //error
	-> error

### 6.  Java Variables

#### _Variables are containers for storing data values._
In Java, there are different  **types**  of variables, for example:

-   `String`  - stores text, such as "Hello". String values are surrounded by double quotes
-   `int`  - stores integers (whole numbers), without decimals, such as 123 or -123
-   `float`  - stores floating point numbers, with decimals, such as 19.99 or -19.99
-   `char`  - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
-   `boolean`  - stores values with two states: true or false
	
#### _Declaring (Creating) Variables_
To create a variable, you must specify the type and assign it a value:

```java
type variableName = value;
```
```Java
public class Main
{
  public static void main (String[] args)
  {
    String name = "Chiranjeev Kashyap";
    int age = 21;
    System.out.println("My name is "+name+" & my age is "+age);
  }
}
```

#### Final Variables

If you don't want others (or yourself) to overwrite existing values, use the  `final`  keyword (this will declare the variable as "final" or "constant", which means unchangeable and read-only):
```java
final int myNum = 15;
myNum = 20;  // will generate an error: cannot assign a value to a final variable
```

#### _Other Types_
A demonstration of how to declare variables of other types:
```java
int myNum = 5;
float myFloatNum = 5.99f;
char myLetter = 'D';
boolean myBool = true;
String myText = "Namaste";
```

```Java
byte, short, int, long, float, double, boolean and char are called Primitive Data Types
```
### Programming Problem-001
what is the value of x?
```Java
public class Main
{
  public static void main (String[] args)
  {
      int x, y, z;
      x=y=z=10;
      System.out.println(x);
      System.out.println("Namaste Java");
  }
}
```

<details>
	<summary>Answer</summary>
	
	* x = 10;

</details>
