/*======https://www.dotcpp.com/course/481======*/

// 函数名: fmod
// 头文件：<math.h>
// 函数原型: double fmod(double x, double y);
// 功 能: 计算x对y的模, 即x/y的余数
// 参数：double x  双精度除数 ，double y  双精度被除数 
// 返回值：返回x/y的余数

// 程序例：求x/y的余数，并将结果输出 
#include <math.h>
#include <stdio.h>

int main(void) {
    double x = 5.0, y = 2.0;
    double result;

    result = fmod(x, y);

    printf("The remainder of (%lf / %lf) is %lf\n", x, y, result);

    return 0;
}
// 运行结果：
// The remainder of (5.000000 / 2.000000) is 1.000000
