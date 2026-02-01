/*======https://www.dotcpp.com/course/583======*/


// 函数名: strcmpi
// 头文件： <string.h>
// 函数原型: int strcmpi(char *str1, char *str2);
// 功能：比较两个字符串的大小，但是不区分大小写
// 参数：str1 和 str2 为要比较的字符串
// 返回值：str1 > str2，返回 1；
//          str1 == str2，返回 0；
//          str1 < str2，返回 -1；
 
// 程序例: 比较字符串 buf1 和 buf2，不区分大小写，并将结果输出
#include <string.h>
#include <stdio.h>
 
int main(void){
   char *buf1 = "www.dotcpp.com", *buf2 = "WWW.DOTCPP.COM";
   int ptr = strcmpi(buf2, buf1);
 
   if(ptr > 0){
      printf("buffer 2 is greater than buffer 1\n");
   }
 
   if(ptr < 0){
      printf("buffer 2 is less than buffer 1\n");
   }
 
   if(ptr == 0){
      printf("buffer 2 equals buffer 1\n");
   }
 
   return 0;
}
 
// 运行结果：
// buffer 2 equals buffer 1
