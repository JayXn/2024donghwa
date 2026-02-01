/*======https://www.dotcpp.com/course/472======*/

// 函数名: labs
// 头文件：<math.h>
// 函数原型: long labs(long n);
// 功能: 取长整型绝对值
// 参数：long n 要操作的长整型
// 返回值：返回长整型的绝对值

// 程序例: 求长整型x的绝对值,并将结果输出
#include <stdio.h>
#include <math.h>

int main(void) {
    long result;
    long x = -12345678L;
    result = labs(x);

    printf("number: %ld abs value: %ld\n", x, result);

    return 0;
}
// 运行结果：
// number: -12345678 abs value: 12345678
