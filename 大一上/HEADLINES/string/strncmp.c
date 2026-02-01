/*======https://www.dotcpp.com/course/591======*/


// 函数名: strncmp
// 头文件：<string.h>
// 函数原型: int strncmp(const char *str1,const char *str2,int n);
// 功能：对指定字符串数量的两个字符串进行比较
// 参数：str1 和 str2 为要进行比较的字符串
//       n 为要比较的字符串个数
// 返回值：str1 > str2 返回大于0的值；
//         str1 == str2 返回等于0的值；
//         str1 < str2 返回小于0的值；
// 注意：此函数返回的不是1或-1这样的固定值，而是大于0或小于0的值

// 程序例：将字符串 s2 分别于字符串 s1 和 s3 的前 n 个字符进行比较，并把结果输出
#include <stdio.h>
#include <string.h>

int main(void) {
   char *s1 = "www.dotcpp", *s2 = "dotcpp.com", *s3 = "dotcpp";
   int p = strncmp(s2, s1, 3);
   if (p > 0) {
      printf("s2 is greater than s1\n");
   } else if (p < 0) {
      printf("s2 is less than s1\n");
   } else {
      printf("s2 is equals s1\n");
   }
   p = strncmp(s2, s3, 3);
   if (p > 0) {
      printf("s2 is greater than s3\n");
   } else if (p < 0) {
      printf("s2 is less than s3\n");
   } else {
      printf("s2 is equals s3\n");
   }
   return 0;  
}
 
// 运行结果：
// s2 is less than s1
// s2 is equals s3
