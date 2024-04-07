# My Python Solution Template

> Template for **algorithm competition**

## Run command

```shell
python main.py < in.txt > out.txt
type out.txt
```

If you want to write the output to `out.txt` , but also displayed on the screen, you can use the following command (shell on Linux or Powershell on Windows):

```shell
python main.py < in.txt | tee out.txt
```

For `bat` scripts on Windows, you can use the following alternatives:

```shell
python main.py < in.txt > out.txt
type out.txt
pause
```

## template

```Python
from itertools import *
from functools import *
from collections import *
from bisect import *
from decimal import *

# single-line input
read = lambda tp: list(map(tp, input().split()))

def solve():
    a, b = read(int)
    print(a + b)

# multi-cases input
if __name__ == '__main__':
    while True:
        try:
            solve()
        except EOFError:
            break
```

## template v2

Personally, I think this version of the template is easier to use, as it doesn't require changing input/output redirection when running Python programs. It also aligns with the habits and intuitions of most Python users when using the `input` function to input data.

```python
import os, sys

def solve(a, b):
    return a + b

def main():
    while True:
        try:
            a = int(input())
            b = int(input())
            print(solve(a, b))
        except EOFError:
            break


__INPUT_FILE__ = 'in.txt'

if __name__ == '__main__':
    if os.path.exists(__INPUT_FILE__):
        sys.stdin = open(__INPUT_FILE__)
        main()
        sys.stdin = sys.__stdin__
    else:
        main()
```
