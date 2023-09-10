#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // vector < vector<int>>arr;
    // vector<int> a{1, 3, 5};
    // vector<int> b{4, 5,7, 6};
    // vector<int> c{2, 1, 7};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int row = 3;
    int col = 3;

    vector<vector<int>> arr(row, vector<int>(col, -1));

    for (int i = 0; i < arr.size();i++){
        for (int j = 0; j < arr.size();j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

    // int row, col;
    // cout << "Enter the number of rows and columns: ";
    // cin >> row >> col;
    // vector<vector<int>> arr(row, vector<int>(col, -8));
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}