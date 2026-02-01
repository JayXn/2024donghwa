/*======https://www.dotcpp.com/course/480======*/

// 函数名: modf
// 头文件：<math.h>
// 函数原型: double modf(double value, double *iptr);
// 功能: 求双精度数的小数部分
// 参数：double value 为要操作的双精度数，double *iptr 为要传回整数部分的变量指针
// 返回值：返回value的小数部分

// 程序例: 分别求出双精度number的小数部分和整数部分，并将结果输出
#include <math.h>
#include <stdio.h>

int main(void) {
    double fraction, integer;
    double number = 100000.567;
    fraction = modf(number, &integer);

    printf("The whole and fractional parts of %lf are %lf and %lf\n", number, integer, fraction);

    return 0;
}
// 运行结果：
// The whole and fractional parts of 100000.567000 are 100000.000000 and 0.567000
