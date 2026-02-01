/*======https://www.dotcpp.com/course/555======*/

// 函数名：itoa
// 头文件：<stdlib.h>
// 函数原型：char *itoa(int i, char *s, int radix);
// 功能：用于把整数转换成字符串
// 参数：int i  为要转换为字符的数字
//       char *s  为转换后的指向字符串的指针
//       int radix  为转换数字的进制数
// 返回值：返回指向转换后的字符串指针

// 程序例：使用该函数将整数1725转换为字符串，并输出
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int i = 1725;
    char s[10] = {"\0"};
    int radix = 10;
    itoa(i, s, radix);
    printf("integer = %d  string = %s\n", i, s);
    return 0;
}
// 运行结果
// integer = 1725  string = 1725
