#include <iostream>
#include <algorithm> //�Q�Φ����Y�ɡA�ϥΨ�ƱN�e����m reverse(v.begin(), v.end());
#include<string>
using namespace std; 
 
int main() 
{ 
	string str;
    cin >> str;
    cout<<"the initial state :"<< str << endl; 
    reverse(str.begin(), str.end()); 
	cout<<"after reverse :"<< str; 
    return 0;
}
