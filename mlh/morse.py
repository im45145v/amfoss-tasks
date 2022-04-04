def t(w):
    l = {'A':'.-','B':'-...','C':'-.-.','D':'-..','E':'.',
         'F':'..-.','G':'--.','H':'....','I':'..','J':'.---',
         'K':'-.-','L':'.-..','M':'--','N':'-.','O':'---',
         'P':'.--.','Q':'--.-','R':'.-.','S':'...','T':'-',
         'U':'..-','V':'...-','W':'.--','X':'-..-','Y':'-.--',
         'Z':'--..', ' ':'.....'}
    translation = ''
    if w.startswith('.') or w.startswith('−'):
        l_encrypt = dict([(v, k) for k, v in l.items()])
        w = w.split(' ')
        for x in w:
            translation += l_encrypt.get(x)
    else:
        w = w.upper()
        for x in w:
            translation += l.get(x) + ' '
    return translation.strip()
i=input("what to be translated from english to morse code : ")
print(t(i))
j=input("what to be translated from morse code to english : ")
k=j
print(t(k))
