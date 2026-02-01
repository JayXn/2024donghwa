/*======https://www.dotcpp.com/course/584======*/


// 函数名: strcspn
// 头文件： <string.h>
// 函数原型: int strcspn(char *str1, char *str2);
// 功能: 按顺序在字符串 str1 中查找连续有几个字符都不属于字符串 str2 内的字符
// 参数: char *str1  -- 要被检索的字符串。
//        char *str2  -- 该字符串包含了要在 str1 中进行匹配的字符列表。
// 返回值: 如果 str2 中没有能被匹配的字符则返回 str1 的长度，否则返回字符串 str1 开头连续和字符串 str2 内所有字符不同的个数
// 注意: 从字符串 str1 的开头计算连续的字符，而这些字符都完全不在字符串 str2 中。简单地说，若返回的数值为 n，则代表
//        字符串 str1 开头连续有 n 个字符都不含字符串 str2 中的字符。
 
// 程序例：在字符串 string1 中查找与字符串 string2 内字符完全不匹配的个数，并输出结果
#include <string.h>
#include <stdio.h>
 
int main(void) {
   char *string1 = "1234567890";
   char *string2 = "747DC8";
   int length = strcspn(string1, string2);
   printf("Character where strings intersect is at position %d\n", length);
   return 0;
}
 
// 运行结果：
// Character where strings intersect is at position 3
