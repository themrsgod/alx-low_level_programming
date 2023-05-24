#!/usr/bin/python3
"""Definition of island perimeter measuring function."""

def island_perimeter(grid):
    """Function that returns the perimiter of the island described in grid.
    Grid is surrounded by water and is either one island (1) or nothing (0).
    Args:
    grid (list): A list of list of integers.
    Returns:
    The perimeter of an island described in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for y in range(height):
        for z in range(width):
            if grid[y][z] == 1:
                size += 1
                if (z > 0 and grid[y][z - 1] == 1):
                    edges += 1
                    if (y > 0 and grid[y - 1][z] == 1):
                        edges += 1
                        return size * 4 - edges * 2
