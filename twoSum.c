/**
 * LEETCODE 1. Two Sum
 */

/**
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * 
 * Example:
 * 
 * Given nums = [2, 7, 11, 15], target = 9,
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 */


int* twoSum(int* nums, int numsSize, int target) {
    if(NULL == nums || numsSize == 0)
    {
    	return ;
    }

    int * res = malloc(sizeof(int) * 2); 
    int i = 0;
    int j = 0;
    for(i = 0; i < numsSize; ++i)
    {
    	for(j = i+1; j < numsSize; ++j)
    	{
    		if(nums[i] + nums[j] == target)
    		{
    			res[0] = i;
    			res[1] = j;

    			return res; 
    		}
    	}
    }

    return res;
}