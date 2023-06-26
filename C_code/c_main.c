#include <stdio.h>
#include "add_func.h"

// int add_func(int add_a, int add_b)
// {
//     printf("add_a = %d,add_b = %d/n",add_a, add_b);
//     return add_a + add_b;
// }


int main()
{
    /* 求两个数的和 */
    int var_a = 13, var_b = 14;
    add_func(var_a,var_b);
    
    getchar();
    getchar();
    return 0;
}

/*
报错：
PS D:\OpenPlanOfTech\git_HowToUse\C_code> cd "d:\OpenPlanOfTech\git_HowToUse\C_code\" ; 
if ($?) { gcc c_main.c -o c_main } ; if ($?) { .\c_main }
C:\Users\ADMINI~1\AppData\Local\Temp\ccOSd0zx.o:c_main.c:(.text+0x24): undefined reference to `add_func'
collect2.exe: error: ld returned 1 exit status
无法自动编译多文件：https://zhuanlan.zhihu.com/p/624788168
1-可手动编译；
2-可自动配置；
https://blog.csdn.net/weixin_43986536/article/details/123797095
*/