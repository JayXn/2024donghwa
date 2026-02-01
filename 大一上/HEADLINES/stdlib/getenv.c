/*======https://www.dotcpp.com/course/554======*/

// 函数名：getenv
// 头文件：<stdlib.h>
// 函数原型：char *getenv(char *name);
// 功能：用于获取当前环境中的字符串
// 参数：char *name  为环境变量名 
// 返回值：返回给定的环境变量值。如果指定的环境变量在环境中未定义，则返回NULL;

// 程序例：使用该函数获取名为COMSPEC的环境字符串的首地址，并将其显示出来。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *s = getenv("COMSPEC");
    printf("Command processor: %s\n", s);
    return 0;
}
// 运行结果
// Command processor: C:\Windows\system32\cmd.exe
