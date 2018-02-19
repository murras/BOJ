# Chapter 3 최소 비용 유량(MCMF)

---
## 01 MCMF(p.1)

#### Minimum Cost (Maximum) Flow

- capacity(용량)과 cost(비용)이 공존할 때 쓴다.
- cost : flow 1 단위 당 비용
즉 총 비용은
$$\frac{1}{2}\sum cost(u,v) * flow(u,v)$$

- `flow(u,v) = -flow(v,u)`
`cost(u,v) = -cost(v,u)`
- 최대 유량 중에서 최소 비용을 찾을 때 사용한다.
- 최소 비용 유량 문제에서 cost가 0이면 최대 유량 문제와 같다.
capacity 제한이 사라지면 최단 거리 문제와 같다.
>[책 구매하기_11405](http://icpc.me/11405)
서점 / 사람
MCMF 문제
capacity : infinity
cost : 택배비
>방법 1: Cycle Canceling
>- Cycle이 있을 때 사용 가능(여기선 사용 불가능)
>방법 2: Successive Shortest Path Algorithm
>- SPFA, Dijkstra나 Bellman Ford를 이용해서 푼다.
cost가 음수가 될 수 있기 때문에 Bellman Ford, SPFA를 이용한다.

>[책 구매하기2_11406](http://icpc.me/11406)
사람 i가 서점 j에서 구매할 수 있는 책의 개수가 제한이 되어있다.

>[책 구매하기3_11407](http://icpc.me/11407)

>[열혈강호5_11408](http://icpc.me/11408)
월급까지 고려한 문제.
최소 월급 구하기.
일의 최댓값을 구하고 비용의 최솟값을 구한다.

>[열혈강호6_11409](http://icpc.me/11409)
일을 최대한 많이 시키고 월급의 최댓값을 구하는 문제.
최대 비용은 비용에 -1을 곱해서 구할 수 있다.
최솟값을 구한 다음 다시 -1을 곱하면 최댓값이 나온다.
---
## 02 문제 풀기 1
