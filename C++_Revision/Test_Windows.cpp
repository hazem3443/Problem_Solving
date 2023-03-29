#include <bits/stdc++.h>
// #include <typeinfo>

using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  cout << "Hello World!"<<endl;
  //sort (v.begin(), v.end());
  map<int, string> m;
  vector<int> v;

  //set many values in vector in one line
  v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  //sort vector
  // sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  //sort vector descending
  sort(v.begin(), v.end(), greater<int>());
  cout << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout<<endl;

  //find val of 5 with O(1)
  //measure time
  //clear windows cpu cache
  //
  system("echo 3 > /proc/sys/vm/drop_caches");

  auto start = chrono::high_resolution_clock::now();
  cout << "find val of 5 with O(1): " << binary_search(v.begin(), v.end(), 5) << endl;
  //print time
  auto stop = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
  cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
  //set many values to map in one line
  m.insert({{1,"Ahmed"},{2,"hazem"},{3,"mohamed"}});
  // .assign({2, 3}, {4, 5});
  for (auto i : m) {
    cout << i.first << " " << i.second << endl;
  }
  //create interval color map
  map<int, string> m2;
  m2.insert({{1,"red"},{2,"green"},{3,"blue"}});
  
  for (auto i : m2) {
    cout << i.first << " " << i.second << endl;
  }


  cout<<endl;

  int x(10);
  int y{11};
  int foo = 0;

  decltype(foo) bar = 155;  
  // cout << x << y << endl;
  cout << foo << R"(string with \backslash)"<< bar << endl;
  cout <<"asss :"<< R"&%(string with \backslash)&%" <<endl;
  cout << (x=155)<< endl;
  cerr << "Error message" << endl;
  clog << "Error message" << endl;

  int myint;
  stringstream("B100a1001") >> myint;
  // cout << myint << endl;
  cout << "myint is: " << (typeid(myint).name()) << '\n';

  int * a,b;
  a=0; b=0;
  if (typeid(a) != typeid(b))
  {
    cout << "a and b are of different types:\n";
    cout << "a is: " << typeid(a).name() << '\n';
    cout << "b is: " << typeid(b).name() << '\n';
  }
  #line 20 "assigning variable"
  // int a?;
  cout << "This is the line number " << __LINE__;
  cout << " of file " << __FILE__ << ".\n";
  cout << "Its compilation began " << __DATE__;
  cout << " at " << __TIME__ << ".\n";
  cout << "The compiler gives a __cplusplus value of " << __cplusplus;
  return 0;
}