#include <iostream>
using namespace std;

// ���� ���� �����ϴ� �Լ� (���� ����)
void changeValueByReference(int& x) {
    // x�� ���� ���� (���� ���� �����)
    x = 10;
}

int main() {

    int num = 3;
    cout << "Before changeValueByReference: num = " << num << endl;
    changeValueByReference(num); // ���� ����, num�� ������ �����
    //�����ϱ� ���� num�� �ǹ��ϹǷν�, 3�� ��µȴ�
    cout << "After changeValueByReference: num = " << num << endl;
    //�����Ŀ� num�� �ǹ��ϹǷ�, x�� �������� 10�� ��µȴ�

    return 0;
}