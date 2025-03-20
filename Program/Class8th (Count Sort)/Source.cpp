#include <iostream>

#define SIZE 10

using namespace std;

int main()
{

#pragma region 계수 정렬
    // 데이터의 값을 비교하지 않고 각 원소에 데이터가
    // 몇 개 있는 지 개수를 세어 저장한 다음 정렬하는 알고리즘입니다.

    int list[SIZE] = { 1,1,3,1,2,3,4,4,2,5 };

    int count[5] = { 0, };

    for (int i = 0; i < SIZE; i++)
    {
        count[list[i] - 1]++;
    }

    for (int i = 0; i < 5; i++)
    {
        if (list[i] != 0)
        {
            for (int j = 0; j < count[i]; j++)
            {
                cout << i + 1 << " ";
            }
        }
    }

#pragma endregion

    return 0;
}