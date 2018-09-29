#include <iostream>
#include <vector>
using namespace std;

int parent[10001];
pair<int,int> nodes[10001];
vector<vector<int>> levels(10001);
int root;
int breadth;
int height;
int ans = 1;
int diff = 1;

void find_root(int node) {
  if(parent[node]) find_root(parent[node]);
  else root = node;
}

void traverse(int node, int level) {

	// 높이 갱신
  if(height < level)
    height = level;
	
	// 리프일 경우 위치 갱신하고 종료
  if(nodes[node].first == -1 && nodes[node].second == -1) {
    breadth++;
    levels[level].push_back(breadth);
    return;
  }

	// 중위순회 스타트
  if(nodes[node].first != -1)
    traverse(nodes[node].first, level+1);

  breadth++;
  levels[level].push_back(breadth);

  if(nodes[node].second != -1)
    traverse(nodes[node].second, level+1);

}

int main() {
  int n;
  cin >> n;

  for (int i=0; i<n; ++i) {
    int node, l, r;

    cin >> node >> l >> r;

    nodes[node] = {l, r};

    if(l != -1)
      parent[l] = node;

    if(r != -1)
      parent[r] = node;
  }

	// 무작위로 조져서 루트 찾는다
  find_root(1);

	// 중위순회 스타트
  traverse(root, 1);

	// 높이별로 순회하면서 조진다
  for(int i=1; i<=height; ++i)
    if(levels[i].size() > 0 &&
       diff < levels[i].back() - levels[i].front() ) // +1
      diff = levels[i].back()-levels[i].front()+1, ans = i;

  cout << ans << " " << diff;

  return 0;
}