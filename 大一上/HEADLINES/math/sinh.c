/*======https://www.dotcpp.com/course/487======*/

// 函数名: sinh
// 头文件：<math.h>
// 函数原型: double sinh(double x);
// 功能: 求出指定值的双曲正弦值
// 参数：double x 为要计算双曲正弦值
// 返回值：返回给定值的双曲正弦值
// 注意：sinh(x)=(e^x-e^(-x))/2

// 程序例: 求出x的双曲正弦值，并将结果显示出来
#include <math.h>
#include <stdio.h>

int main(void) {
    double result, x = 0.5;

    result = sinh(x);

    printf("The hyperbolic sin() of %lf is %lf\n", x, result);

    return 0;
}
// 运行结果：
// The hyperbolic sin() of 0.500000 is 0.521095
