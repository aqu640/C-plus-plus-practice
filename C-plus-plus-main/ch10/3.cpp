/*
input:
aaaaaaaa�O�L�ıK�X
ab�O�L�ıK�X
777123456�O���ıK�X
7.123456�O�L�ıK�X
7123�O�L�ıK�X
*/
 
 
#include <iostream>
#include <cctype> // �ϥ� isalnum�Bisdigit
using namespace std;
 
bool isValidPassword(const string& password) {
    int length = password.length();
    int numCount = 0;
 
    // �ˬd�K�X���׬O�_�j�󵥩�8�Ӧr��
    if (length < 8) {
        return false;
    }
 
	//�Ϊk���}:https://blog.csdn.net/weixin_41162823/article/details/80172379
    // isalnum �ˬd�O�_�u�]�t�^��r���M�Ʀr
    for (char c : password) {
        if (!isalnum(c)) {
            return false;
        }
        //https://blog.csdn.net/qq_16488989/article/details/120156135?spm=1001.2101.3001.6650.3&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-3-120156135-blog-80172379.235%5Ev43%5Epc_blog_bottom_relevance_base3&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-3-120156135-blog-80172379.235%5Ev43%5Epc_blog_bottom_relevance_base3&utm_relevant_index=4
        // �˴��O�_�O 0~9 �Q�i��Ʀr
        if (isdigit(c)) {
            numCount++;      // �p��Ʀr���Ӽ�
        }
    }
 
    // �ˬd�Ʀr�ӼƬO�_�ܤ֬����
    if (numCount < 2) {
        return false;
    }
    return true;
}
 
int main() {
    string password;
    cout << "�п�J�K�X�G";
    cin >> password;
 
    if (isValidPassword(password)) {
        cout << password << "�O���ıK�X" << endl;
    } else {
        cout << password << "�O�L�ıK�X" << endl;
    }
 
    return 0;
}

