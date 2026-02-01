/*======https://www.dotcpp.com/course/470======*/

// 函数名: fabs
// 头文件：<math.h>
// 函数原型: double fabs(double x);
// 功 能: 求浮点数的绝对值
// 参数：double x 为要操作的双精度数值
// 返回值：返回浮点数的绝对值

// 程序例：求浮点数number的绝对值，并将结果输出 
#include <stdio.h>
#include <math.h>

int main(void) {
    float number = -1234.0;
    printf("number: %f absolute value: %f\n", number, fabs(number));
    return 0;
}
// 运行结果：
// number: -1234.000000 absolute value: 1234.000000
