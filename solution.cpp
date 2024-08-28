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

void Solution::merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
{
    int tail = m + n - 1;
    int p1 = m - 1, p2 = n - 1;

    while (p1 >= 0 || p2 >= 0)
    {
        if (p1 < 0)
        {
            nums1[tail] = nums2[p2--];
        }
        else if (p2 < 0)
        {
            nums1[tail] = nums1[p1--];
        }
        else if (nums1[p1] > nums2[p2])
        {
            nums1[tail] = nums1[p1--];
        }
        else
        {
            nums1[tail] = nums2[p2--];
        }
        tail--;
    }
}

int Solution::removeElement(std::vector<int> &nums, int val)
{
    int tail = nums.size() - 1, head = 0;
    while (head <= tail)
    {
        if (nums[head] != val)
        {
            head++;
            continue;
        }
        if (nums[tail] != val)
        {
            nums[head++] = nums[tail];
        }
        nums[tail--] = 0;
    }
    return head;
}

