n = int(input())
input_list = map(int, input().split())
tuple_list = tuple(input_list)
print(hash(tuple_list))