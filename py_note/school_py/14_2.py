# 여러 개의 값 반환
def nameage():
    name = input("이름:")
    age = input("나이:")
    return name, age


st_name, st_age = nameage()
print("이름은 %s이고 나이는 %s살입니다." % (st_name, st_age))
