/*======https://www.dotcpp.com/course/557======*/

// 函数名：lfind
// 头文件：<stdlib.h>
// 函数原型：void* lfind(void* key, void* district, int *n, int m, int (*func)(const void*, const void*));
// 功能：用于在给定的区域内从头到尾进行线性搜索
// 参数：void* key 指向要查找关键字的指针
//       void* district 指向要查找区域的指针
//       int *n 查找后的结果缓冲区
//       int m 要查找的区域的宽度
//       int (*func)(const void*, const void*) 一个函数的指针，此函数用来比较两个元素的大小
// 返回值：若找到关键数据，则返回找到的该元素的地址；否则返回NULL;

// 程序例：使用该函数实现在数组a中线性搜索元素68，输出提示
#include <stdio.h>
#include <stdlib.h>

typedef int (*fc)(const void*, const void*);

int compare(const void* p1, const void* p2) {  //比较两个数的大小
    int* pi1 = (int*)p1;
    int* pi2 = (int*)p2;
    return (*pi1 - *pi2);
}

int main(void) {
    int arr[5] = {25, 14, 29, 68, 55};
    size_t n = 5;
    int key = 29;
    fc f = compare;
    int* result = (int*)lfind(&key, arr, &n, sizeof(int), f);

    if (result) {
        printf("Number %d is found\n", key);
    } else {
        printf("Number %d is not found\n", key);
    }

    return 0;
}
// 运行结果
// Number 29 is found
