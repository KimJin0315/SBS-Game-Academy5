#include <iostream>

#define SIZE 5

using namespace std;

int main()
{
#pragma region 삽입 정렬
    // 데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여
    // 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘입니다/

    int list[SIZE] = { 9,6,8,1,3 };

    for (int i = 0; i < SIZE - 1; i++)
    {
        int key = list[i + 1];

        for (int j = 0; j < SIZE - 1; j++)
        {
            if (key < list[j])
            {
                list[j + 1] = list[j];
                list[j] = key;
            }
            else if (key > list[j])
            {
                
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