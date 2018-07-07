def pig_it(text):
    return ' '.join(map(lambda w: w if not w.isalpha() else w[1:]+w[0]+'ay', text.split(' ')))