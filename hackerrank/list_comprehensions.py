x = int(input())
y = int(input())
z = int(input())
n = int(input())
total_list = []
for x in range(x+1):
    for y in range(y+1):
        for z in range(z+1):
            if x + y + z == n: 
                continue
            else:
                total_list.append([x,y,z])
print(total_list)