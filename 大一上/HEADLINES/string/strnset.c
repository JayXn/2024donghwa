/*======https://www.dotcpp.com/course/600======*/


// 函数名: strnset
// 头文件：<string.h>
// 函数原型: char *strnset(char *str, char ch, unsigned n);
// 功能：指定字符串的前几个字符都设为指定字符
// 参数：char *str 为要进行设定的字符串
//       char ch 为要设定的字符
//       unsinged n 为设定的字符个数
// 返回值：返回指向设定好的字符串的指针
// 注意：该函数修改 str 的值，所以 str 只能是字符数组，而不能是字符串指针指向的字符串

// 程序例: 将 string 字符串的前 n 个字符替换成 '!'
#include <string.h>
#include <stdio.h>

int main(void) {
   char string[50] = "I like www.dotcpp.com";
   char letter = '!';
   printf("string before strnset: %s\n", string);
   strnset(string, letter, 6);
   printf("string after  strnset: %s\n", string);
   return 0;
}
 
// 运行结果：
// string before strnset: I like www.dotcpp.com
// string after  strnset: !!!!!! www.dotcpp.com

