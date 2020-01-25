## [프로그래머스 탑 문제](https://programmers.co.kr/learn/courses/30/lessons/42588)

배열의 끝부터 봅니다. 배열의 끝부터 하나씩 자기보다 왼쪽에 있는 것중에 값이 보다 큰 곳의 인덱스를 저장하면 됩니다. 만약 자기보다 큰게 없다면 0을 저장하면 됩니다.

> 탑.cpp

```cpp
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
    int heights_size = heights.size();
    vector<int> answer(heights_size, 0);
    
    for(int i=heights_size-1 ; i>=0; --i)
    {
        int iter = i;
        while(iter--) 
        {
            if(heights[iter] > heights[i])
            {
                answer[i] = iter+1;
                break;
            }
        }
    }
    return answer;
}
```