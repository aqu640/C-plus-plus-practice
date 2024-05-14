#include <iostream>
using namespace std;
 
// 來源木棒(A)，輔助木棒(B)，目的木棒(C)
void hanoi(int n, char A, char B, char C) {
    if(n == 1) {
       cout << "Move sheet from " << A << "to" << C << endl;
    }
    else {
        hanoi(n-1, A, C, B); // 將n-1盤子 ⇒ 由(A)移到輔助木棒(B)
        hanoi(1, A, B, C);   // 將最大盤子 ⇒ 由來源木棒(A)移到目的木棒(C)
        hanoi(n-1, B, A, C); // 將還沒到目的盤子中最大者 ⇒ 由新的來源木棒(B)透過新的輔助木棒(A)移到目的木棒(C)
    }
}
 
int main() {
    int n;
    cout << "please input n=" << endl;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
} 