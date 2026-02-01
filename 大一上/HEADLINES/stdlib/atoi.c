/*======https://www.dotcpp.com/course/544======*/

// 函数名：atoi
// 头文件：<stdlib.h>
// 函数原型：int atoi(const char *s);
// 功能：将字符串转换成整型数
// 参数：const char *s 为要转换的字符串 
// 返回值：返回转换后的整型值

// 程序例：将字符串"5257"转换成整型，并输出字符串和转换的整型值
#include<stdio.h>
#include<stdlib.h>

int main(void) {
   int r;
   char *s = "5257";
   r = atoi(s);
   printf("string = %s\nint = %d\n", s, r); 
   return 0;
}

// 运行结果
// string = 5257
// int = 5257
