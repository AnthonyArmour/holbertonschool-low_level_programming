#!/usr/bin/python3
def island_perimeter(matrix=[]):
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
