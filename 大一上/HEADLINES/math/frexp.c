/*======https://www.dotcpp.com/course/482======*/

// 函数名: frexp
// 功 能: 把一个双精度数分解为尾数和指数
// 函数原型: double frexp(double value, int *eptr);
// 参数：double value  为要分解的双精度浮点数 ， int *eptr  为传回分解好的指数的指针变量 
// 返回值：返回分解好的尾数

// 程序例：将给出的双精度数x分解成为在0.5和1之间(不包括1)尾数m和整形的指数n，
// 使原来的x=m*(2的n次方），将整形指数n存入exponent所指的地址中，返回尾数m。
#include <math.h>
#include <stdio.h>

int main(void) {
    double mantissa, number;
    int exponent;

    number = 8.0;
    mantissa = frexp(number, &exponent);

    printf("The number %lf is ", number);
    printf("%lf times two to the ", mantissa);
    printf("power of %d\n", exponent);

    return 0;
}
// 运行结果：
// The number 8.000000 is 0.500000 times two to the power of 4
