# 憨八龟的编程日记（2）

日期：2020/6/27			天气：依然是非常热的一天			心情：着急

​		昨天晚上的时候又沉迷于一些七七八八的东西，突然想起讲题的时候太快，讲错了一道题，担心了许久，打算到周一的时候再说吧。

## 第一章 预备知识

- C语言和C++的发展历史和基本原理。

- 过程性编程和面向对象编程。

- C++是如何在C语言的基础上添加面向对象概念的。

- C++是如何在C语言的基础上添加泛型编程概念的。

- 编程语言标准

- 创建程序的技巧

  编译->链接->执行

## 第二章 开始学习C++

- 创建C++程序
- C++程序的一般格式
- #include编译指令
- main()函数
- 使用cout对象进行输出
- 在C++程序中加入注释
- 何时以及如何使用endl
- 声明和使用变量
- 使用cin对象进行输入
- 定义和使用简单函数

myfirst.cpp

动态链接库模块在Windows编程中不需要main(),机器人中的控制器芯片也可能不需要main(),

程序越复杂，注释的价值，有助于理解代码

对于复杂的名称空间管理技术，最好不要偷懒使用using namespace

endl是一个控制符

C++源代码风格：

- 每条语句占一行
- 每个函数都有一个开始花括号和一个结束花括号，各占一行
- 函数中的语句都相对于花括号进行缩进
- 与函数名称相关的圆括号周围没有空白

carrot.cpp

cout能够智能地根据其后的数据类型相应地调整其行为，属于运算符重载的例子。

getinfo.cpp

cin从输入流抽取字符

sqrt.cpp

ourfunc.cpp

main()的返回值并不是返回给程序的其他部分，而是返回给操作系统。

### 2.6复习题

1.函数

2.用来包含iostream这个头文件，然后就能够使用其中的对象和函数

3.指定名称空间

4.cout<<endl;

5.int cheeses;

6.int cheeses=32;

7.cin>>cheeses;

8.cout<<"We have "<<cheeses<<"varities of cheese.";

9.函数头，函数原型，参数类型

10.函数的作用是打印的时候

11.没有指定名称空间。using namespace std;using std::cout; std::out <</...

### 2.7编程练习

比较简单

## 第三章 处理数据

- C++变量的命名规则
- C++内置的类型——unsigned long、long、unsigned int、int、unsigned short、short、char、unsigned char、signed char和bool
- C++11新增的类型——unsigned long long和long long
- 表示各种整型的系统限制的climits文件
- 各种整型的数字字面值（常量）
- 使用const限定符来创建符号常量
- C++内置的浮点类型：float、double和long double
- 表示各种浮点类型的系统限制的cfloat文件
- 各种浮点类型的数字字面值
- C++的算术运算符
- 自动类型转换
- 强制类型转换

下划线和双下划线与大写字母打头的名称被保留给实现使用。

limits.cpp

exceed.cpp

为什么usigned int比long更适合用来表示16位的地址

hexoct.cpp

hexoct2.cpp

chartype.cpp

morechar.cpp



