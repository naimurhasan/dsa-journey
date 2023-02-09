#include<bits/stdc++.h>

using namespace std;


// class Employee{
//     public:
//         string name;
//         float salary;
//         float halfSalary();
// };

// float Employee::halfSalary(){

// }

class Rectangle{
    public:
       int w;
       int l;
       int area(){
         return w*l;
       }
       
    
};


int main(){
   Rectangle r;
   r.l = 12;
   r.w = 5;

    cout << r.area() << endl;
    
  return 0;
}