/*======https://www.dotcpp.com/course/594======*/


// 函数名: strpbrk
// 头文件：<string.h>
// 函数原型: char *strpbrk(const char *str1, const char *str2);
// 功 能:  比较字符串 str1 和 str2 中是否有相同的字符，但不包括结束符 '\0'
// 参数：const char *str1  要进行查找的目标字符串
//       const char *str2  要查找的字符串
// 返回值：返回指向 str1 中第一个匹配的字符的指针，若查找失败，则返回 NULL

// 程序例: 在字符串 str1 中查找第一个属于字符串 str2 中的任何一个字符串的位置。
#include <string.h>
#include <stdio.h>

int main(void) {
   char *str1 = "www.dotcpp.com";
   char *str2 = "cde";
   char *ptr = strpbrk(str1, str2);
   if (ptr) {
      printf("strpbrk found first character: %c\n", *ptr);
   } else {
      printf("strpbrk didn't find character in set\n");
   }
   return 0;
}
 
// 运行结果：
// strpbrk found first character: d
