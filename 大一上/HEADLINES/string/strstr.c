/*======https://www.dotcpp.com/course/597======*/


// 函数名: strstr
// 头文件：<string.h>
// 函数原型: char *strstr(const char *destin, const char *str);
// 功能：在一个字符串中查找另一个字符串首次出现的位置
// 参数：const char *destin 为要查找的目标字符串
//       const char *str 为要查找的字符串
// 返回值：返回指向第一次出现匹配字符串的位置的指针

// 程序例: 在字符串destin中查找字符串str首次出现的位置，返回查找结果并输出 
#include<string.h>
#include<stdio.h>
 
int main(void){
 
   char *str1 = "I like www.dotcpp.com very much!", *str2 = "www.dotcpp.com";
 
   char *ptr = strstr(str1, str2);
 
   printf("The substring is: %s\n", ptr);
 
   return 0;
 
}
 

//运行结果：

//The substring is: www.dotcpp.com very much!
