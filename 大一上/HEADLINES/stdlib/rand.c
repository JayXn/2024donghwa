/*======https://www.dotcpp.com/course/563======*/

// 函数名：rand
// 头文件：<stdlib.h>
// 函数原型：int rand(void);
// 功能：用于生成随机数
// 参数：没有参数
// 返回值：返回产生的随机整数

// 程序例：使用该函数产生2个随机的两位数
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int b, i = 2;

    while (i--) {
        b = rand() % 90 + 10;  // Generate a random two-digit number
        printf("b%d = %d\n", 2 - i, b);
    }

    return 0;
}
// 运行结果
// b1 = 51
// b2 = 27
