## [���α׷��ӽ� ž ����](https://programmers.co.kr/learn/courses/30/lessons/42588)

�迭�� ������ ���ϴ�. �迭�� ������ �ϳ��� �ڱ⺸�� ���ʿ� �ִ� ���߿� ���� ���� ū ���� �ε����� �����ϸ� �˴ϴ�. ���� �ڱ⺸�� ū�� ���ٸ� 0�� �����ϸ� �˴ϴ�.

> ž.cpp

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