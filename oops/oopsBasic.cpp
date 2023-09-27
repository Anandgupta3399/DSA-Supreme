#include <iostream>
using namespace std;

class Animal{
private:
int weight;
    //state property
    public:
    int age;
    string type;

//constructor initialise krne k liye hota hai
     //default constructor
    // Animal(){
    //     this -> weight = 0;
    //     this->age = 0;
    //     this->type = "";

    //     cout << "constructor called:" << endl;
    // }

    // //parameterize constructor
    //  Animal(int age){
    //     this->age = age;
    //     cout << "parameterize constructor called:" << endl;
    //  }

    //  // parameterize constructor
    //  Animal(int age,int weight)
    //  {
    //     this->age = age;
    //     this->weight = weight;
    //     cout << "parameterize2 constructor called:" << endl;
    //  }

    //  Animal(int age, int weight,string type)
    //  {
    //     this->age = age;
    //     this->weight = weight;
    //     this->type = type;
    //     cout << "parameterize3 constructor called:" << endl;
    //  }

    //  ///copy constructor
    //  Animal(Animal& obj){
    //     this->age = obj.age;
    //     this->weight = obj.weight;
    //     this->type = obj.type;
    //     cout << "I am inside copy constructor:" << endl;
    //  }

     //destructor

     ~Animal(){
        cout << "I am inside Destructor:" << endl;
     }

    // behaviour
    void eat()
    {
        cout << "eating:" << endl;
   }
   void sleep(){
       cout << "sleeping:" << endl;
   }

   //set and get se private member access hota hai
       //this keyword 
   int getWeight(){
       return weight;
   }
   void setWeight(int weight){
       this->weight = weight;
   }

   void print(){
       cout << this->age <<" "<<this->weight<<" " << this->type<< endl;
   }

};


////size check

// class Animal{
//     int age;
//     int weight;
//     char name;
// };


int main(){

    // object creation


  // //static
//    Animal ramesh;
//    ramesh.age = 12;
//    ramesh.type = "LiON";

//    cout << "age of Ramesh is: " << ramesh.age<<endl;
//    cout << "age of Ramesh is: " << ramesh.type<<endl;

//    ramesh.eat();
//    ramesh.sleep();

//    ramesh.setWeight(101);
//    cout << "weight: " << ramesh.getWeight();

//    // dynamic
//    Animal *suresh = new Animal;
//    (*suresh).age = 15;
//    (*suresh).type ="anand";
//    //alternate dynamic
//    suresh->age = 17;
//    suresh->type = "anand";

//    suresh->eat();
//    suresh->sleep();
//    suresh->setWeight(103);
//    cout << "Weight:" << suresh->getWeight();

//    Animal a(10);
//    Animal *b = new Animal(100,300,"anand");

//    //object copy
//    Animal c = a;

//    Animal a;
//    a.age = 20;
//    a.setWeight(27);
//    a.type = "anand";

//   Animal b = a;
//   a.print();
//   b.print();


//for Destructor call
   cout << "a object creation:" << endl;
   Animal a;
   a.age = 12;
   cout << "b object creation:" << endl;

   Animal *b = new Animal;
   b->age = 25;
   //manually
   delete b;

   // cout << "size of empty class is: " << sizeof(Animal)<<endl;
   return 0;
}