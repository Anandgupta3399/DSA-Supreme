#include <iostream>
using namespace std;
float printArea(int radius){
    float area=3.14*radius*radius;
    return area;
}
int main(){
float r;
cin>>r;
cout<<"The area of circle is "<<printArea(r);
return 0;
}