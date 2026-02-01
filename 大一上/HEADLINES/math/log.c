/*======https://www.dotcpp.com/course/479======*/

// 函数名: log
// 头文件：<math.h>
// 函数原型: double log(double x);
// 功能: 求以自然数为底数的对数
// 参数：double x 为真数，必须大于0
// 返回值：返回以自然数为底数的对数
// 注意：自然数e为常数2.71828

// 程序例: 求以自然数为底的对数，并将结果输出
#include <math.h>
#include <stdio.h>

int main(void) {
    double result;
    double x = 8.6872;
    result = log(x);

    printf("The natural log of %lf is %lf\n", x, result);

    return 0;
}
// 运行结果：
// The natural log of 8.687200 is 2.161851
