#include <iostream>

using namespace std;

int euclid(int x, int y)
{
    // 1. 두 개의 자연수 x, y가 있습니다.
    //    그리고 x와 y로 나눈 나머지를 R이라고 합니다.

    // 2. R이 0이라면, x와 y의 최대공약수 y가 됩니다.

    // 3. R이 0이아니라면, x와 y의 최대공약수는 y와 R의
    //    최대 공약수와 같기 때문에 x에는 y 그리고 y에는 R
    //    을 대입한 후 1번으로 돌아갑니다.

    if (y == 0)
    {
        return x;
    }
    else
    {
        return euclid(y, x % y);
    }

}

int main()
{

#pragma region 유클리드 호제버
    // 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로
    // 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘입니다.

    cout << euclid(24, 48) << endl;
#pragma endregion



    return 0;
}