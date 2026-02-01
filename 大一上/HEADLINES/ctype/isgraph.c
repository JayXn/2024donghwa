/*======https://www.dotcpp.com/course/438======*/

// 函数名: isgraph
// 头文件：<ctype.h>
// 函数原型: int isgraph(int ch);
// 功能: 判断字符是否除空格外的可打印字符
// 参数: int ch 待检查的字符
// 返回值: ch不是除了空格外的可打印字符 返回0 , ch是除了空格外的可打印字符 返回非0

// 程序例：判断输入的字符是否为除了空格外的可打印字符
#include <ctype.h>
#include <stdio.h>

int main() {
    char ch;
    printf("input a character:");
    scanf("%c", &ch);
    if (isgraph(ch)) {
        printf("%c is graph.", ch);
    } else {
        printf("%c is not graph.", ch);
    }  
    putchar('\n');     
    return 0; 
}

// 运行结果:
// input a character:g
// g is graph.
