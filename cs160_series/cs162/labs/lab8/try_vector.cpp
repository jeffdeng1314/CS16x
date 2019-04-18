#include "./vector.hpp"
#include <vector>
#include <iostream>

//We do not want to include either stmt. We wouldn't 
//be able to compare our vector template to the Standard 
//using namespace std;
//using std::vector;
using std::cout;
using std::endl;
using std::exception;
using std::out_of_range;
using std::cin;

int main (){
   vector<int> v;   //Our vector class
   std::vector<int> stdv; //Standard vector

   //Compare operation of our vector to std

   v.push_back(23);
   stdv.push_back(23);
   
   cout << "Our vector size: " << v.size() << endl;
   cout << "STL vector size: " << stdv.size() << endl;


   vector <int> v1 = v;
   v1 = v;

   cout << "After Assignment Overload for Our Vector: "<<v1.size() <<endl;

   std::vector<int> stdv1 = stdv;
   stdv1 = stdv;

   cout <<"After Assignment Overload for Our STL Vector: "<<stdv1.size()<<endl;

   //cout <<v[0]<<endl;
   int a = 0;
   cout <<"Please enter a number to check the value inside the array: "<<endl;
   cin >> a;
   //v[a];
   try {
   int ok = v.at(a);
   cout <<"ok: "<<ok<<endl;
   }
   catch(out_of_range &o){
   	cout <<o.what()<<endl;

	}

   return 0;
}//

//             
