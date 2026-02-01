/*======https://www.dotcpp.com/course/445======*/

// 函数名: toascii
// 头文件：<ctype.h>
// 函数原型: int toascii(int ch);
// 功能: 把一个字符转换为ASCII，其实就是把八位二进制的最高变成0
// 参数: int ch 待转换的字符
// 返回值: 返回转换后的字符

// 程序例： 把一个非ASCII字符转换为ASCII字符
#include <ctype.h>
#include <stdio.h>

int main() {
   int ch1, ch2;
   ch1 = 'a' + 128;
   ch2 = toascii(ch1);
   printf("transform %c  to %c.\n", ch1, ch2);      
   return 0;  
}

// 运行结果：
// transform ? to a.
