// C++ program to convert binary to decimal �G�i���Q�i��
/*
��J�G 111
��X�G 7    (1*1 + 1*2 + 1*4)
��J�G 1010
��X�G 10
��J�G 100001
��X�G 33
*/
#include <iostream>
using namespace std;
 
// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
 
    	// cout << "last_digit=" << last_digit << endl;
        temp = temp / 10;
		// cout << "temp=" << temp << endl;
 
        dec_value += last_digit * base;
 
    	// cout << "base=" << base << endl;
 		// cout << "dec_value = base*last_digit = " << dec_value << endl;
 
        base = base * 2;
    }
 
    return dec_value;
}
 
int main()
{
    int num ;
	cin >> num ;
    cout << binaryToDecimal(num) << endl;
}
 
