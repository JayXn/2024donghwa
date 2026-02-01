/*======https://www.dotcpp.com/course/582======*/

// 函数名: strchr
// 头文件： <string.h>
// 函数原型: char *strchr(const char *str, char c);
// 功能： 查找字符串中第一个出现的指定字符的位置
// 参数： char *str  为要查找的目标字符串；
//            char c    为要查找的字符；  
// 返回值： 成功  返回字符第一次出现的位置；失败  返回NULL；
 
// 程序例:  查找字符串string中指定字符c的首次出现的位置
#include <string.h>
#include <stdio.h>
 
int main(void) {
   char string[15]; //定义字符数组
   char *ptr, c = 'c'; 
   strcpy(string, "www.dotcpp.com"); //复制字符串
   ptr = strchr(string, c); //查找字符出现的第一个位置
   if (ptr) {
      printf("The character %c is at position: %d\n", c, ptr-string);
   }else{
      printf("The character was not found\n");
   }
   return 0;
}
 
// 运行结果：
// The character c is at position: 7
