#include <iostream>

#define SIZE 5

using namespace std;

int main()
{
#pragma region 거품 정렬
    // 서로 인접한 두 원소를 비교하여 정렬하는 알고리즘입니다.

    int list[SIZE] = { 13,8,97,1,36 };

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < (SIZE - i) - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                std::swap(list[j], list[j + 1]);
            }
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << list[i] << " ";
    }

#pragma endregion



    return 0;
}