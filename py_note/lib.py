#Matplotlib
#그래프나 그림을 그릴 수 있는 라이브러리
import matplotlib.pyplot as plt

#x와y 인덱스로 대응하여 그래프 생성
y1 = [13,16,15,10,18,17]
y2 = [10,17,11,12,16,19]
plt.plot(range(len(y1)),y1)       #plot(x축값, y축값)
plt.plot(range(len(y1)),y2)       #그래프 추가

plt.xlabel("daily")
plt.ylabel("books sold")

plt.legend(loc="upper left")
plt.title("book")
plt.show()
