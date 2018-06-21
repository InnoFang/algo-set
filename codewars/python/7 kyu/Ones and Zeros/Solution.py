from functools import reduce
def binary_array_to_number(arr):
  return reduce(lambda x,y: x*2+y, arr)