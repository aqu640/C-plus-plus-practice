#include <iostream>
using namespace std;
/*
輸入 x, y，求 F函式的值。
F(x, y) = x-y; if x < 0或y < 0
F(x, y) = F(x-1, y)+F(x, y-1); others
*/
double F(double x, double y)
{
	double result;
	if ( x < 0  || y < 0)
		
	    result = x-y; 
	    return result;
}

 
int main()
{
	double x, y;
	cout << "Please enter x and y "  << endl;
	cin >> x >> y;
	cout << "	F(x, y) = " << F( x, y) << endl;

	if ( x < 0  || y < 0)
		F( x, y);
 
	else
		F(x-1, y)+F(x, y-1);
 
	return 0;
}