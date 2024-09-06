
#include <iostream>
#include <string>
using namespace std;

class People{
private:
    string name;
    int age;
public:
    //default constructor no parameters
    int socialmediafollowing;
    People(){
        name = "unknown";
        age= -1;
    }

    //parametarized constructo
    People(string nm, int yrs = 0)
    {
        name = nm;
        age = yrs;
    }

    //constructor with just the name
  

    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }

    void print(){
        cout<<name<<" "<<age<<endl;
    }
};



int main(){
    People p1("Adham", 19);
    p1.print();

    People p2;
    p2.setName("Johny");
    p2.setAge(20);
    p2.print();

    People p3("Fred");
    p3.print();

    // People p3("unk")

    return 0;
}