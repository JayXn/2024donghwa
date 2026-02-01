/*======https://www.dotcpp.com/course/585======*/


// 函数名: strspn
// 头文件：<string.h>
// 函数原型: int strspn(char *str1, char *str2);
// 功能：计算字符串str1中连续有几个字符都属于字符串str2,从参数str1字符串的开头计算连续的字符，而这些字符都完全str2所指字符串中的字符。简单的说，若返回的数值为n，则代表字符串str1开头连续有n个字符都是属于字符串str2内的字符。
// 参数：char *str1 -- 要被检索的字符串。
//       char *str2 -- 该字符串包含了要在 str1 中进行匹配的字符列表。
// 返回值：返回字符串str1开头连续包含字符串str2内的字符数目。所以，如果str1所包含的字符都属于str2，那么返回str1的长度；如果str1的第一个字符不属于str2，那么返回0

// 程序例: 计算string1中与string2中 有几个字符数组字符串str2,并将结果输出
#include <string.h>
#include <stdio.h>

int main(void) {
   char *string1 = "1234567890";
   char *string2 = "123DC8";
   int length = strspn(string1, string2);
   printf("Character where strings differ is at position %d\n", length);
   return 0;
}
 
// 运行结果：
// Character where strings differ is at position 3
