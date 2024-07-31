//
// Created by pengqq on 24-4-25.
//

#include "solution.h"

int Solution::minRectanglesToCoverPoints(std::vector<std::vector<int>> &points, int w)
{
    // 横坐标升序排序
    std::sort(points.begin(), points.end(), [](const std::vector<int> &v1, const std::vector<int> &v2) -> bool
    {
        return v1[0] < v2[0];
    });

    int _count = 0;
    int _right_margin = -1;

    for (std::vector<int> _point: points)
    {
        if (_point[0] > _right_margin)
        {
            _right_margin = _point[0] + w;
            ++_count;
        }
    }

    return _count;
}
