#include <debug.h>

using namespace std;

/**
 * 把长度为n的输入序列分成两个长度为n/2的子序列；
 * 对这两个子序列分别采用归并排序；
 * 将两个排序好的子序列合并成一个最终的排序序列。
 */
int merge_sort(int* nums, unsigned int count, int* dst_nums)
{
    if (NULL == nums || NULL == dst_nums || count <= 0) {
        log("bad parameters");
        return -1;
    }

    copy_nums_temp(nums, count, dst_nums);
    
    return 0;
}
