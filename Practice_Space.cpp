#include <iostream>
using namespace std;

//  �迭 ���� �����ϴ� �Լ�
void changeArray(int arr[], int size) {
    // ù ��° ��Ҹ� ����
    arr[0] = 42;
}

int main() {
    // �迭 ����
    int arr[3] = { 1, 2, 3 };
    cout << "Before changeArray: arr[0] = " << arr[0] << endl;
    //0�� ��ġ�� 1�̰�, �ٲ��� �ʴ´ٴ� ������ ������ ���� 1
    changeArray(arr, 3); // �迭�� ����ó�� ���޵ǹǷ� ������ �����
    cout << "After changeArray: arr[0] = " << arr[0] << endl;
    //3�� ��ġ�� 3������, �ٲ�ٴ� ������ �������� 42�� ����Ѵ�

    return 0;
}