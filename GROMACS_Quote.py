lines = open('assets/Quotes.txt').read().splitlines()
with open('quotes.txt', 'a') as out:
    for line in lines:
        out.write('\''+line+'\',\n')
