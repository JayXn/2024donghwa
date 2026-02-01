/*======https://www.dotcpp.com/course/473======*/

// 函数名: pow
// 头文件：<math.h>
// 函数原型: double pow(double x, double y);
// 功能: 指数函数(x的y次方)
// 参数：double x 为底数，double y 为指数
// 返回值：返回x的y次方

// 程序例: 求x的y次方的值，并将结果输出
#include <stdio.h>
#include <math.h>

int main(void) {
    double x = 2.0, y = 3.0;

    printf("%lf raised to %lf is %lf\n", x, y, pow(x, y));

    return 0;
}
// 运行结果：
// 2.000000 raised to 3.000000 is 8.000000
