def namelist(names): 
    l = len(names)
    if not l:
        return ''
    elif l == 1: 
        return names[0]['name']
    else:
        return ', '.join(n['name'] for n in names[:-1]) + ' & ' + names[-1]['name']