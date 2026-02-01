/*======https://www.dotcpp.com/course/468======*/

// 函数名: ceil
// 头文件：<math.h>
// 函数原型: double ceil(double x);
// 功 能: 向上舍入
// 参数：double x 被操作的双精度值
// 返回值：返回用双精度表示的 >= x 的最小的整数值。

// 程序例：求 number 的向上与向下取整，并将结果输出
#include <math.h>
#include <stdio.h>

int main(void) {
    double number = 123.54;
    double down, up;
    down = floor(number);
    up = ceil(number);
    printf("original number %5.2lf\n", number);
    printf("number rounded down %5.2lf\n", down);
    printf("number rounded up %5.2lf\n", up);

    return 0;
}
// 运行结果：
// original number 123.54
// number rounded down 123.00
// number rounded up 124.00
