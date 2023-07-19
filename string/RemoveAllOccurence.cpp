#include <iostream>
using namespace std;

string RemoveAllOccurence(string s, string part){
    int pos =s.find(part);
    while(pos!=string::npos){
        s.erase(pos,part.length());
        pos=s.find(part);
    }
    return s;
}
int main(){

return 0;
}