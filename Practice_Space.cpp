#include <iostream>
using namespace std;

//  배열 값을 변경하는 함수
void changeArray(int arr[], int size) {
    // 첫 번째 요소를 변경
    arr[0] = 42;
}

int main() {
    // 배열 예제
    int arr[3] = { 1, 2, 3 };
    cout << "Before changeArray: arr[0] = " << arr[0] << endl;
    //0의 위치가 1이고, 바뀌지 않는다는 조건이 있으니 답은 1
    changeArray(arr, 3); // 배열은 참조처럼 전달되므로 원본이 변경됨
    cout << "After changeArray: arr[0] = " << arr[0] << endl;
    //3의 위치가 3이지만, 바뀐다는 조건이 생겼으니 42로 출력한다

    return 0;
}