01\) 그래프 그리기
=
***
- 모듈 선언
    ```import matplotlib.pyplot as plt```

- x 범위 없는 그래프

```
plt.plot([1,2,3,4])
plt.show()
```

<img src="https://wikidocs.net/images/page/4760/r15.01.png" width="70%">

- x의 범위가 있을 때
```
x = range(0,100)
y = [v*v for v in x]
plt.plot(x,y)
plt.show()
```
<img src="https://wikidocs.net/images/page/4760/r15.03.png" width="70%">
