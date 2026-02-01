/*======https://www.dotcpp.com/course/558======*/

// 函数名：lsearch
// 头文件：<stdlib.h>
// 函数原型：void* lsearch(void* key, void* district, size_t *n, size_t m, int (*func)(const void*, const void*));
// 功能：用于在给定的区域内从头到尾进行线性搜索
// 参数：void* key 指向要查找关键字的指针
//       void* district 指向要被搜索区域的开始地址
//       size_t *n 查找区域元素的个数
//       size_t m 查找区域中每个元素的大小
//       int (*func)(const void*, const void*) 一个函数的指针，此函数用来比较两个元素的大小
// 返回值：若在查找区域找到关键数据，则返回找到的元素的地址；
//        若查找的数据不在查找区域，则添加到查找区域，再把加入后的地址返回;

// 程序例：使用该函数实现在数组a中线性搜索元素27，并将新元素加入到数组中
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
    int key = 27;
    fc f = compare;
    int* result = (int*)lsearch(&key, arr, &n, sizeof(int), f);

    if (result) {
        printf("Number %d is found\n", key);
    } else {
        printf("Number %d is not found\n", key);
    }

    return 0;
}
// 运行结果
// Number 27 is found
