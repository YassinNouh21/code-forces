def swap_case(input_str):
    str = ''
    for i in input_str:
        if i.islower():
            str = str + i.upper()
        elif i.isupper():
            str = str + i.lower()
        else:
            str = str + i
    return str

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)