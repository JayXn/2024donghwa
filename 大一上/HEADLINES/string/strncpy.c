/*======https://www.dotcpp.com/course/593======*/


// 函数名: strncpy
// 头文件：<string.h>
// 函数原型: char *strncpy(char *destin,const char *source,int n);
// 功能：将指定数量的源字符串拼接在目标字符串的后面
// 参数：char *destin 为要目标字符串
//       const char *source 为要进行拼接的源字符串
//       int n 为要拼接的字符个数
// 返回值：返回字符串 destin 的指针
// 注意：如果目标字符数组中如果有有效的字符，就会被覆盖 n 个长度。该函数不会生成新字符串，而是修改原有字符串。因此 destin 只能是字符数组，而不能是字符串指针指向的字符串，因为字符串指针指向的是字符串常量，常量不能被修改。

// 程序例：将字符串 source 的前 n 个字符复制到 destin 中，并将结果输出
#include <stdio.h>
#include <string.h>

int main(void) {
   char *source = "www.dotcpp.com very much!";
   char destin[30] = { "Good Luck!" };
   strncpy(destin, source, 14);
   printf("%s\n", destin);
   return 0;
}
 
// 运行结果：
// www.dotcpp.com
