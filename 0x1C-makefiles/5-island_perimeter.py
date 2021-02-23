#!/usr/bin/python3
""" Module with island perimeter function """


def island_perimeter(grid):
    """ Return perimeter of island """
    h = len(grid)
    w = len(grid[0])
    count = 0

    for i in range(h):
        for j in range(w):
            if (grid[i][j]) == 1:
                if (i - 1) < 0:
                    count += 1
                else:
                    if grid[i - 1][j] == 0:
                        count += 1
                if (j - 1) < 0:
                    count += 1
                else:
                    if grid[i][j - 1] == 0:
                        count += 1
                if (i + 1) > h - 1:
                    count += 1
                else:
                    if grid[i + 1][j] == 0:
                        count += 1
                if (j + 1) > w - 1:
                    count += 1
                else:
                    if grid[i][j + 1] == 0:
                        count += 1
    return count
