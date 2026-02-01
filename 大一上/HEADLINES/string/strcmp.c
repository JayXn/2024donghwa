/*======https://www.dotcpp.com/course/581======*/


// 函数名: strcmp
// 头文件： <string.h>
// 函数原型: int strcmp(const char *str1, const char *str2);
// 功能： 比较两个字符串的大小，区分大小写
// 参数： str1 和 str2 为要比较的字符串
// 返回值： str1 > str2，返回 1；
//          str1 < str2，返回 -1；
//          str1 == str2，返回 0；
 
// 程序例: 比较两个字符串的大小，并输出结果
#include <string.h>
#include <stdio.h>
 
int main(void) {
   char *buf1 = "aaa", *buf2 = "bbb", *buf3 = "ccc";
   int ptr = strcmp(buf2, buf1);
   if (ptr > 0) {
      printf("buffer 2 is greater than buffer 1\n");
   } else if (ptr < 0) {
      printf("buffer 2 is less than buffer 1\n");
   } else {
      printf("buffer 2 is equals buffer 1\n");
   }
 
   ptr = strcmp(buf2, buf3);
   if (ptr > 0) {
      printf("buffer 2 is greater than buffer 3\n");
   } else if (ptr < 0) {
      printf("buffer 2 is less than buffer 3\n");
   } else {
      printf("buffer 2 is equals buffer 3\n");
   }
 
   return 0;
}
 
// 运行结果：
// buffer 2 is greater than buffer 1
// buffer 2 is less than buffer 3
