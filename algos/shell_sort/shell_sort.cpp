#include <debug.h>

using namespace std;

/**
 * 选择一个增量序列t1，t2，…，tk，其中ti>tj，tk=1；
 * 按增量序列个数k，对序列进行k 趟排序；
 * 每趟排序，根据对应的增量ti，将待排序列分割成若干长度为m 的子序列，分别对各子表进行直接插入排序。仅增量因子为1 时，整个序列作为一个表来处理，表长度即为整个序列的长度。
 */

static int gap[3] = {3, 2, 1};

int shell_sort(int* nums, unsigned int count, int* dst_nums)
{
    if (NULL == nums || NULL == dst_nums || count <= 0) {
        log("bad parameters");
        return -1;
    }

    copy_nums_temp(nums, count, dst_nums);

    return 0;
}
