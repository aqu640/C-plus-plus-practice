// �@�~ 8-2 ��J�ǥ� C++ �����ҿ���D�����סA�ûP�зǵ��׹�ӡA�p�⵪��M�������D�ơA�ռ��g�@�{�����椧(�A�i�H���]�D�ئ�>5�D�A�åB�ΰ}�C�x�s�зǵ���)�C
  

// vector�ѦҺ��}:https://www.796t.com/content/1546920554.html
/*
1. ��J����D���ƶq
2. �إ߼зǵ��שM�ǥ͵��ת��}�C
3. ��J�зǵ��׻P�ǥͿ���D������
4. �P�зǵ��׶i����A�p�⵪��M�������D�ơC
5. ��X����M�������D��
���]���ܤ�5�Ӱ��D�A�åB�ϥΰ}�C�Ӧs�x����*/
 
/* �{����J���d��
10
A B C D E A B C D E
A B C E E A C C D F*/
 
#include <iostream>
#include <vector> // �ޤJvector�H�ϥΰʺA�}�C
using namespace std;
 
int main() {
    // ��J����D���ƶq
    int n; // �D�ؼƶq
    cout << "�п�J�D�ت��ƶq�G";
    cin >> n;
 
    // �إ߼зǵ��שM�ǥ͵��ת��}�C
    // vector <A> B;// A �O��Ƶ��c�AB �O�ʺA�}�C�W
    vector<char> answers(n); // �зǵ���
    vector<char> studentAnswers(n); // �ǥ͵���
 
    // ��J�зǵ���
    cout << "�п�J�зǵ��ס]�C�ӵ��ץΪŮ�j�}�^�G";
    for (int i = 0; i < n; i++) {
        cin >> answers[i];
    }
 
    // ��J�ǥ͵���
    cout << "�п�J�ǥ͵��ס]�C�ӵ��ץΪŮ�j�}�^�G";
    for (int i = 0; i < n; i++) {
        cin >> studentAnswers[i];
    }
 
    // ��l�ƭp�⵪��M�������D��
    int correct = 0; // ���諸�D��
    int wrong = 0; // �������D��
 
    for (int i = 0; i < n; i++) { // �ˬd�C�@�D�����׬O�_���T
        if (answers[i] == studentAnswers[i]) { // �p�G�зǵ��שM�ǥ͵��׬ۦP
            correct++; // ����
        } else {
            wrong++; // ����
        }
    }
 
    // ��X����M�������D��
    cout << endl << "���諸�D��: " << correct << endl;
    cout << "�������D��: " << wrong << endl;
 
    return 0; // �����{��
}

