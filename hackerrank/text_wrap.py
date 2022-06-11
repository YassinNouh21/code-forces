import textwrap
import math

def wrap(string, max_width):
    string = str(string)
    temp_list = ''
    number_of_lines = math.ceil((len(string) / max_width))
    for i in range(number_of_lines):
        temp_list =temp_list +  string[i*max_width:(i+1)*max_width] + '\n'
    return temp_list

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
