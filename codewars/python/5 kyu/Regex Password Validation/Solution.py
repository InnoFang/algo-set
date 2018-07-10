regex = '^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?\d)[A-Za-z\d]{6,}$'

# above code used Lazy Quantifier, but the follow code also can be accept.
# regex = '^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)[A-Za-z\d]{6,}$'