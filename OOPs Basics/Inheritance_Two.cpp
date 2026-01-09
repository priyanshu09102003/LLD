#include<bits/stdc++.h>
using namespace std;

//Designing Employee system using Constructors

class Person{
   public:
    Person(string name, int age , string address){
        name_ = name;
        age_ = age;
        address_ = address;
    }

    string GetName(){
        return name_;
    }

    int GetAge(){
        return age_;
    }

    string GetAddress(){
        return address_;
    }
   
   
   private:
    string name_;
    int age_;
    string address_;

};

class Employee:public Person{
    public:
        Employee(string name, int age, string address, string company , int salary) : Person(name, age, address){
            company_ = company;
            salary_ = salary;
        }

        string GetCompany(){
            return company_;
        }

        int GetSalary(){
            return salary_;
        }


    private:
        string company_;
        int salary_;
};

int main(){

    Employee E1("Priyanshu Paul" , 22, "Guwahati, India" , "EY" , 90000);
    cout<<"Name: "<<E1.GetName()<<"\n";
    cout<<"Age: "<<E1.GetAge()<<"\n";
    cout<<"Address: "<<E1.GetAddress()<<"\n";
    cout<<"Company: "<<E1.GetCompany()<<"\n";
    cout<<"Salary: "<<E1.GetSalary()<<"\n";

}