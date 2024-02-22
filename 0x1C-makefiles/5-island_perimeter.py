#!/usr/bin/python3
"""
A module to calculate the area of an island in form of matrix (grid).
The function def island_perimeter(grid): that returns the perimeter of the
island described in grid:
"""


def count_neighbor_waters(grid, row, col):
    """Counts and Return the number of water neighbors of a cell in a grid."""

    neighbors = 0

    if row <= 0 or not grid[row - 1][col]:
        neighbors += 1
    if col <= 0 or not grid[row][col - 1]:
        neighbors += 1
    if col >= len(grid[row]) - 1 or not grid[row][col + 1]:
        neighbors += 1
    if row >= len(grid) - 1 or not grid[row + 1][col]:
        neighbors += 1

    return neighbors


def island_perimeter(grid):
    """
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island
        (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected
        to the water around the island).
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col]:
                perimeter += count_neighbor_waters(grid, row, col)

    return perimeter
