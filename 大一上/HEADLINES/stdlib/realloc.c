/*======https://www.dotcpp.com/course/559======*/

// 函数名：realloc
// 头文件：<stdlib.h>
// 函数原型：void *realloc(void *p, unsigned size);
// 功能：用于重新分配指定大小的堆内存空间
// 参数：void *p 指向内存区的指针
//       unsigned size 为重新分配内存的大小
// 返回值：返回重新分配后内存块的指针

// 程序例：使用该函数为d分配内存
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double *d = (double*)malloc(sizeof(double));
    *d = 3.14;
    printf("the value is %lf\n", *d);

    int* i = (int*)realloc(d, sizeof(int));
    *i = 90;
    printf("the value is %d\n", *i);

    free(i);

    return 0;
}
// 运行结果
// the value is 3.140000
// the value is 90
