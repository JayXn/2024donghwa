/*======https://www.dotcpp.com/course/476======*/

// 函数名: cos
// 头文件：<math.h>
// 函数原型: double cos(double x);
// 功 能: 余弦函数
// 参数：double x 要操作的弧度
// 返回值：返回 x 弧度的余弦值
// 公 式：1°=π/180°弧度
// 注意：cos() 是已知一个角的弧度值 x，求该角的余弦值 y

// 程序例：求60度角的余弦值，并输出结果
#include <math.h>
#include <stdio.h>

#define PI 3.14159265

int main(void) {
    double result;
    double x = 60 * PI / 180;  // 将60度角转换为弧度
    result = cos(x);
    printf("The cosine of %lf is %lf\n", x, result);

    return 0;
}
// 运行结果：
// The cosine of 1.047198 is 0.500000
