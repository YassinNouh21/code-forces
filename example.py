def add(a, /, b):
    return a + b


with_parameter = add(1, b=2)
without_parameter = add(2, 1)

print(with_parameter)
print(without_parameter)
