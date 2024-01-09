def main():
    print("20cm 피자2개의면적:", get_area(20) + get_area(20))
    print("30cm 피자1개의면적:", get_area(30))


## 원의면적을계산한다.
# @paramradius 원의반지름
# @return 원의면적


def get_area(radius):
    if radius > 0:
        area = 3.14 * radius**2
    else:
        area = 0
    return area


main()
