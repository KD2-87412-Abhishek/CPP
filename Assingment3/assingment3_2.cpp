# include <iostream>
using namespace std;

    class tollbooth
    {
        unsigned int no_of_car;
        double  money;
        int c2=0;
        int c1=0;
        public:

        tollbooth():no_of_car(0) , money(0)
        {

        }
        void payingCar(){
            
             ++no_of_car;
            money=money+0.50;
            c1++;

        }
        void nopayCar(){
            
             ++no_of_car;
             c2++;

        }
        void printonConsole(){
            cout << " no of cars "<< no_of_car <<endl;
            cout << " no of non paying car " << c2 << endl;
            cout<< " no of paying car "<< c1 << endl;
            cout<<" money"<< money << endl;

        }


    };


    int main(){
    cout<<"The output for t1 :- "<<endl;
    tollbooth c1;
    c1.payingCar();
    c1.payingCar();
    c1.nopayCar();
    c1.nopayCar();
    c1.printonConsole();

    }



    
    

