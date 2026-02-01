/*======https://www.dotcpp.com/course/542======*/

// 函数名：atexit
// 头文件：<stdlib.h>
// 函数原型：int atexit(void (*func)(void));
// 功能：用于注册终止处理函数
// 参数：func为指向终止处理函数的指针
// 返回值：成功 返回0值 ，失败 返回非0值

// 程序例：使用该函数实现程序终止时，调用注册出口函数f1和f2
#include <stdio.h>
#include <stdlib.h>

void f1();
void f2();

typedef void (*f)();  // 定义函数指针类型

int main(void) {
   f fun1 = f1, fun2 = f2;  // 定义函数指针
   atexit(fun1);
   atexit(fun2); 
   return 0;
}

void f1() {
   printf("exit first called\n");  
}

void f2() {
   printf("exit second called\n");
}

// 运行结果
// exit second called
// exit first called
