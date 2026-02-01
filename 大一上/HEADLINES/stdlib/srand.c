/*======https://www.dotcpp.com/course/564======*/

// 函数名：srand
// 头文件：<stdlib.h>
// 函数原型：void srand(unsigned seed);
// 功能：用于初始化随机数的发生器
// 参数：unsigned seed 要设置随机时间的种子，其值为整数
// 返回值：没有返回值

// 程序例：使用该函数产生不同的随机整数序列
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i;

    srand((unsigned)time(NULL));

    printf("Two random numbers from 0 to 99\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", rand() % 100);
    }

    putchar('\n');

    return 0;
}
// 运行结果
// Two random numbers from 0 to 99
// 37 19 51 22 61
