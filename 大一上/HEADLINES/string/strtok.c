/*======https://www.dotcpp.com/course/598======*/


// 函数名: strtok
// 头文件：<string.h>
// 函数原型: char *strtok(char *str1, const char *str2);
// 功能： 用指定的分隔符分解字符串
// 参数：   char *str1  为要分解的字符串
//             const char *str2  为分隔符字符串
// 返回值：  返回下一个分割后的字符串指针，如果已无从分隔，则返回NULL
// 注意： 1、函数的作用是分解字符串，所谓分解，即没有生成新串，只是在s所指向的内容首次出现分界符的位置，将分界符修改成了'/0’，故第一次用strtok（）返回第一个子串
//           2、第一次提取子串完毕之后，继续对源字符串s进行提取，应在其后（第二次，第三次。。。第n次）的调用中将strtok的第一个参数赋为空值NULL（表示函数继续从上   一次调用隐式保存的位置，继续分解字符串；对于前一次次调用来说，第一次调用结束前用一个this指针指向了分界符的下一位）
//           3、当this指针指向“\0” 时，即没有被分割的子串了，此时则返回NULL
//           4、可以把delim理解为分隔符的集合，delim中的字符均可以作为分隔符。
//           5、strtok在调用的时候，如果起始位置即为分隔符，则忽略了起始位置开始的分隔符
//           6、该函数会改变str1的值，所以str1必须是字符串数组，不能是字符串指针

// 程序例: 将字符串数组input通过分隔符","分隔开，并将结果输出
#include<string.h>
#include<stdio.h>
 
int main(void){
 
   char input[50] = "I like www.dotcpp.com very much";
 
   char *p = strtok(input, " ");
 
   if(p){
 
      printf("%s\n", p);
 
   }
 
   while(p=strtok(NULL, " ")){//使用第一个参数为NULL来提取子串
 
      printf("%s\n", p);
 
   }
 
   return 0;
 
}
 

//运行结果：

//I 
//like
//www.dotcpp.com
//very 
//much
