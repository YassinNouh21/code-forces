n = int(input())
arr = list(map(int, input().split()))
arr.sort(reverse=True) 
a = list(set(arr))
print(a[1])