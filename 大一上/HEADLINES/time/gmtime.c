/*======https://www.dotcpp.com/course/576======*/

// 函数名: gmtime
// 头文件：<time.h>
// 函数原型: struct tm *gmtime(long *clock);
// 功能：用于把 clock 中的时间转换为格林尼治标准时间，然后将结果由 tm 结构体返回
// 参数：为长整型的系统时间
// 返回值：返回结构 tm 的指针，代表目前 UTC 时间，此函数返回的时间未经时区转换
// 补充：tm 结构体的定义为：
// struct tm{
//     int tm_sec;   // 代表目前秒数, 正常范围为 0-59, 但允许至 61 秒
//     int tm_min;   // 代表目前分数, 范围 0-59
//     int tm_hour;  // 从午夜算起的时数, 范围为 0-23
//     int tm_mday;  // 目前月份的日数, 范围 01-31
//     int tm_mon;   // 代表目前月份, 从一月算起, 范围从 0-11
//     int tm_year;  // 从 1900 年算起至今的年数，所以要 +1900
//     int tm_wday;  // 一星期的日数, 从星期一算起, 范围为 0-6
//     int tm_yday;  // 从今年 1 月 1 日算起至今的天数, 范围为 0-365
//     int tm_isdst; // 夏令时，正数表示实行夏令时，0 表示不实行夏令时，负数表示不了解。
// };

// 程序例：将系统时间 t 转换为结构体 tm，并将结构转换为字符串，并输出结果
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t;
    struct tm *gmt, *area;
    t = time(NULL);
    area = localtime(&t);
    printf("Local time is: %s", asctime(area));
    gmt = gmtime(&t);
    printf("GMT is: %s", asctime(gmt));
    return 0;
}
// 运行结果：
// Local time is: Tue Jun 16 19:25:21 2020
// GMT is: Tue Jun 16 11:25:21 2020
