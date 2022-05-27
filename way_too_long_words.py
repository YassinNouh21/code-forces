
test_number = int (input())

def split_word(word):
    return word[1:-1]

for i in range(test_number):
    word = str(input())
    if len(word) <= 10:
        print(word)
    else:
        print(f'{word[0]}{len(split_word(word))}{word[-1]}')

