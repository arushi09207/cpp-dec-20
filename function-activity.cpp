#include <iostream>

using namespace std;
int isPrime(int n);
int main(){
    int i , N , n;
    cout<<"Tell the number to be checked: \t";
    cin>>N;
    for (int i = 2 ; i <= N/2 ; ++i){
        if (isPrime(i)){
            if (isPrime(N - i)){
                
                cout<<"\n"<<N<<"  =  "<<i<<"  +  "<<N - i;
            }
        }
    }
    
}
int isPrime(int n){
    if (n <= 1) {
        return false;
    }
    for(int i = 2 ; i <= n/2 ; ++i){
        if (n%i == 0){
            return false;
            
        }
        
    }
    return true;
}
