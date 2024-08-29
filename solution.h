//
// Created by pengqq on 24-4-25.
//

#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

#pragma once

class Solution
{
public:

    /**
     * @author pengqq
     * @brief
     *      LeetCode.3111 覆盖所有点的最少矩形数目
     * @param[in] points
     * @param[in] w
     * @return 矩形个数
     */
    int minRectanglesToCoverPoints(std::vector<std::vector<int>> &points, int w);

    /**
     * @author pengqq
     * @brief
     *      LeetCode.3128 直角三角形
     * @param[in] grid
     * @return 可构成直角三角形个数
     */
    long long numberOfRightTriangles(std::vector<std::vector<int>> &grid);

    /**
     * @author pengqq
     * @brief
     *      LeetCode.88 合并两个有序数组
     * @param nums1 初始长度m+n 最终结果合并到nums1
     * @param m nums1 元素个数
     * @param nums2
     * @param n nums2 元素个数
     */
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n);

    /**
     * @author pengqq
     * @brief
     *      LeetCode.27 移除元素
     * @param nums 注意需要修改nums
     * @param val
     * @return 包含目标元素的个数
     */
    int removeElement(std::vector<int> &nums, int val);

    /**
     * @author pengqq
     * @brief
     *      LeetCode.26 删除有序数组重复项
     * @param nums 要求原地删除
     * @return nums 中唯一元素的个数
     */
    int removeDuplicates(std::vector<int> &nums);

    /**
     * @author pengqq
     * @brief
     *      LeetCode.80 删除有序数组重复项  使得出现次数超过两次的元素只出现两次
     * @param nums 要求原地删除
     * @return 删除后数组的长度
     */
    int removeDuplicates2(std::vector<int>& nums);

    /**
     * @author pengqq
     * @brief
     *      LeetCode.169 多数元素 也就是求众数 保证：要求出现次数 > n/2
     *      1. hash map item=>count 通解
     *      2. arr.sort 通过排序 通解
     *      3. 摩尔投票（仅适用于保证众数出现次数 > n/2）: 假设众数为x 遍历数组 是众数score+1 不是-1
     *      每次出现0 表示前面众数和非众数互相抵消 重设x 直到最后score>0  特解
     * @param nums
     * @return
     */
    int majorityElement(std::vector<int>& nums);
};
