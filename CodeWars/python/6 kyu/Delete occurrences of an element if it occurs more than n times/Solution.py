def delete_nth(order,max_e):
    c = {x: 0 for x in order}
    r = []
    for i in order:
        if c[i] < max_e:
            r.append(i)
            c[i] += 1
    return r