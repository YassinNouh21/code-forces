
size_input = int(input())
student_marks = {}
def find_average(scores):
    average = 0
    for x in range(len(scores)):
        average = average + (scores[x] / len(scores))
    return float(average)

for i in range(size_input):
    row_list = input().split()
    name, scores = row_list[0], row_list[1:]
    scores = list(map(float, scores))
    student_marks[name] = find_average(scores)

quired = str(input())
print("{:.2f}".format(round(student_marks[quired], 2)))