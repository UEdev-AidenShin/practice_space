#include <iostream>
using namespace std;

// 1. ���� ���� �����ϴ� �Լ� (�� ����)
void changeValue(int x) {
    x = 10;
}

int main() {

    int num = 5;
    cout << "Before changeValue: num = " << num << endl;
    // ���⼭ ���� x�� �ƴ϶� ��(5)���� ����� ���̹Ƿ� ������ 5��
    changeValue(num);
    cout << "After changeValue: num = " << num << endl;
    // ���⼭ ���� x�� �ƴ϶� ��(5)���� ����� ���̰�, ���� ��ȭ�� ������ ���� ������ �Ȱ��� 5��
    return 0;
}