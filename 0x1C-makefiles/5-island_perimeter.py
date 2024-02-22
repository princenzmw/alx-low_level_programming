#!/usr/bin/python3
"""
A module to calculate the area of an island in form of matrix (grid).
The function def island_perimeter(grid): that returns the perimeter of the
island described in grid:
"""


def count_neighbor_waters(grid, row, col):
    """Counts and Return the number of water neighbors of a cell in a grid."""

    # Define the offsets for neighboring cells
    offsets = [(0, -1), (-1, 0), (0, 1), (1, 0)]

    # Count the number of water neighbors
    neighbors = sum(
        1 for dr, dc in offsets
        if 0 <= row + dr < len(grid) and 0 <= col + dc < len(grid[0])
        and not grid[row + dr][col + dc]
    )

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

    for row_idx, row in enumerate(grid):
        for col_idx, cell in enumerate(row):
            if cell:
                perimeter += count_neighbor_waters(grid, row_idx, col_idx)

    return perimeter
