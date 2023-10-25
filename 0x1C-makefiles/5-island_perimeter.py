#!/usr/bin/python3

"""
    a function that returns the perimeter of the island described in grid:
"""
def island_perimeter(grid):
    """
        Function to find the area of island
    """
    m_c = 0
    m_r = 0
    n = len(grid)
    for i in range(n):
        tmp_c = 0
        tmp_r = 0
        for j in range(n):
            if grid[i][j] == 1:
                tmp_c +=  1
            if grid[j][i] == 1:
                tmp_r += 1

        m_c = max(tmp_c, m_c)
        m_r = max(tmp_r, m_r)
    return (2 * (m_c + m_r))
