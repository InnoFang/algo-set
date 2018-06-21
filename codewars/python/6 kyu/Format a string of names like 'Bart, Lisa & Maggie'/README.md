# [Format a string of names like 'Bart, Lisa & Maggie'.](https://www.codewars.com/kata/format-a-string-of-names-like-bart-lisa-and-maggie/train/python)

Given: an array containing hashes of names

Return: a string formatted as a list of names separated by commas except for the last two names, which should be separated by an ampersand.

Example:

```
namelist([ {'name': 'Bart'}, {'name': 'Lisa'}, {'name': 'Maggie'} ])
# returns 'Bart, Lisa & Maggie'

namelist([ {'name': 'Bart'}, {'name': 'Lisa'} ])
# returns 'Bart & Lisa'

namelist([ {'name': 'Bart'} ])
# returns 'Bart'

namelist([])
# returns ''
```    
Note: all the hashes are pre-validated and will only contain A-Z, a-z, '-' and '.'.

`FUNDAMENTALS` `STRINGS` `FORMATTING` `ALGORITHMS`