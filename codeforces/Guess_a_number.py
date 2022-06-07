input_number = int(input())
# for i in range(input_number):

infinity_positive = pow(10,9)
infinity_negative = -1 * pow(10,9)

def check_type(type):
    if type.lstrip('-').isdigit():
        return int(type)
    elif type == 'Y' or type == 'N':
        if type == 'Y':
            return True
        else:
            return False
    else:
        return str(type)

def check_sign(sign, num_test_random, num_in_input):
    if sign == '>':
        if num_test_random > num_in_input[1]:
            print('true')
    elif sign == '>=':
        if num_test_random >= num_in_input[1]:
            print('true')
    if sign == '<':
        if num_test_random < num_in_input[1]:
            print('true')
    else:
        if num_test_random <= num_in_input[1]:
            print('true equal')
input_line = []

for i in range(input_number):
    input_line += list(map(check_type, input().split()))

print(input_line)

list_random = list()

index = 1 
for i in range(input_number):
    list_random.append(input_line[index])
    index += 3
list_random.sort()

print(list_random)

