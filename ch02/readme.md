## 2.1 类型 int、long、long long、short 区别是什么？无符号和符号类型区别，以及float和double的区别。

32位系统中

char ：1个字节
char*（即指针变量）: 4个字节（32位的寻址空间是2^32, 即32个bit，也就是4个字节。同理64位编译器）
short int : 2个字节
int： 4个字节
unsigned int : 4个字节
float: 4个字节
double:  8个字节
long:  4个字节
long long: 8个字节
unsigned long: 4个字节

有符号转无符号时，负数会造成未知错误。

用法：

- 一般使用 `int` 做整数运算，`short` 因为太小在实际中用的少，`long` 通常和 `int` 有着相同的大小。如果数据非常大，可以使用 `long long` 。
- 如果你确认数据是非负的，那么就使用 `unsigned` 无符号类型。
- 执行浮点运算时用 `double` ，因为 `float` 通常精度不够而且双精度浮点数和单精度浮点数的计算代价相差无几。

## 2.5 指出下述字面值的数据类型并说明区别

（a）'a': char类型字面值； L'a': 宽字符（wchar_t类型）字面值；"a": 字符串字面值；宽字符型字符串

（b）10: 十进制字面值；10u:unsigned 字面值；10L:long double 字面值；10uL：unsigned long double 字面值；012：八进制12； 0xC：16进制12

## 2.7 下述字面值表示何种含义

（a）"who goes with F\145rgus?\012" = who goes with Fergus?(/ 加上最多三个八进制字符，或者/x 加上一个或者多个16进制字符)

（b）3.14e1L = 3.14*10^1.0 (1.0是long double)

（c）1024f = float 1024.0

（d）3.14L = long double 3.14

## 2.9 如下定义是否非法

（a）int i = { 3.14 }; (b)std::cin >> int j; (c) int i =3.14

（a） 大括号列表初始化时在存在信息丢失的情况会报错：double to int  requires a narrowing conversion ; （b）是非法的 ； (c) 正确，截断保存

## 2.10 下列初始值是什么

```c++
std::string global_str; //初始化空字符串
int global_int; //初始化0 
int main() {
	int local_int; //无法初始化，报错
	std::string local_str; //初始化为空
	std::cout << global_int << "ddd"<<global_str 
		<<"sss"<< local_int << "sss" << local_str << std::endl;
}
```

## 2.12 下面哪些名字是非法的

（a）int double = 10 是关键字，非法	（b）int _;  合法的，可以用下划线开头 或者只是下划线

（c）int catch-11; 非法	（d) int 1_or_2; 非法，数字开头

（e）double Double=1.0;  合法 C++区分大小写

## 2.14下面程序合法吗？

```c++
int i =100,sum=0;
for(int i=0;i<10;++i){
    sum += i
}
std::cout<<i<<" "<<sum<<std::endl;
```

合法，for 循环重新定义了i 是一个新的作用域，和外层的i 不冲突，当作用域结束时，内层的i 就销毁，外层的i 仍然时100；

> 输出是：100 45

## 2.17 执行下面结果：

```c++
int i, &ri = i;
i=5; ri=10;
std::cout<<i<<" "<<ri<<std::endl;
```

> 结果：10 10

int i; 语句不会对i 进行默认初始化，但是ri 却可以绑定  i;   但是引用必须初始化  这就矛盾了……

> 局部变量 会随机初始化一个不可访问的值，所以编译器会报错，
>
> 全局变量时会初始化为0；所以时可以建立引用的。











