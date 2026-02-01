/*======https://www.dotcpp.com/course/573======*/

// 函数名: ctime
// 头文件: <time.h>
// 函数原型: char *ctime(const time_t *time);
// 功能: 把日期和时间转换为字符串
// 参数: 为转换的日期时间
// 返回值: 返回转换后的字符串指针

// 补充：
// Www Mmm dd hh:mm:ss yyyy
// Www 表示星期几
// Mmm 是以字母表示的月
// dd 表示一月中的第几
// hh:mm:ss 表示时
// yyyy 表示年份

// 程序例: 获取系统时间，并转换成字符串，输出结果
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t; // typedef long time_t;
    time(&t); // 获取系统时间
    char *str = ctime(&t); // 将时间t转换为字符串
    printf("Today's date and time: %s\n", str);
    return 0;
}

// 运行结果：
// Today's date and time: Tue Jun 16 18:02:26 2020
