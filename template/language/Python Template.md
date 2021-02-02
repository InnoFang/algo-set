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
from sys import stdin

# single-line input
read = lambda tp: list(map(tp, stdin.readline().split()))

def solve(N):
    pass

# multi-cases input
while True:
    N = read(int):
    if len(N) == 0: 
        break
    solve(N)

```
