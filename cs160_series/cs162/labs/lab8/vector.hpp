#include <stdlib.h>
#include <stdexcept>
#include <iostream>
template <class T>
class vector {
   private:
      T *v;
      int s;
   public:
      vector(){
	     s=0;
	     v=NULL;
      }
	  
      ~vector(){
	     delete [] v;
      }
	  
      int size() {
	     return s;
      }
	  
      void push_back(T ele) {
	     T *temp;
	     temp = new T[++s];
	     for(int i=0; i<s-1; i++)
	        temp[i]=v[i];

	     delete [] v;
	     v=temp;
	     v[s-1]=ele;
      }



      vector (vector<T> &other){//copy

      	s = other.s;
      	v = new T[s];
      	for (int i = 0; i < s; i++){
      		v[i] = other.v[i];
      	}
      }

      void operator= (vector<T> &other){//asssignment
      	delete [] v;

      	s = other.s;
      	v = new T[s];
      	for (int i = 0; i < s; i++){
      		v[i] = other.v[i];
      	}

      }


      T operator[] (int a){

      	return *(v + a);

      } //only perform address arithmetic




      T at(int a){

      	if (a < s-1){
      		return v[a];
      	}
      	else{
      		throw std::out_of_range("out ofadfasdfafdasf bound");
      	}

      } // Check to make sure not out of bounds
 
};// 