/*======https://www.dotcpp.com/course/484======*/

// 函数名: ldexp
// 头文件：<math.h>
// 函数原型: double ldexp(double value, int exp);
// 功能: 计算指定的2^exp倍数
// 参数：double value 为双精度实数，int exp 为2的整型指数
// 返回值：返回x*(2^exp)的结果

// 程序例: 计算x*(2^exp)，并输出结果
#include <math.h>
#include <stdio.h>

int main(void) {
    double value;
    double x = 2;
    value = ldexp(x, 3);

    printf("The ldexp value is: %lf\n", value);

    return 0;
}
// 运行结果：
// The ldexp value is: 16.000000
