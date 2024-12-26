#include <iostream>
using namespace std;

// 변수 값을 변경하는 함수 (참조 전달)
void changeValueByReference(int& x) {
    // x의 값을 변경 (원본 변수 변경됨)
    x = 10;
}

int main() {

    int num = 3;
    cout << "Before changeValueByReference: num = " << num << endl;
    changeValueByReference(num); // 참조 전달, num의 원본이 변경됨
    //참조하기 전의 num을 의미하므로써, 3이 출력된다
    cout << "After changeValueByReference: num = " << num << endl;
    //참조후에 num을 의미하므로, x의 참조값인 10이 출력된다

    return 0;
}