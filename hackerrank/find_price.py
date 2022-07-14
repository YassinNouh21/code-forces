def cal_total(normal_price):
    return (normal_price * 30)


def cal_discount(total):
    return ((total * 1.26) / 30)


while(1):
    if input() == 0:
        normal_price = int(input())
        print(cal_total(normal_price) * 0.80)
    else:
        normal_price = int(input())
        print(cal_total(normal_price))
