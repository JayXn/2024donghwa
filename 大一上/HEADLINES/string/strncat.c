/*======https://www.dotcpp.com/course/590======*/


// 函数名: strncat
// 头文件：<string.h>
// 函数原型: char *strncat(char *destin,char *str,int n);
// 功能：在字符串尾部追加，即将一个字符串的指定数量的字符添加到另一个字符串的后面
// 参数：char *destin  -- 追加的目标字符串
//       char *str     -- 要追加的源字符串
//       int n        -- 追加的字符个数
// 返回值：返回 destin 字符串的起始地址 
// 注意：字符串 destin 必须有足够的空间来容纳新添加的字符串

// 程序例：在字符串 destin 后面添加字符串 str 的前 n 个字符
#include <stdio.h>
#include <string.h>

int main(void) {
   char destin[30] = "I like ";
   char *str = "www.dotcpp.com very much"; 
   int n = 14;
   char *newStr = strncat(destin, str, n);
   printf("%s\n", newStr);
   return 0;
}
  
// 运行结果：
// I like www.dotcpp.com
