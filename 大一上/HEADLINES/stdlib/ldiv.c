/*======https://www.dotcpp.com/course/556======*/

// 函数名：ldiv
// 头文件：<stdlib.h>
// 函数原型：ldiv_t ldiv(long lx, long ly);
// 功能：用于两个长整型数相除
// 参数：long lx  为被除数
//       long ly  为除数 
// 返回值：返回商和余数
// 补充：typedef struct{
//            long quot;
//            long rem;
//         } ldiv_t;

// 程序例：使用该函数进行两个长整型数165000和35500相除的商和余数
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    ldiv_t lx = ldiv(165000L, 35500L);
    printf("165000 div 35500 = %ld remainder %ld\n", lx.quot, lx.rem);
    return 0;
}
// 运行结果
// 165000 div 35500 = 4 remainder 23000
