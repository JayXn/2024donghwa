/*======https://www.dotcpp.com/course/588======*/


// 函数名: strlen
// 头文件： <string.h>
// 函数原型: int strlen(const char *str);
// 功能: 计算字符串长度
// 参数: const char *str 为要计算的字符串
// 返回值: 返回字符串 str 的长度
 
// 程序例：计算字符串 str 的长度
#include<stdio.h>
#include<string.h>
 
int main(void){
   char *str = "www.dotcpp.com";
   int len = strlen(str);
   printf("%s 的长度为 %d\n", str, len);
   return 0;
}
 
// 运行结果：
// "www.dotcpp.com" 的长度为 14
