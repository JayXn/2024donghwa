/*======https://www.dotcpp.com/course/560======*/

// 函数名：malloc
// 头文件：<stdlib.h>
// 函数原型：void *malloc(unsigned size);
// 功能：用于分配指定大小的堆内存
// 参数：unsigned size 分配空间的大小
// 返回值：返回所分配内存的指针

// 程序例：使用该函数为字符串"www.dotcpp.com"动态分配内存。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *p = (char*)malloc(20);
    strcpy(p, "www.dotcpp.com");
    printf("String is %s\n", p);
    free(p);
    return 0;
}
// 运行结果
// String is www.dotcpp.com
