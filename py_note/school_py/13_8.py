# 산수 문제 발생기
import random


while True:
    x = random.randint(1, 100)
    y = random.randint(1, 100)

    answer = int(input(f"{x}+{y}="))
    if answer == (x + y):
        print("잘했어요!!")
    else:
        print("틀렸어요. 하지만 다음번에는 잘할 수 있죠?")
        break
