#include <iostream>

using namespace std;

int main()
{
    int a,b; //initialising variables
    cin>>a>>b; //taking inputs from user
    cout<<"the sum of entered numbers is : "<<a + b; //printing the sum of numbers
    

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


#include<iostream>
using namespace std;
int main(){
    int age , choice;
    cout<<"Hi there! Welcome to the voting session : \n";
    cout<<"Please enter your age : \n";
    cin>>age;
    
    if (age < 18){
        cout<<"Sorry , But you are ineligible to vote.But you can vote after"<<(18 - age)<<"years.\n";
    }
    else{
        cout<<"Each vote counts , utilise it wisely.\n";
        cout<<"Please select one of your own choices : \n 1. ABC \n 2. XYZ \n 3. PQR \n 4. TUV \n 5. EDF \n";
        cin>>choice;
    }
    
    switch (choice){
        case 1 :
            cout<<"you selected ABC. THANK YOU.\n";
            break;
        case 2 :
            cout<<"you selected XYZ. THANK YOU.\n";
            break;
        case 3 :
            cout<<"you selected PQR. THANK YOU.\n";
            break;
        case 4 :
            cout<<"you selected TUV. THANK YOU.\n";
            break;
        case 5 :
            cout<<"you selected EDF. THANK YOU.\n";
            break;
        default : 
            cout<<"You can't vote that option.\n";
            break;
    
    }
    cout<<"Thanks for visiting !";
    return 0;
    
}
