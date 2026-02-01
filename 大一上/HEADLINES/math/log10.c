/*======https://www.dotcpp.com/course/478======*/

// 函数名: log10
// 头文件：<math.h>
// 函数原型: double log10(double x);
// 功能: 求指定数值的以10为底数的对数
// 参数：double x 为真数，必须大于0
// 返回值：返回以10为底x的对数
// 公式：loge x = b

// 程序例: 求以10为底数x的对数，并将结果输出
#include <math.h>
#include <stdio.h>

int main(void) {
    double result;
    double x = 800.6872;
    result = log10(x);

    printf("The common log of %lf is %lf\n", x, result);

    return 0;
}
// 运行结果：
// The common log of 800.687200 is 2.903463
