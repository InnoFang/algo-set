def print_crosss(n):
    cross = []
    cross.append(".." + "$" * (4 * n + 1) + "..")
    cross.append("..$" + "." * (4 * n  - 1) + "$..")
    cross.append("$$$." + "$" * (4 * n  - 3) + ".$$$")
    cross.append("$...$...$" if n == 1 else "$...$" + "." * (4 * n - 5) + "$...$")
    middle = n - 1
    for i in range(1, n):
        cross.append("$." * i + "$$$." + "$" * (4 * middle - 3) + ".$$$" + ".$" * i)
        cross.append("$." * (i + 1) + ".." + ("$" if n == i + 1 else "$" + "." * (4 * middle - 5) + "$") + ".." + ".$" * (i + 1))
        middle -= 1
    cross.append("$." * n + "$$$$$" + ".$" * n)

    for c in cross:
        print(c)

    for c in cross[-2::-1]:
        print(c)

if __name__ == '__main__':
    t = int(input())
    for cas in range(1, t + 1):
        n = int(input())
        print("Case #{}:".format(cas))
        print_crosss(n)
    