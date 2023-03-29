// Example program
#include <iostream>
#include <string>


template<class T>
class Aclass{
    public:
    std::string typeName;
    T data;
    
    Aclass(string typeName, T data){
        this.typeName = typeName;
        this.data = data; 
    }
    ~Aclass(){}
    
    void printclass(){
        cout<<"typeName "<<this.typeName << ", data"<< this.data <<endl;
    }
};

int main()
{
    Aclass* Ainst = new Aclass('int', 10);
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
}


///the correct
// Example program
#include <iostream>
#include <string>

using namespace std;
template <typename T>
class Aclass{
public:
    string typeName;
    T data;
    
    Aclass(string typeName, T data){
        this->typeName = typeName;
        this->data = data;    
    }
    ~Aclass(){}
    
    void printclass(){
        cout<<"typeName "<<this->typeName << ", data = "<< this->data <<endl;
    }
};

int main()
{
    Aclass<int>* A = new Aclass<int>("int", 10);
  A->printclass();
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
}