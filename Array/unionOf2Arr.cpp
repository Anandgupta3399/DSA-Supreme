#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int UnionOf2ArrWithNoDupl(vector<int> a1, vector<int> a2){
    vector<int> ans;
    for (int i = 0; i < a1.size(); i++)
    {
        ans.push_back(a1[i]);
    }
    for (int i = 0; i < a2.size(); i++)
    {
        ans.push_back(a2[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}



int UnionOf2Arr(vector<int> a1, vector<int> a2)
{
    vector<int> ans;
    for (int i = 0; i < a1.size();i++){
        ans.push_back(a1[i]);
    }
    for (int i = 0; i < a2.size();i++){
        ans.push_back(a2[i]);
    }
    for (int i = 0; i < ans.size();i++){
        cout << ans[i]<<" ";
    }
}

    int  main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
     UnionOf2Arr(arr1, arr2);
     cout << endl;
     UnionOf2ArrWithNoDupl(arr1, arr2);

     return 0;
}