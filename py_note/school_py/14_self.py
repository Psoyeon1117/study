#주급 계산기
def weeklypay(rate, hour):  #주급 계산 함수
    money = 0
    if hour > 30:
        money = 30*rate + (hour - 30)*1.5*rate
    else:
        money = hour*rate
    return money

m_rate = int(input("시급을 입력하시오:")) 
m_hour = int(input("근무 시간을 입력하시오:")) 
print("주급은" + str(weeklypay(m_rate,m_hour)))