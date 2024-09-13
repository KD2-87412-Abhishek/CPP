#include<iostream>
using namespace std;

class address{
    string building;
    string street;
    string city;
    int pin;

    public:
    address(){
        this->building = " ";
        this->street = " ";
        this->city = " ";
        this->pin = 0;
    }
    void setBuilding(string s){
        this->building = s;
    }
    void setStreet(string s){
        this->street = s;
    }
    void setCity(string s){
        this->city = s;
    }
    void setPin(int p){
        this->pin = p;
    }
    string getBuilding(){
        return this->building;
    }
    string getStreet(){
        return this->street;
    }
    string getCity(){
        return this->city;
    }
    int getPin(){
        return this->pin;
    }
    void acceptAddress()
    {
        string bld;
        string strt;
        string cty;
        int pin;

        cout<<"Enter bulding : "<<endl;
        getline(cin, bld);
        setBuilding(bld);
        cout<<"Enter street : "<<endl;
        getline(cin, strt);
        setStreet(strt);
        cout<<"Enter city : "<<endl;
        getline(cin, cty);
        setCity(cty);
        cout<<"enter Pin : "<<endl;
        cin>>pin;
        setPin(pin);
    }
    void displayAddress()
    {
        cout<<getBuilding()<<","<<getStreet()<<","<<getCity()<<","<<getPin();
    }
};
int main(){
    address ad1;
    ad1.acceptAddress();
    ad1.displayAddress();
    return 0;
}