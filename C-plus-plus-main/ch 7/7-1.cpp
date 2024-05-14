#include<iostream>
using namespace std;
 
int count;
 
void function(int num)
{
    int i;
    count = 0;
    for (i=2;i<=num-1;i++)
    {
        if (num % i == 0)
        {
            count ++;
            cout << i << endl;
        }
    }
    if (count==0)
    {
        cout<< "prime number" ;
    }
}
 
int main()
{
    int number;
    cin >> number;   
    function( number );
    return 0;
}
