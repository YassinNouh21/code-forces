vowels = list({'a', 'e', 'i', 'o', 'u','y'} )

input = str(input())

for i in range(len(input)):
    if input[i].lower() in vowels:
        print('', end = '')
    else:
        if input[i].isupper():
            print(f'.{input[i].lower()}', end = '')
        else:
            print(f'.{input[i]}', end = '')