#include <debug.h>
#include <algo.h>

static int nums[NUMS_COUNT];
static int temp_nums[NUMS_COUNT];

int main(int args, char* argv[])
{
    log("start to test bruce's sort algo test...");
    init_nums(nums, COUNT(nums));

    log("start to do bubble sort...");
    memset(temp_nums, 0, sizeof(temp_nums));
    bubble_sort(nums, COUNT(nums), temp_nums);
    print_nums(temp_nums, COUNT(temp_nums));

    log("start to do select sort...");
    memset(temp_nums, 0, sizeof(temp_nums));
    select_sort(nums, COUNT(nums), temp_nums);
    print_nums(temp_nums, COUNT(temp_nums));

    log("start to do insertion sort...");
    memset(temp_nums, 0, sizeof(temp_nums));
    insertion_sort(nums, COUNT(nums), temp_nums);
    print_nums(temp_nums, COUNT(temp_nums));
    log("bruce's sort algo test... done");
    return 0;
}
