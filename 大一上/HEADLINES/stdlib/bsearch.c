/*======https://www.dotcpp.com/course/546======*/

// 函数名：bsearch
// 头文件：<stdlib.h>
// 函数原型：void* bsearch(const void* key, const void* list, size_t n, size_t m, int (*fc)(const void*, const void*));
// 功能：用于二分法搜索
// 参数：const void* key 指向要查找关键字的指针
//       const void* list 指向按从小到大顺序存放元素的表 
//       size_t n 指定查找表的元素的个数
//       size_t m 指定查找表中每个元素的字节数
//       int (*fc)(const void*, const void*) 一个函数的指针，此函数用来比较两个元素的大小
// 返回值：如果找到元素则返回指向该元素的指针，否则返回NULL；
 
// 程序例：实现二分法搜索元素456，并输出提示
#include <stdio.h>
#include <stdlib.h>

#define SIZE(arr) sizeof(arr)/sizeof(int)

int arr[] = {123, 456, 789, 654, 312, 714};

typedef int (*fc)(const void*, const void*);

int numcmp(const void* p1, const void* p2) {
   int *pi1 = (int*)p1;
   int *pi2 = (int*)p2;
   return (*pi1 - *pi2);
}

int search(int key) {
   fc f = numcmp;
   int *ptr = bsearch(&key, arr, SIZE(arr), sizeof(int), f);
   return ptr != NULL;
}

int main(void) {
   if (search(456)) {
      printf("456 is in the list.\n");
   } else {
      printf("456 isn't in the list\n");
   }
   return 0;
}

// 运行结果
// 456 is in the list.
