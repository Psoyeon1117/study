import numpy as np
import pandas as pd


print("Numpy")
#Numpy
#행렬계산, n차원 배열을 다룬다.

#np.arange(start,stop,step) #배열 생성 함
a = np.array([1,2,3,4])
b = np.array([5,6,7,8])
result = a + b              #'+' 연산이 적용
print(result)

#2차원 배열
c = np.array([[1,2,3],[4,5,6],[7,8,9]])
print("2차원배열:",c)

print("\n")
#주요 함수 정리
zero = np.zeros((3,3), dtype=int)   #배열 생성+0초기화
print("0배열:",zero)
x = np.array([1,3,5,7,9,11])         
print("평균:",x.mean())               #배열원소들의 평균값
print("shape:",x.shape)                #shape값 반환
print("배열모양설정:", x.reshape(3,2))         #배열을 원하는 모양으로 생성
print("슬라이싱:",c[:,1])                 #슬라이싱[a:b:c(=행),d:e:f(=열)]
i = [1,3,5]
print("리스트 인덱싱:",x[i])                   #리스트 인덱싱
random_ary = np.random.random(3)            #랜덤 배열
print("랜덤배열:",random_ary)
linspace_ary = np.linspace(0,12,3)          #일정간격으로 배열 만들기
print("일정간격:",linspace_ary)

print("\n","========Pandas========")
#Pandas
#1.시리즈, Series
#1차원 배열, 복수의 행&하나의 열
p_series = pd.Series([7,3,5,8], index=['one','two','three','four'])
print("series:",p_series)
print(p_series['two'])

#2.데이터 프레임, DataFrame
#2차원 배열, 복수의 행과 열
data = {
    'age': [23,43,12,45],
    'name': ['민','현','서','동'],
    'height': [175,180,165,172]
}
x_data = pd.DataFrame(data, index=['1번','2번','3번','4번'],columns=['name','age','height'])
print(x_data)
print(x_data.iloc[1,1])         #인덱싱 .iloc[행,열]
print(x_data.head(2))           #입력 만큼의 행 출력


