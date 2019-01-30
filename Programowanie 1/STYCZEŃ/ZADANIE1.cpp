#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Student
{
	int Age;
	int Height;
	int Semestr;
};

Student * Create(int age, int height, int semestr)
{
	Student * student=(Student*) malloc(sizeof (Student));
	student->Age=age;
	student->Height=height;
	student->Semestr=semestr;
	
	
}

void PrintStudent(Student *s)
{
	
	cout<<"Wiek: "<<s->Age<<endl;
	cout<<"Wzrost: "<<s->Height<<endl;
	cout<<"Sem: "<<s->Semestr<<endl;
}

bool AreEqueal(Student * s1, Student * s2)
{
	bool equeal=true;
	if (s1->Age!=s2->Age) equeal=false;
	if(s1->Height!=s2->Height)equeal=false;
	if(s1->Semestr!=s2->Semestr)equeal=false;
	return equeal;
}

int main()
{
	// zad 1.1
	Student Stu1=*Create(25,155,2);
	Student Stu2=*Create(40,175,7);

	
	PrintStudent(&Stu1);
	PrintStudent(&Stu2);
	cout<<"Czy s¹ tacy sami?: ";
	if (AreEqueal(&Stu1,&Stu2)==true) {
		cout<<"TAk";
	}else cout<<"Nie";
	
	
	return 0;
}
