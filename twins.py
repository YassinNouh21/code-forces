
number_of_coins = int(input())
list_coins = []

full_string = str(input())
list = full_string.split()

for i in range(number_of_coins):
    if list[i].isdigit():
        list_coins.append(int(list[i]))
    else:
        continue


list_coins.sort(reverse=True)

def sum_list(list):
    sum = int(0)
    for list_index in range(len(list)):
        sum = int(list[list_index]) + sum
    return sum

total_sum = int(sum_list(list_coins)) /2

sub_sum = int(0)
count = int(0)
for i in range(len(list_coins)):
    sub_sum = int(list_coins[i]) + sub_sum
    count+=1
    if sub_sum > total_sum:
        print(count)
        break
    else:
        continue


