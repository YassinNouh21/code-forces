

def split_and_join(line):
    list = line.split(" ")
    return "-".join(list)

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)