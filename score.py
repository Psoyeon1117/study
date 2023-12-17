import pandas as pd
import numpy as np


def create_rank(rank, t):
    for i in range(1, 6):
        max_scores = np.argmax(t)
        rank[max_scores] = i
        t[max_scores] = 0
    return rank


# pd.options.display.float_format = "{:.1f}".format
col = ["출석점수(10%)", "중간고사(20%)", "기말고사(20%)", "과제점수(30%)", "수시평가(20%)"]
numpy_scores = np.random.uniform(0, 100, size=(5, 5))
# 총점+순위 행렬생성
total_scores = numpy_scores.sum(axis=1)
# scores에서 총점 구해서 넣기
rank = np.zeros((5, 1))
rank = create_rank(rank, total_scores)
# 총점값으로 순위 결정
print(total_scores)
print(rank)
# print(np.concatenate([numpy_scores, total_scores, rank], axis=1))
