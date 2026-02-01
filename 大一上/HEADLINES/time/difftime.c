/*======https://www.dotcpp.com/course/575======*/

// 函数名: difftime
// 头文件: <time.h>
// 函数原型: double difftime(time_t time1, time_t time2);
// 功能: 计算两个时刻之间的时间差
// 参数: time_t time1 表示时间结束的time_t对象
//       time_t time2 表示时间开始的time_t对象
// 返回值: 该函数返回以双精度浮点型 double 值表示的两个时间之间相差的秒数 (time1 - time2)。

// 程序例: 获取两个时刻之间的时间差，并将结果输出
#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(void) {
    time_t first, second; // typedef time_t long
    first = time(NULL);   // 获取系统当前时间
    Sleep(2000);           // 间隔2s
    second = time(NULL);  // 获取系统当前时间

    printf("The difference is: %f seconds\n", difftime(second, first));

    getch();

    return 0;
}

// 运行结果：
// The difference is: 2.000000 seconds
