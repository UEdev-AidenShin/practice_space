#include <iostream>
using namespace std;

// 1. 변수 값을 변경하는 함수 (값 전달)
void changeValue(int x) {
    x = 10;
}

int main() {

    int num = 5;
    cout << "Before changeValue: num = " << num << endl;
    // 여기서 넘은 x가 아니라 넘(5)에서 복사된 값이므로 정답은 5다
    changeValue(num);
    cout << "After changeValue: num = " << num << endl;
    // 여기서 넘은 x가 아니라 넘(5)에서 복사된 값이고, 값이 변화될 선언이 없기 때문에 똑같이 5다
    return 0;
}