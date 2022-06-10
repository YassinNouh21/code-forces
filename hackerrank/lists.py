commands_number = int(input())

global_list =[]
for i in range(commands_number):
    command = input().split()
    if 'insert' == str(command[0]):
        global_list.insert(int(command[1]), command[2])
    elif 'print' == str(command[0]):
        print(global_list)
    elif 'sort' == str(command[0]):
        sorted(global_list)
    elif 'pop' == str(command[0]):
        global_list.pop() 
    elif 'reverse' == str(command[0]):
        global_list.reverse()
    elif 'append' == str(command[0]):
        global_list.append(command[1])
    elif 'remove' == str(command[0]):
        global_list.remove(command[1])