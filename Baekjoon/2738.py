size = input().split()  #행렬의 사이즈 구하기
N = int(size[0])
M = int(size[1])

if N >100 or M>100: #행렬의 사이즈가 100을 넘길 경우 종료
    quit()

A = []
B = []

def inputNumber(A): #2차원 행렬을 만드는 함수
    for i in range(N):
        A.append([])
        for j in range(M):
            A[i].append(0)
    for k in range(N):
        A[k] = list(map(int, input().split()))
    return A

A = inputNumber(A)
B = inputNumber(B)

def maxFind(A): #행렬의 최대값을 찾는 함수
    maxn=0
    for i in range(N):
        for j in range(M):
            if A[i][j] > maxn:
                maxn = A[i][j]
    return maxn

if maxFind(A) > 100 or maxFind(B) > 100:
    quit()
# 각 행렬의 최대값이 100을 넘길 경우 종료

for i in range(N):
    for j in range(M):
        print(A[i][j]+B[i][j], end= " ")
    print()
# 행렬 덧셈을 수행하는 부분

