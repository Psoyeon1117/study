# 구구단 출력
dan = int(input("원하는 단은:"))

for i in range(10):
    answer = dan * i
    print(f"{dan}*{i}={answer}")

j = 1
while j <= 9:
    print("%s*%s=%s" % (dan, j, dan * j))
    j += 1
