def add(n):
    return CustomInt(n)


class CustomInt(int):
    def __call__(self, v, *args, **kwargs):
        return CustomInt(self + v)

# the follow solution are more clever
# class add(int):
#     def __call__(self, value):
#         return add(self + value)

# Or you can implement it in one line
# class add(int):
#     __call__ = lambda self, value: add(self + value)