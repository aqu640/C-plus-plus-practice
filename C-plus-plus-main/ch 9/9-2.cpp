// Ch9�@�~  
/*
1. �w�q�x�}�A�ÿ�J 9 �Ӽƭȵ� 3x3���x�}�A
2. ���g add �禡�A�N 3x3 �x�}�ǻ��� add �禡�A�C�Ӥ���+ 1 �C
3. �L�X��l�x�}�M�[ 1 �᪺�x�}�C
*/
 
// �w�q�禡�ɡA�����w�q�Ǧ^�ȫ��A�A�ϥ� void ��ܤ��Ǧ^����ƭ�
 
/* ��J�d��
1 2 3 
4 5 6 
7 8 9 */
 
#include <iostream>
using namespace std;
 
// �禡�Ψӹ�ǤJ��3x3�x�}���C�Ӥ����[1
void add(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {     // ��
        for (int j = 0; j < 3; j++) { // �C
            matrix[i][j]++; // �N�����[1
        }
    }
}
 
int main() {
    // �w�q3x3���x�}
    int matrix[3][3];
 
    cout << "�п�J3x3���x�}(9�ӼƦr�A�����J�A�C���J3�ӼƦr):\n";
    // Ū���ϥΪ̿�J���ƾڶ�J�x�}
    for (int i = 0; i < 3; i++) {    
        for (int j = 0; j < 3; j++) {    
            cin >> matrix[i][j]; // Ū���Τ��J
        }    
    }
 
    cout << "��l�x�}�G\n";    
    // �L�X��l�x�}
    for (int i = 0; i < 3; i++) {    
        for (int j = 0; j < 3; j++) {    
            cout << matrix[i][j] << " ";    
        }    
        cout << "\n";    
    }
 
    // �N�x�}�ǻ���add�禡�i��[1�ާ@
    add(matrix);
 
    cout << "\n�[1�᪺�x�}�G\n";    
    // �L�X�[1�᪺�x�}
    for (int i = 0; i < 3; i++) {    
        for (int j = 0; j < 3; j++) {    
            cout << matrix[i][j] << " ";    
        }    
        cout << "\n";    
    }
 
    return 0;
}
