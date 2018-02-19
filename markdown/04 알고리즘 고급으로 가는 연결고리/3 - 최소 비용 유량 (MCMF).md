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
>- 서점 / 사람
>- MCMF 문제
>- capacity : infinity
>- cost : 택배비
>- 방법 1: Cycle Canceling
>    - Cycle이 있을 때 사용 가능(여기선 사용 불가능)
>- 방법 2: Successive Shortest Path Algorithm
>    - SPFA, Dijkstra나 Bellman Ford를 이용해서 푼다.
>    - cost가 음수가 될 수 있기 때문에 Bellman Ford, SPFA를 이용한다.

>[책 구매하기2_11406](http://icpc.me/11406)
>- 사람 i가 서점 j에서 구매할 수 있는 책의 개수가 제한이 되어있다.

>[책 구매하기3_11407](http://icpc.me/11407)

>[열혈강호5_11408](http://icpc.me/11408)
>- 월급까지 고려한 문제.
>- 최소 월급 구하기.
>- 일의 최댓값을 구하고 비용의 최솟값을 구한다.

>[열혈강호6_11409](http://icpc.me/11409)
>- 일을 최대한 많이 시키고 월급의 최댓값을 구하는 문제.
>- 최대 비용은 비용에 -1을 곱해서 구할 수 있다.
>- 최솟값을 구한 다음 다시 -1을 곱하면 최댓값이 나온다.

---
## 02 문제 풀기 1

>[선발명단_3980](http://icpc.me/3980)
>- 선수를 포지션에 할당하는 문제.
>- 한 포지션에 한 명의 선수.
>- 한 선수는 한 포지션.
>- 능력치 합의 최댓값 구하기.
>- 선수 / 포지션
>- capacity = 1
>- 최댓값 구하기이기 때문에 cost를 -능력치로 두고 푼다.

>[최고의 팀 만들기_1633](http://icpc.me/1633)
>- 흑팀 백팀으로 나누고 사람으로 향하게 한다.
>- capacity = 사람의 수
>- cost = 능력치로
>- source → 흑/백팀 capacity = 15 cost = 0
>- 팀 → 사람 i번 사람의 - 능력치
>- 사람 → sink capacity = 1 cost = 0

>[풍선_4716](http://icpc.me/4716)
>- 받는 풍선의 개수 k[i]
>- 방 A, B 와의 거리 dA[i], dB[i]
>- cap = 풍선의 개수
>- cost = 거리
>- 최대한 많은 풍선을 배달할 때 거리 합의 최솟값을

>[경찰_1585](http://icpc.me/1585)
>- 최대 구할땐 벌금에 -를 붙인다.

>[왕복여행_2311](http://icpc.me/2311)
>- 1 → N 으로 가는 경로 두개를 찾는 것과 같다.
>- source → 1의 cap = 2, N → sink의 cap = 2

>[제독_3640](http://icpc.me/3640)
>- 정점도 1번 사용 가능 하면 정점도 나눈다.
>- 정점 V를 V_in V_out으로 바꾼다.
>- 1과 V 정점을 나눈 cap = 2 로 해야한다.
>- 정점의 cost = 0

---
## 03 문제 풀기 2

>[Concert Hall Scheduling_3938](http://icpc.me/3938)
>- 1방 1일에 콘서트 1개
>- i~j일 예약 가능, 기간 동안 같은 방을 사용 해야한다.
>- 365일간의 예약 목록이 있을 때 최대 이익 구하기
>- cap = 방, cost = 이익.
>- i → j+1 을 이어야한다.

>[Crazy Bits_6267](http://icpc.me/6267)
>- 항상 1과 0을 바꿔야 의미 있는 교환.
>- 1을 순서대로 1, 2, 3 으로 정해서 거리를 cost로 해서 최솟값을 구한다.
>- 불가능한 경우 왼쪽 1의 갯수와 오른쪽 1의 갯수가 다를 때.

>[Job Postings_7154](http://icpc.me/7154)
>- source → 학생 cap = 1
>- 알바 → sink cap = 몇명 뽑는지

>[제주도 관광_9413](http://icpc.me/9413)

>[칙칙폭폭_11410](http://icpc.me/11410)
>- 기차의 최대 수익 구하기.
>- 탈 수 없는 사람도 고려해야 한다.
>- sink에서 나간 양
>- pdf 보고 그려보기.

>[Train Tickets_11122](http://icpc.me/11122)
>- 칙칙폭폭 문제에 공무원의 수가 추가됨.
>- capacity에서 공무원의 수를 빼주고 계산한다.

>[Catering_10786](http://icpc.me/10786)
