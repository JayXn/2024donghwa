/*======https://www.dotcpp.com/course/541======*/

// 函数名：abort
// 头文件：<stdlib.h>
// 函数原型：void abort(void);
// 功能：写一个终止信息到stderr，并异常终止程序
// 参数：没有参数
// 返回值：没有返回值

// 程序例：使用abort函数异常终止一个进程，并输出提示信息
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   printf("Calling abort()\n");
   abort();
   printf("It is noneffective\n");
   return 0;
}

// 运行结果
// Calling abort()
