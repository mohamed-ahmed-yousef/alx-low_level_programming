#!/usr/bin/python3

"""
    a function that returns the perimeter of the island described in grid:
"""
def all(i, j, grid, n):
    tmp = 4
    if i > 0:
        if grid[i -1][j] == 1:
            tmp -= 1
    if j > 0:
        if grid[i][j - 1] == 1:
            tmp -= 1
    if i > 0 and j > 0:
        if grid[i -1][j -1] == 1:
            tmp -= 1
    if i + 1 < n and j + 1 < n:
        if grid[i + 1][j + 1] == 1:
            tmp -= 1
    return tmp

def island_perimeter(grid):
    """
        Function to find the area of island
    """

    n = len(grid)
    ans = 0
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                ans += all(i, j, grid, n)
            if grid[j][i] == 1:
                ans += all(j, i, grid, n)
    print(ans)
            
