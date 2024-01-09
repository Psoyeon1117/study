# 구조화 프로그래밍
def menu():
    print("1.섭씨 온도->화씨 온도")
    print("2.화씨 온도->섭씨 온도")
    print("3.종료")
    menu = int(input("메뉴를 선택하세요:"))
    return menu


def one():
    sub_temp = float(input("섭씨 온도를 입력하시오:"))
    hwa_temp = sub_temp * 1.8 + 32
    return hwa_temp


def two():
    hwa_temp = float(input("화씨 온도를 입력하시오:"))
    sub_temp = (hwa_temp - 32) / 1.8
    return sub_temp


def main():
    while True:
        index = menu()
        if index == 1:
            temp = one()
            print("화씨온도=", temp)
        elif index == 2:
            temp = two()
            print("섭씨온도=", temp)
        else:
            break


main()
