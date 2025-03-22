#include <iostream>

#define SIZE 8

using namespace std;

void binary_serch(int list[], int key)
{
    int left = 0;
    int right = SIZE - 1;

    while (left <= right)
    {
        int pivot = (left + right) / 2;

        if (list[pivot] == key)
        {
            cout << "Key Found : " << list[pivot] << endl;

            return;
        }
        else if (list[pivot] > key)
        {
            right = pivot - 1;
        }
        else
        {
            left = pivot + 1;
        }
    }

    cout << "Not Key Found" << endl;
}

int main()
{
#pragma region 이진 탐색
    // 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
    // 좁혀나가는 방식으로 동작하는 알고리즘입니다.

    int list[SIZE] = { 5,6,11,13,27,55,66,99 };

    binary_serch(list, 100);
#pragma endregion



    return 0;
}