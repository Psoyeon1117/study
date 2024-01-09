#배송비 계산
country = input("shipping destination:")
price = int(input("price:"))

#배송비결정
if country == "korea":  #한국
  if price >= 20000:
    shipping_cost = 0
  else:
    shipping_cost = 3000
else:                   #미국
  if price >= 100000:
    shipping_cost = 0
  else:
    shipping_cost = 8000
#배송비 출력
print("shipping=", shipping_cost)
  
