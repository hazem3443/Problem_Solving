#include <iostream>
#include <functional>

using namespace std;

int main() {

  int num = 0;
/*  */
  cout << "Initially, num = " << num << endl;
  
  // [&num] captures num by reference
  auto increment_by_one = [=] () {
    // int num =0;
    // num++;
    cout << "Incrementing num by 1 = "<<num<<endl;
  };

  // invoke lambda function
  increment_by_one();

  cout << "Now, num = " << num << endl;

  return 0;
}