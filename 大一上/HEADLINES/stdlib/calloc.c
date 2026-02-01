/*======https://www.dotcpp.com/course/547======*/

// 函数名：calloc
// 头文件：<stdlib.h>
// 函数原型：void *calloc(size_t n, size_t s);
// 功能：用于分配堆内存
// 参数：size_t n 分配空间的个数
//       size_t s 分配空间的字节数
// 返回值：返回所分配内存的指针

// 程序例：使用该函数为输入的元素动态分配内存空间
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int *p = (int*)calloc(1, sizeof(int));
   *p = 8;
   printf("the value is %d\n", *p);
   free(p);
   return 0;
}

// 运行结果
// the value is 8
