# 산수 문제 출제
import random

x=random.randint(1,100)
y=random.randint(1,100)

answer=int(input(f"{x}+{y}="))
#f"문자열{변수}" == %(d,s,etc..)

flag = (answer==(x+y))
print(flag)