#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    // person(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }
};
class student : public person{
    public:
    int rollno;
    void getinfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"rollno:"<<rollno<<endl;
    }
};
int main(){
    student s1;
    s1.name="devraj soni";
    s1.age=20;
    s1.rollno=202451050;
    s1.getinfo();
    return 0;
}
//encapsulation=wrapping up of data & member functions in a single unit called class
//abstraction
//inheritance=when properties and member function of base class are passed on the derived class(code reusability)
//polymorphism