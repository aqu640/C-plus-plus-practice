#include <iostream>
using namespace std;
/*
Determine whether the input is a multiple of 3, 7, or 10 
*/
 
void multiple(int num)
{
    if(num % 3 == 0 && num % 7 == 0 && num % 10 == 0)
		cout << "num="<< num << "  This number is a multiple of 3, 7 and 10" << endl;
 
	else if(num % 3 == 0 && num % 7 == 0)
		cout << "num="<< num << "  This number is a multiple of 3 and 7" << endl;
 
	else if(num % 7 == 0 && num % 10 == 0)
		cout << "num="<< num << "  This number is a multiple of 7 and 10" << endl;
 
	else if(num % 3 == 0  && num % 10 == 0)
		cout << "num="<< num << "  This number is a multiple of 3 and 10" << endl;
 
 
	else if(num % 3 == 0)
		cout << "num="<< num << "  This number is a multiple of 3" << endl;
 
 
	else if(num % 7 == 0)
		cout << "num="<< num << "  This number is a multiple of 7" << endl;
 
	else if(num % 10 == 0)
		cout << "num="<< num << "  This number is a multiple of 10" << endl;
 
	else 
		cout << "num="<< num << "  This number is not a multiple of 3, 7 or 10" << endl;  
}
 
int main()
{
    int number;
    cin >> number;   
    multiple(number);
    return 0;
}
