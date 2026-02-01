/*======https://www.dotcpp.com/course/551======*/

// 函数名：exit
// 头文件：<stdlib.h>
// 函数原型：void exit(int status);
// 功能：用于正常终止程序
// 参数：int status 为终止状态
// 返回值：没有返回值    

// 程序例：使用该函数正常终止一个程序，其后面的语句将不被执行。
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int a, status;
   printf("Input a order: 1--go  others--exit\n");
   while (scanf("%d", &a) == 1) {
      if (a != 1) {
         exit(0);
      }
      printf("Input a order: 1--go  others--exit\n");
   }
   return 0;
}

// 运行结果
// Input a order: 1--go  others--exit
// 1
// Input a order: 1--go  others--exit
// 1
// Input a order 1--go  others--exit
// 3
