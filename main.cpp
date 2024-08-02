#include <iostream>

#include "solution.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;

    Solution *solution = new Solution;

    std::vector<std::vector<int>> grid;
    grid.push_back({0, 1, 0});
    grid.push_back({0, 1, 1});
    grid.push_back({0, 1, 0});

    long long res = solution->numberOfRightTriangles(grid);

    std::cout << res << std::endl;

    return 0;
}
