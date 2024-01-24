A = []

def inputNumber(A): #2차원 행렬을 만드는 함수
    for i in range(9):
        A.append([])
        for j in range(9):
            A[i].append(0)
    for k in range(9):
        A[k] = list(map(int, input().split()))
        if max(A[k]) > 100: #행렬의 최대값이 100을 넘길 경우 종료
            quit()
    return A

A = inputNumber(A)

def maxFind(A): #행렬의 최대값을 찾는 함수
    maxn=0
    max_x = 0
    max_y = 0
    for i in range(9):
        for j in range(9):
            if A[i][j] > maxn:
                maxn = A[i][j]
                max_x = j
                max_y = i
    print(maxn)
    print(max_y+1, max_x+1)

maxFind(A)
