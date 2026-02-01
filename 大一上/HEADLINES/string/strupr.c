/*======https://www.dotcpp.com/course/599======*/


// 函数名: strupr
// 头文件：<string.h>
// 函数原型: char *strupr(char *str);
// 功能：将字符串中的小写字母全部转换成大写形式
// 参数：char *str 为要转换的字符串
// 返回值：返回转换后的大写形式的字符串
// 注意：该函数不会生成新字符串，而是修改原有字符串。因此str只能是字符数组，而不能是字符串指针指向的字符串，因为字符串指针指向的是字符串常量，常量不能被修改。

// 程序例: 将字符串数组str全部小写字母转换成大写形式
#include<string.h>
#include<stdio.h>

int main(void) {
   char str[20] = "wWw.dotCpp.coM", *ptr;
   ptr = strupr(str);
   printf("%s\n", ptr);
   return 0;
}
 
// 运行结果：
// WWW.DOTCPP.COM
