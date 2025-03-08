#include<iostream>
#include<string.h>
using namespace std;

class Employee{
    private:
    int age;
    int marks;
    string name;
    public:
    void set_num(int val1, int val2, string val3){
        age = val1;
        marks = val2;
        name = val3;



        
    }
    void get_num(){
        cout<<age<<endl;
        cout<<name<<endl;
        cout<<marks<<endl;

    }
};
int main(){
    Employee obj;
    obj.set_num(23, 90, "Priya");
    obj.get_num();

}