#include<bits/stdc++.h>
using namespace std;

//Defining classes
class Person{

    //Public members of the class
    public:
        //These methods or members can be accessed anywhere in the program
        
        void setName(string name){
            name_ = name;
        }

        string getName(){
            return name_;
        }


    //Private members of the class
    private:
        //Note: These members are accessible only within the class
        int age_;
        string name_;
        string address_;
};

int main(){

    //Defining object of the class

    Person p1;

    //Calling the public class members
    p1.setName("Priyanshu");

    cout<<"Hello, my name is: "<<p1.getName();

}