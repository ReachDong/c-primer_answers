## 1.2 改写程序，让它返回-1。返回值-1通常被当作程序错误的标识。重新编译并运行你的程序，观察你的系统如何处理main返回的错误标识。

![image-20200619212917846](..\support\1.2.png)

（PowerShell 不能执行echo %ERRORLEVEL% 语句）

## 1.3 打印Hello, world。

```c++
#include <iostream>
int main()
{
    std::cout<<"Hello, World。"
    return 0;
}

```

## 1.8 注释的嵌套

```c++
#include <iostream>
int main()
{
    std::cout<</*"**/"*/;  //错误 第一个/* 会和双引号里面的*/ 匹配作为注释 后面的"*/ 变成了非法字符
     std::cout <</* "*/" /* "/*" */; //等价于std::cout<<"/*" (电脑报是病毒……)
    return 0;
}
```

先遇见 /*  那么后面都是注释直到第一个 */ 相匹配

先遇到 ” 后面都是字符串直到第一个 “ 相匹配



## 1.16 接收连续的输入并求和

```c++
void p1_16() {
	int num;
	int sum = 0;
	while (std::cin >> num) {
		sum += num;
		std::cout <<"sum is "<< sum;
	}
		
}
```

循环结束的条件为流的状态：当流失效时推出循环。

失效：1.文件结束符，2.无效的输入（输入的不是整数）ctrl+z



