/*======https://www.dotcpp.com/course/568======*/

// 函数名：swab
// 头文件：<stdlib.h>
// 函数原型：void swab(char *from, char *to, int n);
// 功能：从源和目标区域交换字节
// 参数：char *from 和 char *to 为要交换字节的字符串
//       int n 为需要交换的字节数
// 返回值：没有返回值

// 程序例：使用该函数将字符串"ww.wodctppc.mo"交换成"www.dotcpp.com".
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    char suc[20] = {"ww.wodctppc.mo"};
    char des[20];
    swab(suc, des, strlen(suc));

    printf("This is dest: %s\n", des);

    return 0;
}
// 运行结果
// This is dest: www.dotcpp.com
