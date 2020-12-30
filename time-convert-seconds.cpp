#include <iostream>

using namespace std;
class Total{
    public : 
        int h , m ,s , sec ;
        void takeTime();
        void convert();
        void display();
};
void Total :: takeTime(){
    cout<<"Enter time : \n";
    cout<<"Hours? ";
    cin>>h;
    cout<<"Minutes? ";
    cin>>m;
    cout<<"Seconds? ";
    cin>>s;
}

void Total :: convert(){
    sec = h * 3600 + m * 60 + s;
}

void Total :: display(){
    cout<<"the time is = ";
    cout<<h<<":"<<m<<":"<<s;
    
    cout<<"\ntime in total = "<<sec;
}

int main(){
    Total t;
    t.takeTime();
    t.convert();
    t.display();
    
    return 0;
    
}
