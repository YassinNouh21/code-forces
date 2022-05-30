


input_list = list(map(int, input().split()))

rate_m_ticket = input_list[3] / input_list[1]
rate_normal_ticket = input_list[2] / 1

# we have 3 main cases 
# first case when they are equal 
if rate_m_ticket == rate_normal_ticket:
    print(int(input_list[2] * input_list[0]))
elif rate_m_ticket < rate_normal_ticket:
    number_of_turn = int(float(input_list[0] / input_list[1]))
    value_m = int((number_of_turn + 1) * input_list[3])
    value_noraml = int((number_of_turn ) * input_list[3]+ (( input_list[0] -(number_of_turn * input_list[1])) * input_list[2])) 
    print(min(value_m, value_noraml))
else:
    print(int( input_list[2] * input_list[0]))