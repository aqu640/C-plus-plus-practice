/*8-5 using set*/

/*
���g�@�� C++ �{���A�H������ 6 �Ӥ��P�����X�A�d��b 1 �� 49 �����C
 
�B�J�G
1. �]�w�üƺؤl�G�ϥ� srand �P time(NULL) �]�w�ؤl�A�T�O�C������ɲ��ͤ��P���üƧǦC�C
2. �إߤ@�ӥΩ�s�x���X���}�C�G�o�˧ڭ̥i�H�ˬd���ͪ����X�O�_���ơC
3. �H�����͸��X�A���ˬd�O�_���ơG�Y���ƫh���s���͡A�_�h�N��[�J�}�C�C
4. ��X���X�G�̧ǦC�X 6 �Ӹ��X�C	*/
 
	/* �i���O�j
	�üƺؤl�]�w�禡srand()�Asrand() ������J�j��
	�[�W srand(time(NULL))�A���C�����ͪ��üƤ��P*/
 
	/*�i���O�j���S�w�d���H����
	���}:https://andyli.tw/random/
	rand() �|���ͤ��� 0 �� RAND_MAX (2147483647) ���������
	rand()%5  //0~4
	rand()%5+1  //1~5
	rand()%(100-60+1)+60 //60~100
	rand()%(R-L+1)+L
	*/
 
    /* �i���O�jset ��l�ƥΪk set ���J�����Ϊk
    ���}: https://shengyu7697.github.io/std-set/
    set �e���̭��������O�ߤ@���A�㦳�����ƪ��S�ʡA�ӥB�O���ƧǪ��e���A
    set �e���̭��������ȬO���i�ק�A�� set �e���i�H���J�ΧR�������A
    set ����@�覡�q�`�O�ά��¾�(red-black tree)��@���C
    std::set<int> myset;
	myset.insert(1);	*/
 
 
#include <iostream>
#include <cstdlib> // �ϥ� <cstdlib> �禡�w����rand()
#include <set>	
#include <ctime> // <ctime>�禡�w��time(NULL)(���o�{�b�ɶ�)�禡�A�ϨC���H���t�⪺��l���P�A�T�O�C�����ͪ��Ʀr���|�P���e���ơC
 
using namespace std;
 
int main() {
 
    // �ϥ�set�ӽT�O���X������
    set<int> lotto_numbers;
    const int MAX_NUMBER = 49;
    const int NUMBERS_TO_GENERATE = 6;
 
	// �]�w�üƺؤl
    srand(time(NULL));
 
    // �H������ 6 �Ӥ��P�����X
    while (lotto_numbers.size() < NUMBERS_TO_GENERATE) {
        int random_number = rand() % MAX_NUMBER + 1; // 1��49����
        lotto_numbers.insert(random_number); // set�۰��קK����
    }
 
    cout << "�j�ֳz���X: ";
 
    //�i���O�jC++ for(int a : b) ���}: https://andyli.tw/range-for/
 
    for (int number : lotto_numbers) {
        cout << number << " ";
    }
    cout << endl;
 
    return 0;
} 
