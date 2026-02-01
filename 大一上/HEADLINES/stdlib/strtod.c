/*======https://www.dotcpp.com/course/566======*/

// 函数名：strtod
// 头文件：<stdlib.h>
// 函数原型：double strtod(char *s, char **ptr);
// 功能：用于将字符串转换为浮点数
// 参数：char *s 为要转换的字符串， char **ptr 为一字符串指针，用于进行错误检测，遇到非法字符将终止;
//        如果 ptr 不为空，则指向转换中最后一个字符后的字符的指针会存储在 ptr 引用的位置。
// 返回值：返回转换后的浮点型数据, 如果没有执行有效的转换，则返回零（0.0）。

// 程序例：使用该函数将字符串转换成浮点数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char *endptr;

    char a[] = "12345.6789";
    char b[] = "1234.567qwer";
    char c[] = "-232.23e4";

    printf("a=%lf\n", strtod(a, NULL));
    printf("b=%lf\n", strtod(b, &endptr));
    printf("endptr=%s\n", endptr);
    printf("c=%lf\n", strtod(c, NULL));

    return 0;
}
// 运行结果
// a=12345.678900
// b=1234.567000
// endptr=qwer
// c=-2322300.000000
