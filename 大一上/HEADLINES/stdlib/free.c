/*======https://www.dotcpp.com/course/553======*/

// 函数名：free
// 头文件：<stdlib.h>
// 函数原型：void free(void *block);
// 功能：用于释放已分配的内存块
// 参数：void *block 为已分配的内存块
// 返回值：没有返回值  

// 程序例：使用该函数释放已分配的内存空间
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
   char *p = (char *)malloc(sizeof(20));
   strcpy(p, "www.dotcpp.com");
   printf("String is %s\n", p);
   free(p);

   return 0;
}
// 运行结果
// String is www.dotcpp.com
