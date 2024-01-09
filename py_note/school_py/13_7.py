# 숫자 맞추기 게임
import random

random_number = random.randint(1, 100)  # 1과 100사이의 난수
tries = 0  # 시도횟수
number = 0  # 사용자의 추측값

while number != random_number:
    number = int(input("숫자를 입력하시오:"))
    tries += 1
    if number < random_number:
        print("너무 낮음!")
    elif number > random_number:
        print("너무 높음!")
    else:
        print("축하합니다. 시도횟수=", tries)
        break
