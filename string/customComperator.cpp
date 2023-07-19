#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(char first,char last){
    return first>last;

}

bool compare(int a,int b){
    return a<b;
}
int main(){
string s="babbar";
sort(s.begin(),s.end(),cmp);

vector<int>v{5,4,3,2,1};
sort(v.begin(),v.end(),compare);
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}