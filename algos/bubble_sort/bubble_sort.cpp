#include <debug.h>

using namespace std;

/**
 * 比较相邻的元素。如果第一个比第二个大，就交换它们两个；
 * 1. 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对，这样在最后的元素应该会是最大的数；
 * 2. 针对所有的元素重复以上的步骤，除了最后一个；
 * 3. 重复步骤1~3，直到排序完成。
 */
int bubble_sort(int* nums, unsigned int count, int* dst_nums)
{
    if (NULL == nums || NULL == dst_nums || count <= 0) {
        log("bad parameters");
        return -1;
    }

    copy_nums_temp(nums, count, dst_nums);
    for (int i = 0; i < count; ++i) {
        for (int j = i; j < count; ++j) {
            if (dst_nums[i] >= dst_nums[j]) {
                exchange_nums(dst_nums[i], dst_nums[j]);
            }
        }
    }

    return 0;
}
