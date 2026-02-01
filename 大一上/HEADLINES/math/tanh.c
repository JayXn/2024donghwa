/*======https://www.dotcpp.com/course/488======*/

// 函数名: tanh
// 头文件：<math.h>
// 函数原型: double tanh(double x);
// 功能: 计算双曲正切值
// 参数：double x 为要计算双曲正弦值
// 返回值：返回给定值的双曲正切值

// 程序例: 计算x的双曲线正切值，并将结果输出
#include <math.h>
#include <stdio.h>

int main(void) {
    double result, x;
    x = 0.5;
    result = tanh(x);
    printf("The hyperbolic tangent of %lf is %lf\n", x, result);

    return 0;
}
// 运行结果：
// The hyperbolic tangent of 0.500000 is 0.462117
