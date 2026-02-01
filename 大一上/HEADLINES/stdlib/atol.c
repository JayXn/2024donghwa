/*======https://www.dotcpp.com/course/545======*/

// 函数名：atol
// 头文件：<stdlib.h>
// 函数原型：long atol(const char *s);
// 功能：将字符串转换成长整型数
// 参数：const char *s 为要转换的字符串 
// 返回值：返回转换后的长整型值

// 程序例：将字符串"525713.14"转换成长整型，并输出字符串和转换的长整型
#include<stdio.h>
#include<stdlib.h>

int main(void) {
   long r;
   char *s = "525713.14";
   r = atol(s);
   printf("string = %s\nint= %ld\n", s, r);
   return 0;
}

// 运行结果
// string = 525713.14
// int = 525713
