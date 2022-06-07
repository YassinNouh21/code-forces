from ast import Expression


expression = str(input())


list_number = []


def print_number(num_list):
    if len(num_list) == 1:
        print(num_list[0])
    else:
        for i in range(len(num_list)):
            if i == len(num_list) - 1:
                print(f'+{num_list[i]}', end='')
            elif i == len(num_list) - 2:
                print(f'{num_list[i]}', end='')
            else:
                print(f'{num_list[i]}+', end='')


def extract_num_string(experssion):
    index_list = int(0)
    for i in range(len(experssion)):
        if experssion[i].isdigit():
            if expression[i] is float:
                list_number.append(float(expression[i]))

            else:
                list_number.append(int(expression[i]))
        else:
            continue
    return list_number


expression_list_num = extract_num_string(expression)
expression_list_num.sort()
print_number(expression_list_num)
