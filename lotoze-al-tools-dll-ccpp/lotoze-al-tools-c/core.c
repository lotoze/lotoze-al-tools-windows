// lotoze-al-tools-c.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "core.h"



// 这是导出变量的一个示例
LOTOZEALTOOLSCORE_API int nlotozealtoolsc=0;

// 这是导出函数的一个示例
LOTOZEALTOOLSCORE_API int fnlotozealtoolsc(void)
{
    return 0;
}


/**
 * 空指针比较函数.
 * 
 * \param type 1=int
 * \param a
 * \param b
 * \return 
 */
int voidCompare(int type, void* a, void* b) {
    // 这里需要根据实际数据类型来实现比较逻辑
    // 例如，如果数据类型是 int，可以这样比较：
    // return *(int*)a == *(int*)b;
    // 如果是其他类型，需要相应地实现比较逻辑

    int result = 0; // 1为相等，2为a>b，-2为a<b



    switch (type){
        case 1:
            if (*(int*)a == *(int*)b) {
                return 1;
            } else if (*(int*)a > *(int*)b) {
                return 2;
            } else if (*(int*)a < *(int*)b) {
                return -2;
            }
     
        default:
            break;
    }


    return 0;
    
}


