#include <iostream>

#define SIZE 5

using namespace std;

int main()
{
#pragma region 삽입 정렬
    // 데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여
    // 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘입니다/

    int list[SIZE] = { 9,6,8,1,3 };

    int key = 0;
    int j = 0;

    for (int i = 0; i < SIZE; i++)
    {
        key = list[i];

        for (j = i - 1; j >= 0 && list[j] > key; j--)
        {
            list[j + 1] = list[j];
        }

        list[j + 1] = key;
    }

    for (const int& element : list)
    {
        cout << element << " ";
    }

#pragma endregion


    return 0;
}