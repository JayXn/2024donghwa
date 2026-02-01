/*======https://www.dotcpp.com/course/587======*/


// 函数名: stricmp
// 头文件： <string.h>
// 函数原型: int stricmp(const char *str1, const char *str2);
// 功能: 比较两个字符串大小，但不区分大小写
// 参数: str1 和 str2 为要比较的两个字符串
// 返回值: str1 > str2 返回 1；
//         str1 == str2 返回 0；
//         str1 < str2 返回 -1；
 
// 程序例: 比较字符串 buf1 和字符串 buf2 的大小，并输出结果
#include <string.h>
#include <stdio.h>
 
int main(void) {
   char *buf1 = "WWW.DOTCPP.COM", *buf2 = "www.dotcpp.com";
   int ptr = stricmp(buf2, buf1);
   if (ptr > 0) {
      printf("buffer 2 is greater than buffer 1\n");
   }
   if (ptr < 0){
      printf("buffer 2 is less than buffer 1\n");
   }
   if (ptr == 0) {
      printf("buffer 2 equals buffer 1\n");
   }
   return 0;
}
 
// 运行结果：
// buffer 2 equals buffer 1
