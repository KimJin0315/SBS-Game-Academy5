#include <iostream>
#include <vector>

#define SIZE 8

using namespace std;

class Node
{
private:
    bool visited[SIZE];
    vector <int> adjacencyList[SIZE];
public:
    Node()
    {
        for (int i = 0; i < SIZE; i++)
        {
            visited[i] = false;
        }
    }

    void insert(int i, int j)
    {
        adjacencyList[i].push_back(j);
        adjacencyList[j].push_back(i);
    }

    void Search(int start)
    {
        // 현재 노드를 방문한 것으로 표시합니다.
        visited[start] = true;

        // 현재 노드를 출력합니다.
        cout << start << " ";

        // 현재 노드와 연결된 다른 노드를 재귀적으로 방문합니다.
        for (int i = 0; i < adjacencyList[start].size(); i++)
        {
            // 현재 녿와 연결된 다음 노드를 가져옵니다.
            int next = adjacencyList[start][i];

            if (visited[next] == false)
            {
                // 다음 노드가 방문하지 않은 노드라면 'Search' 함수를 호출합니다
                Search(next);
            }
        }
    }

};


int main()
{
#pragma region 깊이 우선 탐색 (Depth First Search)
    // root 노드에서부터 다음 분기로 넘어가기 전에
    // 해당 분기를 완벽하게 탐색하는 방법입니다.

    // 깊이 우선 탐색은 스택을 활용합니다.

    // 1. 시작 노드를 스택에 넣고 방문 처리를 합니다.

    // 2. 스택의 최상단 노드에 방문하지 않은 인접 노드가
    //    있으면 그 노드를 스택에 넣고 방문 처리합니다.

    // 3. 방문하지 않은 인접 노드가 없으면 스택에서 최상단
    //    에 있는 노드를 꺼냅니다.

    // 4. 더 이상 2번의 과정을 수행할 수 업을 때까지 반복합니다.

    Node node;

    node.insert(1, 2);
    node.insert(1, 3);

    node.insert(2, 3);
    node.insert(2, 4);
    node.insert(2, 5);

    node.insert(3, 6);
    node.insert(3, 7);

    node.insert(4, 5);
    node.insert(6, 7);

    node.Search(1);

#pragma endregion


    return 0;
}