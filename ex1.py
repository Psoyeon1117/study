print("hello world!")
print('"hello" world!')
print("hello\n world!")  # 줄 바꿈
print("hello\t world!")  # 탭
print(
    """동해물과 백두산이 마르고 닳도록
      하느님이 보우하사 우리나라 만세"""
)  # """~""" 엔터로 줄바꿈 가능함'

# 1.string operation
print("hello" + "world!")  # 문자열 더하기
print("hello world!" * 3)  # 문자열 반복
print("hello world!"[1])  # indexing
print("hello world!"[-1])
print("hello world!"[1:6])  # slicing

# 2.input
number = input("숫자를 입력하세요> ")  # 리턴값은 문자열 고정
print(number)
print(type(number))
int_a = int(number)  # int()정수로 변환
float_b = float(number)  # float()실수로 변환
print(type(int_a))
print(type(float_b))

# 3.string
str = "안녕 하세요"
print(str.find("안녕"))  # find()문자열 위치찾기
print("안녕" in str)  # in 문자열 존재여부
print(str.split(" "))  # split() 문자열 자르기
