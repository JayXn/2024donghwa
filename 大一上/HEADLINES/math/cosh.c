/*======https://www.dotcpp.com/course/486======*/

// 函数名: cosh
// 头文件：<math.h>
// 函数原型: double cosh(double x);
// 功 能: 计算双曲余弦值
// 参数：double x 为要计算双曲正弦值
// 返回值：返回给定值的双曲余弦值
// 注意：cosh(x)=(e^x+e^(-x))/2

// 程序例：计算 x 弧度的双曲线余弦值，并将结果输出
#include <math.h>
#include <stdio.h>

int main(void) {
    double result;
    double x = 0.5;
    result = cosh(x);
    printf("The hyperbolic cosine of %lf is %lf\n", x, result);

    return 0;
}
// 运行结果：
// The hyperbolic cosine of 0.500000 is 1.127626
