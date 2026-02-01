/*======https://www.dotcpp.com/course/574======*/

// 函数名: time
// 头文件：<time.h>
// 函数原型: long time(long *t);
// 功能: 获取系统时间
// 参数: 为当前时间
// 返回值: 返回当前系统时间
// 补充：
//   (1) t1 = time(NULL) 或 t1 = time(0)
//       将空指针传递给 time() 函数，并将 time() 返回值赋给变量 t1
//   (2) time(&t2);
//       将变量 t2 的地址作为实参传递给 time() 函数，函数自动把结果传递给 t2，不需要额外的赋值语句

// 程序例：获取系统时间，并输出结果
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t;
    t = time(NULL);
    printf("The number of seconds since January 1, 1970 is %ld\n", t);
    return 0;
}
// 运行结果：
// The number of seconds since January 1, 1970 is 1592304422
