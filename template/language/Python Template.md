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
import os
from sys import stdin

# single-line input
def read(type):
    assert type in [int, float, str]
    inputs = list(map(type, stdin.readline().split()))
    return inputs if len(inputs) > 1 else inputs[0]

# simplify
read_ = lambda tp: list(map(tp, stdin.readline().split()))

# whole-file input
def read_all(): 
    M = 10 ** 7
    # if all data type are integer, code follow
    # return list(map(int, os.read(0, M).split()))

    # otherwise as below, then cast data manually
    return list(os.read(0, M).split())

def main():
    pass

if __name__ == '__main__':
    main()

```
