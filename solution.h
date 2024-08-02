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
    long long numberOfRightTriangles(std::vector <std::vector<int>> &grid);
};
