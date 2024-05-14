/*�N��8��8-4�`�����νd�ҡA
���J�Ƨǧ�H�禡�I�s���覡���g���A
�ڭ̥i�H�N���Ƨǰ}�C�e��insertionSort() ���禡�A
���禡�����ȻP��������ܱƧ� selectionSort() �禡�����C*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
 
#define SIZE 10
 
void insertionSort(int *arr, int size);
void list(int *arr, int size); // ���Ыŧi�����ȡA����~����
 
int main() {
    int ary[SIZE];
    srand(unsigned(time(NULL)));
 
    // �ͦ��H���}�C
    for (int i = 0; i < SIZE; i++)
        ary[i] = rand() % 100 + 1;
 
    // ��ܪ�l�}�C
    std::cout << "Original Array:\n";
    list(ary, SIZE);
 
    // ���J�Ƨ�
    insertionSort(ary, SIZE);
 
    // ��ܱƧǫ᪺�}�C
    std::cout << "\nSorted Array:\n";
    list(ary, SIZE);
 
    return 0;
}
 
void insertionSort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
 
        // ���ʸ��j������
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
 
        // ���J�s������
        arr[j + 1] = temp;
 
        // �L�X�ƧǪ��C�@�B
        std::cout << "#" << i << " step: ";
        list(arr, i + 1); // ��ܤw�ƧǪ�����
    }
}
 
void list(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(4) << arr[i];
    }
    std::cout << std::endl;
}


/* ���J�Ƨǵ{���X 

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
#define SIZE 10

int main()
{
    int ary[SIZE];
    int i,j;
    int temp;

    srand(unsigned(time(NULL)));
    for (i=0; i<SIZE; i++)
        ary[i] = rand() % 100 + 1;
        
    cout << "Original Array ..." << endl;
    for (i=0; i<SIZE; i++) {
        cout << setw(4) << ary[i];
    }
    cout << endl << endl;
    
    //Insertion Sorting
    cout << "sorting..." << endl;
    for (i=1; i<SIZE; i++) {
        temp = ary[i];
        for (j=i; ary[j-1]>=temp; j--)
            ary[j] = ary[j-1];
        ary[j] = temp;

        //�L�X�C�@�B�J
        cout << "#" << i << " step: ";
        for (int k=0; k<=i; k++) {
            cout << setw(4) << ary[k];
        }
        cout << endl;
    }

    cout << "\nSorted Array ..." << endl;
    for (i=0; i<SIZE; i++) {
        cout << setw(4) << ary[i];
    }
    cout << endl;
    
    return 0;
}
*/


/*
�ϥΨ禡���g����ܱƧǰѦҵ{���X�p�U:
//selectionSort.cpp
#include <iostream>
#include <iomanip>
using namespace std;

#define N 10
void list(int *);
void swap(int *, int *);
void selectionSort(int *);

int main()
{
    int i,arr[N];
    srand(unsigned(time(NULL)));
    for (i=0; i<N; i++)
        arr[i] = rand() % 100 + 1;
          
    cout << "\nSource array ...\n";
    list(arr);
       
    selectionSort(arr);
    cout << "Sorting ...\n";
    list(arr);

    return 0;
}

void list(int *array)
{
    int i;
   
    for (i=0; i<N; i++) {
        cout << setw(5) << array[i];
        if (((i+1) % 5) == 0)
            cout << endl;
    }
    cout << endl;
}
     
void swap(int *i, int *j)
{
    int temp;
    
    temp = *i;
    *i = *j;
    *j = temp;
}
    
void selectionSort(int *arr2)
{
    int i, j, min;
     
    for (i=0; i<N; i++) {
        min = i;
        for (j=i; j<N; j++)
            if (arr2[j] < arr2[min])
                min = j;
        swap(&arr2[min], &arr2[i]);
    }
}

*/ 
