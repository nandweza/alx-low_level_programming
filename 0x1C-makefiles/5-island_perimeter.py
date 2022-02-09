#!/usr/bin/python3
"""
Module 5-island_perimeter.py
returns the perimeter of the island grid.
"""


def water_zone(grid, i, j):
    """returns the number of water zone a cell has in a grid."""

    num = 0

    if i <= 0 or not  grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """returns the perimeter of the island in grid."""

    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perim += water_zone(grid, i, j)

    return perim
