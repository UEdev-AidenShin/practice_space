#include <iostream>
using namespace std;

int main() {
    // 1. 정수형 배열 선언 및 연산
    int numbers[3] = { 10, 20, 30 }; // 정수형 배열 선언
    int intSum = numbers[0] + numbers[1] + numbers[2]; // 배열의 합 계산
    numbers[1] = 50; // 두 번째 원소를 50으로 수정
    cout << "정수 배열의 합: " << intSum << endl;
    //즉 여기서의 값은 잇섬 기준으로 값을 출력했기에 답은 60이 나온다
    cout << "수정된 정수 배열: " << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << endl;
    //하지만 여기선 잇섬이 아니라 넘버값으로 출력을 했기때문에 수정된 값으로 출력된다

    // 2. 실수형 배열 선언 및 연산
    double decimals[3] = { 1.1, 2.2, 3.3 }; // 실수형 배열 선언
    double doubleSum = decimals[0] + decimals[1] + decimals[2]; // 배열의 합 계산
    decimals[2] = 5.5; // 세 번째 원소를 5.5로 수정
    cout << "실수 배열의 합: " << doubleSum << endl;
    //즉 여기서도 결국엔 더블섬을 구했기 때문에 답은 6.6이 된다
    cout << "수정된 실수 배열: " << decimals[0] << ", " << decimals[1] << ", " << decimals[2] << endl;
    //하지만 여기선 더블섬이 아닌 개인의 데시멀을 구했기 때문에, 수정된 데시멀로 출력이 된다

    // 3. 문자형 배열 선언 및 연산
    char letters[3] = { 'A', 'B', 'C' }; // 문자형 배열 선언
    letters[1] = 'Z'; // 두 번째 원소를 'Z'로 수정
    cout << "문자 배열: " << letters[0] << ", " << letters[1] << ", " << letters[2] << endl;
    //여기선 뭐 그냥 수정된 값으로 출력된다

    return 0;
}