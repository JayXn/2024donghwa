/*======https://www.dotcpp.com/course/578======*/

// 函数名: tzset
// 头文件：<time.h>
// 函数原型: void tzset(void);
// 功能: 对 UNIX 操作系统的时间兼容性
// 参数: 没有参数
// 返回值: 没有返回值

// 程序例：实现 UNIX 时间兼容
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t td;

    if (putenv("TZ=PST8PDT") == -1) { // 设置环境变量，并判断是否成功
        printf("Unable to set tz\n");
        return 0;
    }

    tzset(); // 设置 UNIX 时间兼容

    time(&td);
    printf("Current time = %s\n", asctime(localtime(&td)));

    return 0;
}
// 运行结果：
// Current time = Tue Jun 16 06:32:06 2020
