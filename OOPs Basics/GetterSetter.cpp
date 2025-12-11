#include<bits/stdc++.h>
using namespace std;

class PersonalDetails{
    public:
        //Setter functions for each private members
        void setName(string name){
            name_ = name;
        }
        void setAge(int age){
            age_ = age;
        }

        void setYoe(int yoe){
            yoe_ = yoe;
        }

        void setAddress(string address){
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
    //Defining the class and object

    PersonalDetails p1;

    //Initialising the class values using Setter functions
    p1.setName("Priyanshu");
    p1.setAge(22);
    p1.setYoe(3);
    p1.setAddress("Guwahati, Assam");

    //Getting the values and printing it using the getter functions

    cout<<"Name: "<<p1.getName()<<'\n';
    cout<<"Age: "<<p1.getAge()<<'\n';
    cout<<"YOE: "<<p1.getYoe()<<'\n';
    cout<<"Address: "<<p1.getAddress()<<'\n';
}