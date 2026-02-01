/*======https://www.dotcpp.com/course/474======*/

// 函数名: sqrt
// 头文件：<math.h>
// 用法: double sqrt(double x);
// 功能: 计算一个非负实数的平方根
// 参数：double x 要操作的非负实数双精度数
// 返回值：返回一个非负实数的平方根

// 程序例: 求双精度x的平方根，并将结果输出
#include <stdio.h>
#include <math.h>

int main(void) {
    double x = 4.0, result;

    result = sqrt(x);

    printf("The square root of %lf is %lf\n", x, result);

    return 0;
}
// 运行结果：
// The square root of 4.000000 is 2.000000
