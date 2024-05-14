#include <iostream>
#include <cmath>
 
using namespace std;
 
void square(int num )
{
    for(int i = 1 ; i <= num ; i ++ )
    {
	    double x = i; // 待求平方根的数
	    double result = sqrt(x); // 求平方根
	    cout << "The square root of " << x << " is " << result <<  " and - " << result << endl;
    }
}
 
int main()
{
	int number;
	cout << "Please enter a positive integer "  << endl;
	cin >> number;
 
	if (number ==0)
		cout << "The square root of " << number << endl;
 
	else if (number <=0)
		cout << "Please enter a positive integer "  << endl;
 
	else
		square( number );
 
	return 0;
}
 
