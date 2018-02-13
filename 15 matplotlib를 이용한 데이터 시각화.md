01\) 그래프 그리기
=
- 모듈 선언을 해야한다
<pre>
import matplotlib.pyplot as plt
</pre>
- x 범위 없이
<pre>
plt.plot([1,2,3,4])
plt.show()
</pre>
![x 범위 없이](https://wikidocs.net/images/page/4760/r15.01.png)
- x의 범위를 주고
<pre>
x = range(0,100)
y = [v*v for v in x]
plt.plot(x,y)
plt.show()
</pre>
![x의 범위를 주고](https://wikidocs.net/images/page/4760/r15.03.png)
