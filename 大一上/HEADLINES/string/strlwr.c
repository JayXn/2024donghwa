/*======https://www.dotcpp.com/course/589======*/


// 函数名: strlwr
// 头文件：<string.h>
// 函数原型: char *strlwr(char *str);
// 功能：将字符串中的大写字母全部转换成小写形式
// 参数：str 为要转换的字符串
// 返回值：返回转换后的小写形式的字符串，其实质就是返回 str。
// 注意：该函数不会创建一个新字符串返回，而是改变原有字符串。所以它只能操作字符数组，而不能操作指针字符串，因为指针指向的字符串是作为常量保存在静态存储区的，常量不能被修改。该函数不是标准库函数，只能在 Windows 下（VC、MinGW 等）使用，Linux GCC 中需要自己定义。

// 程序例：将一个字符串数组中的大写字母的字符转换成小写形式
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[20] = "WWw.DoTCPP.COM";
    strlwr(str);
    printf("%s\n", str);
    return 0;
}
 
// 运行结果：
// www.dotcpp.com
