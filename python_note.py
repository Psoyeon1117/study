import os

print("hello\n world!")  # 줄 바꿈
print("hello\t world!")  # 탭
print("""동해물과 백두산이 마르고 닳도록
      하느님이 보우하사 우리나라 만세""")  # """~""" 엔터로 줄바꿈 가능함'

# 1.string operation
print("hello" + "world!")  # 문자열 더하기
print("hello world!" * 3)  # 문자열 반복
print("hello world!"[1])  # indexing
print("hello world!"[1:6])  # slicing

# 2.input
number = input("숫자를 입력하세요> ")  # 리턴값은 str 고정
print(number, type(number))
int_a = int(number)  # int()정수로 변환
float_b = float(number)  # float()실수로 변환
print(type(float_b), type(int_a))

# 3.string
string = "안녕 하세요"
print(string.find("안녕"))  # find()문자열 위치찾기
print("안녕" in string)  # in 문자열 존재여부
print(string.split(" "))  # split() 문자열 자르기

# 4.조건문
# if 조건: 실행-elif-else   |   switch 조건: case 1~n
# False: none, 0, 0.0, 빈 컨테이너
# Ture : 1, False 외의 나머지
number = int(number)
if number > 0:
    print("조건: 양수입니다.")
elif number == 0:  # else if- 와 같은 기능
    print("조건: 0입니다.")
else:
    print("조건: 음수입니다.")
# pass 골격을 잡을 때, 후에 개발할 내용을 의미

# 5. list
list_a = [12, "문자열", 495, 34, 3456]
list_c = [1, "문자", 45, 34, 6]
list_b = [[1, 2, 3], [34, 56, 78], [2, 45, 67]]  # 리스트 안에 리스트 생성
print(list_a[1])
print(list_a[1][0])  # int 형식에선 불가능
print(list_b[1])
print(list_a + list_c)  # 리스트 합체
print(list_c * 3)  # 리스트 반복
# 리스트 요소 추가
list_a.append(5)
list_a.insert(2, 5)
print(list_a)
# 리스트 요소 제거
del list_a[2]
print(list_a)

# 6. 반복문
tree = 0
while tree < 5:  # 조건문이 참이라면 반복
    print("a")
    tree += 1
    if tree == 3:
        break  # 반복문 강제 종료
    else:
        continue  # 반복문 처음으로 이동
for i in list_a:  # 리스트,튜플,range
    print(i)

# 7. 파일 입출력
# f=open(파일이름, r:읽기 or w:쓰기 or a:추가하기)
# f.close() 파일 닫기
# 파일 쓰기
# writelines: 리스트(매개변수)의 문자열을 파일에 입력
f = open("new_file.txt", "w")
f.write("hello world")  # 문장입력
f.close()
# 파일 읽기
# readlines: 파일 요소들을 리스트로 출력
# read: 파일의 전체 내용을 문자열로 출력
f = open("new_file.txt", "r")
line = f.readline()  # 한 문장읽기
print(line)


# 8. 함수
# def 함수이름(매개변수): 문장, 리턴
def print_n(*args):  # 가변 매개변수: 수의 제한이 없다.
    for val in args:
        print(val)


power = lambda x: x * x  # lambda: 간단한 함수선언
print("lambda의 값: ", power(3))


print_n("안녕하세요", "즐거운", "파이썬")
# 9. 모듈
# 확장자.py는 모두 모듈이다.
# import를 통해서 모듈,라이브러리를 불러온다.
# from 모듈 import 함수or*(*은 함수 전체를 의미)
print("모듈")
import mod1

print(mod1.add(1, 3))
print(mod1.sub(6, 3))

from mod1 import add  # 모듈을 붙이지 않고 함수사용이 가능

print(add(2, 5))

# if __name__=="__main__": ~ <모듈파일에서 사용됨>
# 직접 파일을 실행할 경우 name=main이 되어 if문 내용이 실행됨
# 셸 등에서 실행할 경우 if문 안의 내용은 실행되지 않음
import mod2  # 모듈 파일에 모듈 불러오기

# 다른 디렉터리 모듈 불러오기
import sys

# print(sys.path)  #파이썬 라이브러리 디렉터리 목록
sys.path.append("C:\\Users\\user\\Desktop\\python")
# print(sys.path)  # 디렉터리 이동 없이 모듈을 불러올 수 있음
