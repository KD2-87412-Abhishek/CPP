#include <iostream>
using namespace std;
 class time {
    private:
    int h;
    int m;
    int s;

    public:
 int getHour()
 {
    return h;
 }
 int getMinute()
 {
    return m;
 }
 int getSecond()
 {
    return s;
 }
    void setHour(int h){
        this->h = h;
    }
    void setMinute(int m){
        this->m = m;
    }
    void setSec(int s){
        this->s = s;
    }

    void printTime(){
        cout << h <<"hr :"  << m << "sec :" << s <<" sec " << endl;
    }
    void acceptTime(){
        cout <<" enter the time";
        cin >> h >> m >> s;
    }


 };
 int main(){

    time**ptr=new time* [5]; 

    for(int i=0;i<5; i++)
    {
        ptr[i]=new time;
        ptr[i]->acceptTime();
        ptr[i]->printTime();
    }

    return 0;
 }