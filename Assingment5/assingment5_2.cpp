#include<iostream>
using namespace std;

class Student {

     public:
    string name;
    string gender;
    int arr[3];
    double average;
    int rollNumber;
    static int auto_generation;

   

    Student():rollNumber(++auto_generation)
    {
        name = " ";
        gender = " ";
        arr[0]=0;
        arr[1]=0;
        arr[2]=0;

    }

    Student(string name, string gender, int marks1,int marks2,int marks3):rollNumber(++auto_generation)
    {
        this->name = name;
        this->gender=gender;
        arr[0]=marks1;
        arr[1]=marks2;
        arr[2]=marks3;
        average = (arr[0]+arr[1]+arr[2])/3;
    }

    void AcceptDetails(){
        cout<<"Enter name :- ";
        cin>>name;
        cout<<endl;
         cout<<"Enter gender :- ";
        cin>>gender;
        cout<<endl;
         cout<<"Enter 1st subject marks :- ";
        cin>>arr[0];
        cout<<endl;
         cout<<"Enter 2st subject marks :- ";
        cin>>arr[1];
        cout<<endl;
         cout<<"Enter 3st subject marks :- ";
        cin>>arr[2];
        cout<<endl;
        
    }

    void displayDetails()
    {
        cout<<"Name :- "<<name<<endl;
        cout<<"RollNumber :- "<<rollNumber<<endl;

        cout<<"Gender :- "<<gender<<endl;
        cout<<"Percentage :- "<<((arr[0]+arr[1]+arr[2])/3)<<endl;
        cout<<endl;
    }
    
   

};

int searchDetails(Student* arr[], int n, int rollNumber) {
        for (int i = 0; i < n; ++i) {
            if (arr[i] != nullptr && arr[i]->rollNumber == rollNumber) {
                return i;
            }
        }
        return -1;
    }