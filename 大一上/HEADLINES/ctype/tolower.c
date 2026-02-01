/*======https://www.dotcpp.com/course/446======*/

// 函数名: tolower
// 头文件：<ctype.h>
// 函数原型: int tolower(int ch);
// 功能: 把大写字母转换为小写字母，不是大写字母的不变
// 参数: int ch 待转换的字符
// 返回值: 返回转换后的字符

// 程序例： 把大写字母转换为小写字母
#include <ctype.h>
#include <stdio.h>

int main() {
   char ch1, ch2;
   printf("input a character:");
   scanf("%c", &ch1);
   ch2 = tolower(ch1);
   printf("transform %c to %c.\n", ch1, ch2);
   return 0;  
}

// 运行结果：
// input a character:G
// transform G to g.
