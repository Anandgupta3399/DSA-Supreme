#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;
    //insertion
    // pahla tarika
    pair<string, int> p = make_pair("scorpio", 9);
    m.insert(p);
    //dusra tarika
    pair < string, int> p2("alto", 2);
    m.insert(p2);
    //teesra tarika
    m["fortuner"] = 10;

    //access
    cout << m.at("alto")<< endl;
    cout << m.at("scorpio") << endl;
    cout << m["fortuner"] << endl;

    //search
    cout << m.count("scorpio") << endl;
    cout << m.count("scorp") << endl;

    //find function
    if(m.find("fortuner")!=m.end()){
        cout << "fortuner found" << endl;
    }
    else{
        cout << "fortuner not found" << endl;
    }
    //size
    cout << m.size() << endl;
    cout << m["anand"] << endl;
    cout << m.size() << endl;

    //traverse
    for(auto i:m){
        cout << i.first << "->" << i.second << endl;
    }

    return 0;
}