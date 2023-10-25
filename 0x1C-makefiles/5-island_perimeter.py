#!/usr/bin/python3

"""
    a function that returns the perimeter of the island described in grid:
"""
def all(i, j, grid, n):
    tmp = 4
    if i > 0 and grid[i -1][j] == 1:
        tmp -= 2
    if j > 0 and grid[i][j - 1] == 1:
        tmp -= 2
    return tmp

def island_perimeter(grid):
    """
        Function to find the area of island
    """

    n = len(grid)
    k = len(grid[0])
    ans = 0
    for i in range(n):
        for j in range(k):
            if grid[i][j] == 1:
                ans += all(i, j, grid, n)

    return ans
