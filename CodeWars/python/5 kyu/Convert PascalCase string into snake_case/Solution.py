import re
def to_underscore(string):
    return re.sub('(?<=\w)([A-Z]+)', r'_\1', str(string)).lower()
        