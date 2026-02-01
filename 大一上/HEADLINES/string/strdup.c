/*======https://www.dotcpp.com/course/586======*/


// 函数名: strdup
// 头文件： <string.h>
// 函数原型: char *strdup(const char *str);
// 功能: 将字符串复制到新建立的空间，该函数会先用 malloc() 配置与参数 str 字符串相同的空间大小，然后将参数 str 字符串的内
//       容复制到该内存地址，然后把该地址返回。该地址最后可以利用 free() 来释放。
// 参数: char *str  -- 要复制的字符串
// 返回值: 返回一字符串指针，该指针指向复制后的新字符串地址。若返回 NULL 表示内存不足。
// 注意: 不是标准库函数，只能在 Windows 下（VC、MinGW 等）使用，Linux GCC 中需要自己定义。
 
// 程序例：将字符串 string 复制到 dup_str 中，并将结果输出
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
   char *dup_str, *string = "www.dotcpp.com";
   dup_str = strdup(string);
   printf("%s\n", dup_str);
   free(dup_str);
   return 0;
}
 
// 运行结果：
// www.dotcpp.com
