#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    int result;
    if(X>=Y) {
        result = X + Y + (Y/10);
    } else {
        result = X + Y + (X/10);
    }
    cout << result;
    return 0;
}
/*
 * 처음부터 적은수/10 만큼을 더해서 미리 주면 되겠네
 * 그러면 빼고 더하고를 반복하면서 생기는 손실이 없어짐
 * 예를 들면
 * 123456에 1234를 미리 더해서 햇빛을 주는 거야
 * 그러면 첫 단계에는
 * 124690 0 이 되고
 * 12345만큼 물을 주게 되면
 * 124690-1234=123456 12345 로 바로 답이 나옴
 */
