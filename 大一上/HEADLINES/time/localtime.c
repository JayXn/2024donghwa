/*======https://www.dotcpp.com/course/577======*/

// 函数名: localtime
// 头文件：<time.h>
// 用法: struct tm *localtime(long *clock);
// 功能: 把日期和时间转变为结构体 tm
// 参数: 要转换的时间，以秒为单位
// 返回值: 返回 tm 结构形式的当地标准时间

// 程序例：获取 tm 结构的系统时间函数，并将结果输出
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t timer;
    struct tm *tblock;
    timer = time(NULL);  // 获取当前时间
    tblock = localtime(&timer);
    char *str = asctime(tblock);  // 将 tm 结构体转换成字符串
    printf("Local time is: %s", str);
    return 0;
}
// 运行结果：
// Local time is: Tue Jun 16 21:01:54 2020
