/*======https://www.dotcpp.com/course/447======*/

// 函数名: toupper
// 头文件：<ctype.h>
// 函数原型: int toupper(int ch);
// 功能: 把小写字母转换为大写字母，不是小写字母的不变
// 参数: int ch 待转换的字符
// 返回值: 返回转换后的字符

// 程序例： 把小写字母转换为大写字母
#include <ctype.h>
#include <stdio.h>

int main() {
    char ch1, ch2;
    printf("input a character:");
    scanf("%c", &ch1);
    ch2 = toupper(ch1);
    printf("transform %c to %c.\n", ch1, ch2);
    return 0;
}

// 运行结果：
// input a character:g
// transform g to G.
