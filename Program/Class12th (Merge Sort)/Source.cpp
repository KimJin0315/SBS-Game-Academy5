﻿#include <iostream>

#define SIZE 8

using namespace std;

void combine(int list[], int start, int middle, int end)
{
    int count = 0;
    int left = start;
    int right = middle + 1;

    int* container = new int[end - start + 1];

    // 두 부분의 배열을 병합합니다.

    while (left <= middle && right <= end)
    {
        if (list[left] <= list[right])
        {
            container[count++] = list[left++];
        }
        else
        {
            container[count++] = list[right++];
        }
    }

    // 남은 왼쪽 배열의 요소들을 복사합니다.
    while (right <= end)
    {
        container[count++] = list[left++];
    }

    // 남은 오른쪽 배열의 요소들을 복사합니다.
    while (left <= middle)
    {
        container[count++] = list[right++];
    }

    // 원본 배열에 정렬된 임시 배열의 값을 복사합니다.
    for (int i = 0; i < end - start; i++)
    {
        list[start + i] = container[i];
    }

    delete[] container;

}

void merge_sort(int list[], int start, int end)
{
    if (start < end)
    {
        int middle = (start + end) / 2;

        merge_sort(list, start, middle);
        merge_sort(list, middle + 1, end);

        combine(list, start, middle, end);
    }
}

int main()
{
#pragma region 병합 정렬
    // 하나의 리스트를 두 개의 균일한 크기로 분할하고 분할된
    // 부분 리스트를 정렬한 다음,  두 개의 정렬된 부분 리스트를
    // 합하여 전체가 정렬된 리스트가 되게 하는 방법입니다.

    // 1. 리스트의 길이가 0 또는 1이면 이미 정렬된 것으로 봅니다.

    // 2. 그렇지 않은 경우

    // 2-1. 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의
    //      두 부분 리스트로 나눕니다.

    // 2-2. 각 부분 리스트를 재귀적으로 병합 정렬을 이용하여 정렬합니다.

    // 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합합니다.

    int list[SIZE] = { 3,5,2,7,4,1,8,6 };

    merge_sort(list, 0, SIZE - 1);

    for (const int& element : list)
    {
        cout << element << " ";
    }


#pragma endregion



    return 0;
}