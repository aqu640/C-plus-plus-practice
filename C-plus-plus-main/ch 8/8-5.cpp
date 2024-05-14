/*�@�~ 8-5 
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
    C++11 ����~��
    ���}: https://shengyu7697.github.io/std-set/
    set �e���̭��������O�ߤ@���A�㦳�����ƪ��S�ʡA�ӥB�O���ƧǪ��e���A
    set �e���̭��������ȬO���i�ק�A�� set �e���i�H���J�ΧR�������A
    set ����@�覡�q�`�O�ά��¾�(red-black tree)��@���C
    std::set<int> myset;
	myset.insert(1);	*/
 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int MAX_NUMBER = 49;
    const int NUMBERS_TO_GENERATE = 6;
    int lotto_numbers[NUMBERS_TO_GENERATE] = {0}; // ��l�Ƭ�0

    // �]�w�üƺؤl
    srand(time(NULL));

    // �H������ 6 �Ӥ��P�����X
    int generated_count = 0;
    while (generated_count < NUMBERS_TO_GENERATE) {
        int random_number = rand() % MAX_NUMBER + 1; //1~49
        // �ˬd�O�_����
        bool is_duplicate = false;
        for (int i = 0; i < generated_count; i++) {
            if (lotto_numbers[i] == random_number) {
                is_duplicate = true; // ����
                break;
            }
        }
        // �Y�����ơA�[�J�}�C
        if (!is_duplicate) {
            lotto_numbers[generated_count] = random_number;
            generated_count++;
        }
    }

    cout << "�j�ֳz���X: ";
    
    for (int i = 0; i < NUMBERS_TO_GENERATE; ++i) {
        cout << lotto_numbers[i] << " ";
    }
    return 0;
}
