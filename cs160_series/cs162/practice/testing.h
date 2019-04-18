#include <iostream>
#include <string>

using namespace std;

class people{
	public:
		void setName(string x);
		string getName();
		void setAge(int y);
		int getAge();

	private:
		string name;
		int age;

};
