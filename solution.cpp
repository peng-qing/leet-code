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

long long Solution::numberOfRightTriangles(std::vector<std::vector<int>> &grid)
{
    long long _ans = 0;
    // 行 & 列数
    int _rows = grid.size(), _columns = grid[0].size();
    if (_rows <= 1 || _columns <= 1)
    {
        // 单行 or 单列
        return _ans;
    }

    // 行点数 & 列点数
    std::vector<int> _row_sum(_rows, 0), _column_sum(_columns, 0);

    // 前缀和
    for (int i = 0; i < _rows; ++i)
    {
        for (int j = 0; j < _columns; ++j)
        {
            _row_sum[i] += grid[i][j];
            _column_sum[j] += grid[i][j];
        }
    }

    for (int i = 0; i < _rows; ++i)
    {
        for (int j = 0; j < _columns; ++j)
        {
            if (!grid[i][j])
            {
                continue;
            }
            // 以当前点为直角点 根据前缀和判断能否构成三角形
            _ans += (_row_sum[i] - 1) * (_column_sum[j] - 1);
        }
    }

    return _ans;
}

