/*======https://www.dotcpp.com/course/567======*/

// 函数名：strtol
// 头文件：<stdlib.h>
// 函数原型：long strtol(char *s, char **ptr, int radix);
// 功能：用于将字符串换成长整型数
// 参数：char *s 为要转换的字符串，
//       char **ptr 为一字符串指针，用于进行错误检测，遇到非法字符将终止;
//       如果 ptr 不为空，则指向转换中最后一个字符后的字符的指针会存储在 ptr 引用的位置。
//       int radix 为采用的进制方式
// 返回值：返回转换后的长整型数

// 程序例：使用该函数将字符串100000按照不同的进制方式转换成长整型值
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char *a = "100000";
    char *b = "100000";
    char c[] = "cd";

    printf("a=%ld\n", strtol(a, NULL, 10));
    printf("b=%ld\n", strtol(b, NULL, 2));
    printf("c=%ld\n", strtol(c, NULL, 16));

    return 0;
}
// 运行结果
// a=100000
// b=32
// c=205
