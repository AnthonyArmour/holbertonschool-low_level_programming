#!/usr/bin/python3
"""Defines an island perimeter measuring function"""


def island_perimeter(matrix=[]):

    """Returns the perimeter of 1's island in a matrix
    Grid: list of integers
    Returns: perimeter"""

    lst = list()
    psides = 0
    for x in range(len(matrix)):
        lst = matrix[x].copy()
        for nn in range(len(lst) - 1):
            n = int(lst[nn])
            if n == 1:
                if x != len(matrix) - 1:
                    if matrix[x + 1][nn] == 0:
                        psides = psides + 1
                    if lst[nn + 1] == 0:
                        psides = psides + 1
                else:
                    psides = psides + 1
                if x != 0:
                    if matrix[x - 1][nn] == 0:
                        psides = psides + 1
                    if lst[nn - 1] == 0:
                        psides = psides + 1
                else:
                    psides = psides + 1
        del lst
    return psides
