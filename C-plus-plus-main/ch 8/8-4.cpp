/*
�@�~8-4
���g�@�{���A��J�@�� 2*3 ���x�}�M�@�� 3*2 ���x�}�A
�M��A�N��ۭ���A��X2*2���x�}�C��B�@�L�{�p�U�G
 
*/ 


/*
2 1 -3
-2 2 4
-1 2
0 -3
2 1*/ 

#include <iostream>  
using namespace std;  
int main()  
{  
    int a[10][10],b[10][10],mul[10][10],i,j,k;    
 
    cout<<"enter the first matrix element=\n";    
    for(i=0;i<2;i++)    //row
    {    
        for(j=0;j<3;j++)    //column
        {    
            cin>>a[i][j];  
        }    
    }    
    cout<<"enter the second matrix element=\n";    
    for(i=0;i<3;i++)    
    {    
        for(j=0;j<2;j++)    
        {    
            cin>>b[i][j];    
        }    
    }    
    cout<<"multiply of the matrix=\n";    
    for(i=0;i<2;i++)    
    {    
        for(j=0;j<2;j++)    
        {    
            mul[i][j]=0;    
            for(k=0;k<3;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }    
 
    //for printing result    
    for(i=0;i<2;i++)    
    {    
        for(j=0;j<2;j++)    
        {    
            cout<<mul[i][j]<<" ";    
        }    
        cout<<"\n";    
    }    
    cout<<"a of the matrix=\n";    
 
    //for printing result   
    for(i=0;i<2;i++)    
    {    
        for(j=0;j<3;j++)    
        {    
            cout<<a[i][j]<<" ";    
        }    
        cout<<"\n";    
    } 
    cout << "b of the matrix=\n";    
 
    //for printing result   
    for(i=0;i<3;i++)    
    {    
        for(j=0;j<2;j++)    
        {    
            cout<<b[i][j]<<" ";    
        }    
        cout<<"\n";    
    } 
    return 0;  
}
