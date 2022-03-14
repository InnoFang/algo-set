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
