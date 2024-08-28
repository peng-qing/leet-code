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
};
