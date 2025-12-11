#include <bits/stdc++.h>
using namespace std;

class PersonalDetails{
    public:
        
    //Defining constructor(no return type)
        PersonalDetails(string name, int age, int yoe, string address){
            name_ = name;
            age_ = age;
            yoe_ = yoe;
            address_ = address;
        }

        //Getter functions

        string getName(){
            return name_;
        }

        int getAge(){
            return age_;
        }

        int getYoe(){
            return yoe_;
        }

        string getAddress(){
            return address_;
        }

    private:
        string name_;
        int age_;
        int yoe_;
        string address_;
};

int main(){

    //Calling the constructor and initialising with values

    PersonalDetails p1("Priyanshu" , 22, 3, "Guwahati, Assam");

    //Printing the values
    cout<<"Name: "<<p1.getName()<<'\n';
    cout<<"Age: "<<p1.getAge()<<'\n';
    cout<<"YOE: "<<p1.getYoe()<<'\n';
    cout<<"Address: "<<p1.getAddress()<<'\n';
}