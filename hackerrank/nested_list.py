global_list = []
for i in range(int(input())):
    local_list = []
    name = input()
    score = float(input())
    local_list = [name, score]
    global_list.append(local_list)
global_list.sort(key=lambda x: x[1])
temp_one = global_list[0][1]
temp = [x for i in global_list for x in i if x == temp_one]

print(temp)
