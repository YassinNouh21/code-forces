def count_substring(string, sub_string):
    sub_string = sub_string[:-1]
    print(sub_string)
    length = string.count(str(sub_string))
    return length


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()

    count = count_substring(string, sub_string)
    print(count)
