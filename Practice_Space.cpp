#include <iostream>
using namespace std;

int main() {
    // 1. 정수형 배열 선언
    int numbers[5]; // 정수를 5개 저장할 수 있는 배열

    // 2. 선언과 동시에 초기화
    int initializedNumbers[3] = { 1, 2, 3 }; // 정수 배열을 선언하고 값 초기화

    // 3. 크기를 자동으로 설정
    int autoSizeNumbers[] = { 10, 20, 30, 40 }; // 배열의 크기를 자동으로 결정 (4칸)

    // 4. 실수형 배열 선언
    double decimals[4]; // 실수를 4개 저장할 수 있는 배열

    // 5. 문자형 배열 선언
    char letters[6] = { 'H', 'e', 'l', 'l', 'o', '\0' }; // 문자열을 저장하기 위한 문자 배열

    // 6. 문자열 배열 (C 스타일)
    char word[] = "Hello"; // 문자열을 저장하는 배열, '\0' 자동 추가

    // 7. 논리형 배열
    bool flags[3] = { true, false, true }; // 참/거짓을 저장하는 배열

    // 8. 다차원 배열 (2차원 배열)
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} }; // 2행 3열의 배열 선언

    // 9. 크기가 큰 배열
    long long largeArray[1000]; // 1000개의 데이터를 저장할 수 있는 배열

    // 10. 배열을 모두 0으로 초기화
    int zeroArray[5] = { 0 }; // 첫 번째 값만 0으로 초기화하면 나머지도 0으로 초기화

    return 0;
}