// C++ program to convert a decimal number to binary number 
// �Q�i����G�i��
// 17 
 
#include <iostream>
using namespace std;
 
// function to convert decimal to binary
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // ��n �㰣�ɡA�ഫ���G�i��|�O1�A���㰣�|�O0
        binaryNum[i] = n % 2;
        // cout << "i=" << i << endl;
        // cout << "binaryNum[i]=" << n % 2 << endl;
        // cout << "n=" << n << endl;
        n = n / 2;
        // cout << "n / 2=" << n << endl;
 
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
 
int main()
{
    int n ;
	cin >> n ;
    decToBinary(n);
    return 0;
}

