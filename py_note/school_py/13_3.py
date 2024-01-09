#세일 가격 계산
price = int(input("정가를 입력하시오:"))

if price >= 100:
    dis_rate = 0.85
    print("10층에서 사은품을 받아가세요.")
else:
    dis_rate = 0.90
dis_price = price*dis_rate
print("할인된 상품의 가격=",dis_price)