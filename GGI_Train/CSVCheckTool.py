import pandas as pd

# CSV 파일 읽기
df = pd.read_csv('D:\GGI_GestureGripInterface\GGI_Train\dataset\Sword.csv')  # 파일명을 적절히 변경하세요

# 값이 0을 포함하는 행 찾기
rows_with_zero = df[(df == 0).any(axis=1)]

# 출력 결과를 생략 없이 설정
pd.set_option('display.max_rows', None)
pd.set_option('display.max_columns', None)

# 결과 출력
print(rows_with_zero)