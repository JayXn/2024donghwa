/*======https://www.dotcpp.com/course/464======*/

// 函数名: abs
// 头文件：<math.h>
// 函数原型: int abs(int i);
// 功能: 求整数的绝对值
// 参数: int i 为整型数值
// 返回值: 返回 i 的绝对值

// 程序例：求整型 number 的绝对值，并将结果输出
#include <math.h>
#include <stdio.h>

int main(void) {
    int number = -1234;
    printf("number: %d absolute value: %d\n", number, abs(number));
    return 0;
}
// 运行结果：
// number: -1234 absolute value: 1234
