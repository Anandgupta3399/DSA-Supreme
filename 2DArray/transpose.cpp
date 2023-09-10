#include <iostream>
using namespace std;
void TransposeArr(int arr[][3], int row, int col, int transposeArr[][3])
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArr(int arr[][3], int row, int col)
{
    cout << "print arr:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
   }

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    int transpose[3][3];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    printArr(arr,row, col);
    TransposeArr(arr, row, col, transpose);
    printArr(transpose , row, col);
}