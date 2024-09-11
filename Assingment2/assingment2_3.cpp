#include <iostream>
using namespace std;


namespace NA

{
    class student
{  
    
    int roll_no;
    string name;
    int marks;
    public:
    void initStudent()
    {
        roll_no=1;
        name="abhishek";
        marks=0;
      
    } 
    void printStudentOnConsole()
    {
        cout <<  "rollno -" << roll_no << endl << "Name -" << name << endl  << "Marks -" << marks << endl;
    }
    void acceptStudentOnConsole()

    {   cout<<" Enter your roll name marks";
        cin >> roll_no >> name >> marks;
        
    }
};
}
int main()
{    
    int choice;
    cout <<"enter your choice";
    cin  >> choice;
     NA::student s1;
    while (choice!=0)
    {
       

        switch (choice)
        {
            case 1:
        
                s1.initStudent();
                s1.printStudentOnConsole();
                
            break;
    
            case 2:
        
                s1.acceptStudentOnConsole();
                s1.printStudentOnConsole();

            break;

            default:
            cout <<" enteer correct choice"<< endl;
            break;
        }
   
    return 0;
    } 
  
   
}