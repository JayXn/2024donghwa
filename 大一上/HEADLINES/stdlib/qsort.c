/*======https://www.dotcpp.com/course/562======*/

// 函数名：qsort
// 头文件：<stdlib.h>
// 函数原型：void *qsort(void* district, size_t n, size_t m, int (*fc)(const void*, const void*));
// 功能：用于对记录从小到大快速排序
// 参数：void* district 指向待排序区域的开始地址
//       size_t n 待排序区域元素的个数
//       size_t m 待排序区域中每个元素的大小
//       int (*fc)(const void*, const void*) 一个函数指针，比较两个元素的大小
// 返回值：没有返回值

// 程序例：使用该函数对无序序列arr进行快速排序。
#include <stdio.h>
#include <stdlib.h>

typedef int (*fc)(const void*, const void*);

int compare(const void* p1, const void* p2) {
    return (*(int*)p1) - (*(int*)p2);
}

int main(void) {
    int i, arr[10] = {1, 6, 5, 7, 8, 9, 11, 24, 3, 10};
    fc f = compare;

    qsort(arr, 10, sizeof(int), f);

    for (i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }

    putchar('\n');

    return 0;
}
// 运行结果
// 1       3       5       6       7       8       9       10      11      24
