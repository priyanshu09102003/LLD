#include<bits/stdc++.h>
using namespace std;

//Designing an employee system(without constrctors)

class Person{
    public:
        string name_;
        int age_;
        string address_;

};

class Employee: public Person{

    public:
        string company_;
        int salary_;

};


int main(){

    Employee E1;
    E1.name_ = "Priyanshu";
    E1.age_ = 22;
    E1.address_ = "Assam, India";
    E1.company_ = "EY";
    E1.salary_ = 2000;

    cout<<"Name: "<<E1.name_<<"\n";
    cout<<"Age: "<<E1.age_<<"\n";
    cout<<"Address: "<<E1.address_<<"\n";
    cout<<"Company: "<<E1.company_<<"\n";
    cout<<"Salary: "<<E1.salary_<<"\n";

}