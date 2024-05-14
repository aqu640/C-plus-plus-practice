#include <iostream>
using namespace std;
/*
* ISBN-13�O�ѧO�ϮѪ��s�зǡC
* ���ϥ� 13 ��Ʀr d1d2d3d4d5d6d7d8d9d10d11d12d13�C �̫�@�� d13 �O�ˬd�X�A
 
  * �ϥΥH�U�����q��L�Ʀr�p��o�X�G
 
  * 10-(d1 +3d2 +d3 +3d4 +d5 +3d6 +d7 +3d8 +d9 +3d10 +d11 +3d12)%10
 
  * �p�G����M�� 10�A�h�N������� 0�C
* 10-(d1 +3d2 +d3 +3d4 +d5 +3d6 +d7 +3d8 +d9 +3d10 +d11 +3d12)%10
*/
int main() {
    string input;
    cout << "�п�J�e�E�ӼƦr�G";
    cin >> input;
 
    // �ˬd��J�O�_����
    if (input.length() != 9) {
        cout << "�L�Ŀ�J" << endl;
        return 0;
    }
 
    int checkSum = 0;
    for (int i = 0; i < input.length(); i++) {
        if ((i + 1) % 2 == 0) {
            checkSum += (input[i] - '0') * 3;
        } else {
            checkSum += input[i] - '0';
        }
    }
 
    checkSum %= 10;
    checkSum = 10 - checkSum;
    if (checkSum == 10) 
		input = '0';
    else 
    {
    	input += to_string(checkSum);
	}

 
    // ��ܵ��G
    cout << "ISBN-13 �X���G" << input << endl;
 
    return 0;
}

