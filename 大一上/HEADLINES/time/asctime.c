/*======https://www.dotcpp.com/course/571======*/

// 函数名: asctime
// 头文件: <time.h>
// 函数原型: char *asctime(const struct tm *t);
// 功能: 将给定的日期和时间转换成ASCII码
// 参数: tm为要转换的结构体
// 返回值: 返回转换后的字符串指针

// 补充：
// 1. 将给定的日历时间tm转换为以下固定的25个字符格式的文本表示形式：
//    DDD MMM dd hh:mm:ss YYYY
//    DDD    一星期的某一天，如Mon
//    MMM    月份，如Jan
//    dd     月中一天（1, 2, ……, 31）
//    hh     小时（1, 2, ……, 24）
//    mm     分钟（1, 2, ……, 59）
//    ss     秒数（1, 2, ……, 59）
//    YYYY   年+1900
//    如果任何成员*time_ptr超出其正常范围，则行为是不确定的
//    如果指示的time_ptr->tm_year日历年份超过4位或小于1000 年，则行为不明确。
//    该函数不支持本地化，并且不能删除换行符。
// 2. struct tm {
//      int tm_sec;         //秒
//      int tm_min;         //分
//      int tm_hour;        //时
//      int tm_mday;        //一个月份中的天数
//      int tm_mon;         //月份
//      int tm_year;        //年份
//      int tm_wday;        //星期
//      int tm_yday;        //一年中的天数
//      int tm_isdst;       //夏令时标识符，实行夏令时的时候，tm_isdst为正。不实行夏令时的时候，tm_isdst为0；不了解情况时，tm_isdst()为负。
// };

// 程序例：将时间结构体t转换为字符串时间描述，并将结果输出
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void) {
   struct tm t;
   char str[80];

   t.tm_sec = 1;
   t.tm_min = 30;
   t.tm_hour = 9;
   t.tm_mday = 22;
   t.tm_mon = 11; 
   t.tm_year = 56;
   t.tm_wday = 4;
   t.tm_yday = 0;     // 不显示
   t.tm_isdst = 0;    // 不实行夏令时

   strcpy(str, asctime(&t));
   printf("%s\n", str);

   return 0;
}

// 运行结果：
// Thu Dec 22 09:30:01 1956
