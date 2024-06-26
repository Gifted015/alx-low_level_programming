#!/usr/bin/python3
"""
5-island_perimeter.py
This module contains a funtion that finds the perimeter of an island

Function:
- island_perimeter: returns the perimeter of the island described in grid
"""

def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    grid is a list of list of integers:
       0 represents a water zone
       1 represents a land zone
       One cell is a square with side length 1
       Grid cells are connected horizontally/vertically (not diagonally).
       Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
    """
    row = len(grid)
    perimeter = 0
    for i in range(row):
        column = len(grid[i])
        cell_num = 0
        for j in range(column):
            cell = grid[i][j]
            if cell == 1:
                cell_num = 4
                
                if row > 1:
                    if i == 0 and grid[i + 1][j] == 1:
                        cell_num -= 1
                    elif i == row - 1 and grid[i - 1][j] == 1:
                        cell_num -= 1
                elif row > 2 and 0 < i < row - 1:
                    if grid[i - 1][j] == 1 and grid[i + 1][j] == 1:
                        cell_num -= 2
                    elif grid[i - 1][j] == 1 or grid[i + 1][j] == 1:
                        cell_num -= 1

                if column > 1:
                    if j == 0 and grid[i][j + 1] == 1:
                        cell_num -= 1
                    elif i == column - 1 and grid[i][j - 1] == 1:
                        cell_num -= 1
                elif column > 2 and  0 < j < column - 1:
                    if grid[i][j - 1] == 1 and grid[i][j - 1] == 1:
                        cell_num -= 2
                    elif grid[i][j - 1] == 1 or grid[i][j - 1] == 1:
                        cell_num -= 1

                if cell_num < 4:
                    start = j

                
            elif cell == 0:
                if cell_num == 0:
                    pass
                elif 0 < j < (column - 1) and grid[i][j + 1] == 1:
                    if i == 0 or i == row - 1:
                        continue
                    else:
                        length = 0
                        check1 = 0
                        check2 = 0
                        for a in range(start, j + 1):
                            length += 1
                            if grid[i - 1][a] == 1:
                                check1 += 1
                            if grid[i + 1][a] == 1:
                                check2 += 1
                        if length == check1 and length == check2:
                            cell_num -= 1
        perimeter += cell_num
    return perimeter
