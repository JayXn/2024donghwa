/*======https://www.dotcpp.com/course/569======*/

// 函数名：system
// 头文件：<stdlib.h>
// 函数原型：int system(char *command);
// 功能：用于发出一个DOS命令
// 参数：char *command 为需要执行的DOS命令
// 返回值：成功 返回0，失败 返回-1

// 程序例：使用该函数执行DOS命令
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("About to spawn command.com and run a DOS command\n");
    system("dir");  // 执行dos命令
    return 0;
}
// 运行结果
// About to spawn command.com and run a DOS command
// 驱动器 D 中的卷是 软件
// 卷的序列号是 C06C-E404
// ...
