#include <iostream>

using namespace std;

void fizzBuzz(int n);

int main(){
    fizzBuzz(100);
}

void fizzBuzz(int n) {
    for(int i=1;i<=n;i++){
        if(i%3==0){
            cout<<"Fizz";
        }
        if(i%5==0){
            cout<<"Buzz";
        }
        if(i%5!=0 && i%3!=0)
            cout<<i;
        cout<<endl;
    }
}