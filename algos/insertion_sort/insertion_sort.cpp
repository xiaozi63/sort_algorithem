#include <debug.h>

using namespace std;

/**
 * 一般来说，插入排序都采用in-place在数组上实现。具体算法描述如下：
 * 1. 从第一个元素开始，该元素可以认为已经被排序；
 * 2. 取出下一个元素，在已经排序的元素序列中从后向前扫描；
 * 3. 如果该元素（已排序）大于新元素，将该元素移到下一位置；
 * 4. 重复步骤3，直到找到已排序的元素小于或者等于新元素的位置；
 * 5. 将新元素插入到该位置后；
 * 6. 重复步骤2~5。
 */
int insertion_sort(int* nums, unsigned int count, int* dst_nums)
{
    if (NULL == nums || NULL == dst_nums || count <= 0) {
        log("bad parameters");
        return -1;
    }

    copy_nums_temp(nums, count, dst_nums);
    for (int i = 1; i < count; ++i) {
        for (int j = i; j >= 0; --j) {
            if (dst_nums[j -1] > dst_nums[j]) {
                    exchange_nums(dst_nums[j], dst_nums[j - 1]);
            }
        }
    }   
    return 0;
}
