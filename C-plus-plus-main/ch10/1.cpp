// C++ program for the above approach
// �u�j��v�C������O���˥��۩��M�ϵ۩����ۦP���y�l�A�e���١A�Ҧp�u�W���ۨӤ��Ӧۮ��W�v�C�^����O�����۬ݩM�ϵ۬ݳ��ۦP����r�A�Ҧp�u madam �v�C
//  reverse() function 
#include <bits/stdc++.h>
using namespace std;
 
// Function to check whether the string is palindrome
string isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return "Yes";
    }
    // Otherwise
    else {
        // return "No"
        return "No";
    }
}
 
// Driver Code
int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);
 
    return 0;
}
