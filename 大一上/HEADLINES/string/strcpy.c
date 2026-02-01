/*======https://www.dotcpp.com/course/579======*/


// 函数名: strcpy
// 头文件： <string.h>
// 函数原型: char *strcpy(char *destin, const char *source);
// 功能: 拷贝一个字符串到另一个字符串数组中
// 参数: char *destin 为复制的目标字符串数组
//         const char *source 为复制的源字符串数组
// 返回值: 返回指向目标字符串数组的指针
// 注意: 必须保证 destin 足够大，能够容纳下 source，否则会导致溢出错误。该函数不会生成新字符串，而是修改原有字符
//       串。因此 destin 只能是字符数组，而不能是字符串指针指向的字符串，因为字符串指针指向的是字符串常量，常量不
//       能被修改。
 
// 程序案例：将一个字符串指针拷贝到一个字符串数组中，并输出拷贝后目标字符串
#include <string.h>
#include <stdio.h>
 
int main(void) {
   char string[10];
   char *str1 = "www.dotcpp.com";
   strcpy(string, str1);
   printf("%s\n", string);
   return 0;
}
 
// 运行结果：
// www.dotcpp.com

