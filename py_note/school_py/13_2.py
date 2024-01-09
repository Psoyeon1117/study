#홀/짝 검사
number = int(input("정수를 입력하시오:"))

if number%2==0:
    print("짝수입니다.")
else:
    print("홀수입니다.")

#부호 검사
number_sign = int(input("정수를 입력하시오:"))

if number_sign >= 0:
    print("양수입니다.")
else:
    print("음수입니다.")

#성적 검사
score = int(input("점수를 입력하시오:"))

if score >= 60:
    print("합격입니다.")
else:
    print("불합격입니다.")


