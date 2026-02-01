/*======https://www.dotcpp.com/course/572======*/

// 函数名: clock
// 头文件: <time.h>
// 函数原型: clock_t clock(void);
// 功能: 用于确定处理器时间
// 参数: 没有参数
// 返回值: 成功自程序启动起，处理器时钟所使用的时间；失败-1

// 程序例: 获取处理器时钟的时间start和end，并且将两时钟时间差转为以秒为单位，并输出结果
#include <time.h>
#include <stdio.h>
#include <windows.h>

int main(void) {
    clock_t start, end; // typedef long clock_t;

    start = clock();    // 程序运行到当前的时间

    Sleep(5000);        // 间隔5秒

    end = clock();      // 程序运行到当前的时间

    printf("The time was: %lf\n", (end - start) * 1.0 / CLK_TCK); // CLK_TCK为1000

    return 0;
}

// 运行结果：
// The time was: 5.000000
