#include <iostream>

using namespace std;
int f(int &x, int c){
    c = c-1;
    if(c==0) return 1;
    x= x+1;
    return f(x,c) * x;
}

struct task1
{
    int x=5;
    /* data */
};

#include <cstring>

class A{
    public:
    A(){
        cout<<"contructor"<<endl;
    }
    ~A(){
        cout<<"des"<<endl;
    }
};

#include <string>
#include <algorithm>

int main()
{    
    // A* a = new A[5];
    // delete[] a;

    // int x =5;
    // int *x_prt = &x;
    // cout<<"Hellow World "<< f(*x_prt,x)<<endl;
    // struct task1 t1;
    // memset(&t1, 0, sizeof(t1) );
    // // cout<< t1.x<<endl;
    // short unsigned int x=0;
    // cout <<(8<<1)<<endl;

    // char s1[6] = "HEllo";
    // char s2[6] = "world";

    // char s3[12] = s1+""+s2;
    // cout << s3;

    string s = "spaces in text";

    s.erase(remove(s.begin(),s.end(), ' '), s.end());
    cout<<s<<endl;
    return 0;
}
