//
//  Program Name - S3_Inheritance.cpp
//  Series: GetOnToC++ Step: 3
//
//  Purpose: This program designs multiple car classes and their class heirarchies
//
//  Compile: g++ S3_Inheritance.cpp -o S3_Inheritance
//  Execute: ./S3_Inheritance
//
//  Created by Narayan Mahadevan on 18/08/13.
// 

#include <iostream>
using namespace std;

class human{
	public:
		int age,height;
		string name,gender;
		human(){};
		int ageReader(){return age; }
		int heightReader(){ return height; }
		string nameReader(){ return name; }
		string genderReader(){ return gender; }
};
 	
class studentInheritance:public human{
	public:
		int graduationYear;
		studentInheritance(){age = 18; height = 65; name = "Bob"; gender = "Male"; graduationYear = 2016; }
		int graduationYearReader(){return graduationYear; }
};

class teacherInheritance:public human{
	public:
		int startYear;
		teacherInheritance(){age = 40; height = 65; name = "Ryan"; gender = "Male"; startYear = 1985; }
		int startYearReader(){return startYear; }
};

class studentNoInheritance{
	public:
		int age,height, graduationYear;
		string name,gender;
		studentNoInheritance(){age = 18; height = 65; name = "Bob"; gender = "Male"; graduationYear = 2016; }
		int ageReader(){return age; }
		int heightReader(){ return height; }
		string nameReader(){ return name; }
		string genderReader(){ return gender; }
		int graduationYearReader(){return graduationYear; }
};

class teacherNoInheritance{
	public:
		int age,height,startYear;
		string name,gender;
		teacherNoInheritance(){age = 40; height = 65; name = "Ryan"; gender = "Male"; startYear = 1985; }
		int startYearReader(){return startYear; }
		int ageReader(){return age; }
		int heightReader(){ return height; }
		string nameReader(){ return name; }
		string genderReader(){ return gender; }
};

int main(){
	studentInheritance a;
	studentNoInheritance b;
	teacherInheritance x;
	teacherNoInheritance y;
	cout << "Both student and teacher classes create identical students and teachers. To test this, return the different variables that define a student or teacher and see that they are the same. However, using inheritance avoids code duplication. " << endl;
	
	return 0;
	
}
