/* �@�~ 8-1 
��w�Ƨǡ]bubble sort�^
�N�۾F����ƨ��ۤ�A
�N�U�C��ƥѤp�ܤj�ƧǤ��A
���]�����Ӹ�Ƥ��O�� 18, 2, 20, 34, 12*/ 

#include <cassert>
#include <cstddef>
#include <iostream>
using namespace std;
 
int main() {
	int A[] = {18, 2, 20, 34, 12}; 
	int i, j, tmp;
	int n = sizeof(A)/sizeof(int);  //sizeof(int) = 4, int ���j�p�O 4 bytes, sizeof(A) = 20, �i�o length of A
	for(i = n-1; i > 0; i--) // �̦h�洫4 ��
	{
	    for(j = 0; j <= i-1; j++)
	    {
	        if( A[j] > A[j+1])
	        {
	            tmp = A [j];
	            A[j] = A[j+1];
	            A[j+1] = tmp;
	        }
	    }
	}
    for (size_t i = 0; i < 5; i++) {
        cout << A[i] << endl;
    }
	return 0;
}



