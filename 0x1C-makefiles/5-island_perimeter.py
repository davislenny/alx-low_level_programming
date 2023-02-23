#!/usr/bin/python3
"""
Module for island_perimeter() method
"""


def island_perimeter(grid):
    """
    Computers the length of the perimeter of an island.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2


#    maxWidth = 0
#    length = 0
#    for i in range(len(grid)):
#        width = 0
#        for j in range(len(grid[0])):
#            if grid[i][j] == 1:
#                width += 1
#        if width:
#            length += 1
#        if width > maxWidth:
#            maxWidth = width
#    return ((maxWidth + length) * 2)
