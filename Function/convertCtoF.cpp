#include <iostream>
using namespace std;

float toFarenheit(float c){
     float ans = (9.0/5)*c + 32;
     return ans;
}
int main(){

float celsius;
cin>>celsius;
cout<<toFarenheit(celsius);

return 0;
}