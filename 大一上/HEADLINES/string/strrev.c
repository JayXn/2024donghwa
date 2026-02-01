/*======https://www.dotcpp.com/course/595======*/


// 函数名: strrev
// 头文件：<string.h>
// 函数原型: char *strrev(char *str);
// 功 能: 将字符串中的字符全部颠倒顺序，重新排序
// 参 数： char *str   为要进行倒序的字符串 
// 返回值： 返回指向颠倒顺序后的字符串指针
// 注 意：  该函数不会生成新字符串，而是修改原有字符串。因此它只能逆置字符数组， 而不能逆置字符串指针指向的字串，因为字符串指针指向的是字符串常量，常量不能被修改。

// 程序例: 将字符串数组forward的字符逆置 ，并把结果输出
#include<string.h>
#include<stdio.h>
 
int main(void){
 
   char forward[20] = "www.dotcpp.com";
 
   printf("Before strrev(): %s\n", forward);
 
   strrev(forward);
 
   printf("After strrev(): %s\n", forward);
 
   return 0;
 
}
 

//运行结果：

//Before strrev(): www.dotcpp.com
//After strrev(): moc.ppctod.www
