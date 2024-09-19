/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除有序数组中的重复项 II
 */
//  1 2 3 4 5
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int k = 2; // 每个元素最多出现的次数
    if (nums.size() <= k) return nums.size(); // 如果数组长度小于等于 k，直接返回数组长度

    // 初始化慢指针和快指针
    int slow = k, fast = k;
    while (fast < nums.size()) {
        // 如果 nums[fast] 不等于 nums[slow - k]
        // 则将 nums[fast] 复制到 nums[slow]，并将 slow 向前移动一位
        if (nums[fast] != nums[slow - k]) { //nums[slow - k] 是当前考虑的元素在新数组中的第一个可能的位置
            nums[slow] = nums[fast];
            slow++;
        }
        // 将 fast 向前移动一位，以检查下一个元素
        fast++;
    }
    // 返回新数组的长度
    return slow;
    }
};
// @lc code=end

