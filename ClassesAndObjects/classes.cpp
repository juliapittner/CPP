#include <iostream> 
using namespace std; 
 
class A { 
 protected: 
  int var; 
 public: 
  A() { var = 0;} 
  void increment() { var++; } 
  virtual void decrement() { var--; } 
  virtual void print() {cout << "var = " << var << endl;} 
}; 
 
class B : public A { 
 protected:
 int varB;
 public: 
  B() {varB = 0;}
  void increment() { var += 3; } 
  virtual void decrement() { var -= 3; } 
  void print() {cout << "var = " << var << " varB = " << varB << endl;}
}; 

 /*Function that takes object of class A and returns it*/
 A returnFunction (A a){
  return a;
 }
 
int main() { 
  A a;        
  A * ptr;    
  ptr = &a;
  B b;
  
  ptr -> increment(); 
  ptr -> print(); 
  ptr -> decrement(); 
  ptr -> print(); 
 
 /*Question 1*/
  cout << "Question 1";
  cout << "\n";
  ptr = &b;
  ptr -> increment(); 
  ptr -> print(); 
  ptr -> decrement(); 
  ptr -> print(); 

 /*Question 2*/
  cout << "Question 2";
  cout << "\n";
  a = b; 
  a.print(); 
  ptr = &a; 
  ptr -> print(); 

 /*Question 3*/
  cout << "Question 3";
  cout << "\n";
  b.A::print();

 /*Question 4*/
  returnFunction(a);
  
} 