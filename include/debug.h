#ifndef __SORT_TEST_H_
#define __SORT_TEST_H_

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>

using namespace std;

#define COUNT(a)    (sizeof(a) / sizeof(a[0]))
#define NUM_MAX 100 
#define NUM_MIN 20
#define NUMS_COUNT  20
#define DEBUG   1

static int print_nums(int* nums, unsigned int count) {

    if (NULL == nums) {
        cout << "bad paramenters" << endl;
        return -1; 
    }
    for (int i = 0; i < count; ++i) {
        cout << nums[i] << endl;
    }
    return 0;
}

static void log(string msg) {

    if (0 == msg.size()) {
        return;
    }
    if (DEBUG) cout << "[DEBUG] " << msg << endl;
}

static int rand_num(int min, int max) {

    int iSecret;
    clock_t t;

    t = clock();
    srand(t);

    iSecret = rand() % (max - min) + min;
    return iSecret;
}

/**
 *  initialize the random numbers list for test
 */
static void init_nums(int* nums, unsigned int count)
{
    if (NULL == nums || count <= 0) {
        log("bad paramenters");
        return;
    }

    memset(nums, 0, sizeof(nums));
    for (int i = 0; i < count; ++i) {
        nums[i] = rand_num(NUM_MIN, NUM_MAX);
    }
}

static void copy_nums_temp(int* nums, unsigned int count, int* dst_nums)
{
    if (NULL == nums || count <= 0 || NULL == dst_nums) {
        log("bad paramenters");
        return;
    }
    for(int i = 0; i < count; ++i) {
        dst_nums[i] = nums[i];
    }
}

static void exchange_nums(int& num_1, int& num_2) 
{
    int temp = num_1;
    num_1 = num_2;
    num_2 = temp;
}

#endif  // __SORT_TEST_H_
