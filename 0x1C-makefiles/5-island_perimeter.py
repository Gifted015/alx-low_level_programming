#!/usr/bin/python3
def island_perimeter(grid):
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
