#사용자 입력 검증하기
print("========================")
print("메뉴 1번: 치즈버거")
print("메뉴 2번: 치킨버거")
print("메뉴 3번: 불고기 버거")
print("========================")

selection = int(input("select a menu:"))

if selection >= 1 and selection <=3:
  print("menu", selection)
else:
  print("problem")
