/* �@�~ 8-3 ���g�@�{���A
��J�G�� 3*3 ���x�}�A�M��A�N��ۥ[��A��X3*3���x�}�C��B�@�L�{�p�U�G 
*/
 
/* �Ѧҿ�J 
3
3
1 2 3
4 5 6 
7 8 9
11 12 13
14 15 16 
17 18 19 
*/
#include <iostream>  
using namespace std;  
int main()  
{  
    int a[10][10],b[10][10],add[10][10],r,c,i,j,k;    
    cout<<"enter the number of row=";    
    cin>>r;    
    cout<<"enter the number of column=";    
    cin>>c;    
    cout<<"enter the first matrix element=\n";    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            cin>>a[i][j];  
        }    
    }    
    cout<<"enter the second matrix element=\n";    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            cin>>b[i][j];    
        }    
    }    
    cout<<"multiply of the matrix=\n";    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            add[i][j]=a[i][j]+b[i][j];    
 
        }    
    }    
    //for printing result    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            cout<<add[i][j]<<" ";    
        }    
        cout<<"\n";    
    }    
    return 0;  
}

