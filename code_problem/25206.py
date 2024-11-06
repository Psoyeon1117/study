def prod(credit, score):  # 학점x점수
    return credit * score


def transition(alphabat):  # A~F학점을 4.5~0.0으로 바꾸는 함수
    score = 0.0
    if alphabat.find("A") != -1:
        score = 4.0
    elif alphabat.find("B") != -1:
        score = 3.0
    elif alphabat.find("C") != -1:
        score = 2.0
    elif alphabat.find("D") != -1:
        score = 1.0
    else:
        score = 0.0
    if alphabat.find("+") != -1:  # "+"가 있을 경우 +0.5
        score += 0.5
    return score


product = 0
sum = 0

for i in range(20):
    s = input().split()  # 공백으로 이름,학점,점수를 나눈다.
    if s[2] == "P":  # "P"일 경우 계산에서 제외한다.
        continue
    credit = float(s[1])
    score = transition(s[2])
    product += prod(credit, score)
    sum += credit

print(product / sum)
