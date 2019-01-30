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
		cout<<"TAk"<<endl;
	}else cout<<"Nie"<<endl;

	
	
	// zad 1.2 Utworzyc tablice 3 studentow. Zape³niæ j¹ wartoœciami, wyœwietliæ, zwolniæ pamiêæ. Tablica za pomoc¹ metody malloc.
	cout<<"\n\nZadanie 1.2"<<endl;
	int n=3,i;
	Student * studenta=(Student*) malloc(sizeof (Student) * n);
	
	for(i=0;i<n;i++)
	{
		studenta[i].Age=20+i*2;
		studenta[i].Height=150+i*10;
		studenta[i].Semestr=2+i;
	}
	for(i=0;i<n;i++)
	{
		cout<<"\nStudent "<<i<<" :\n";
		PrintStudent(&studenta[i]);
	}
	
	
	free(studenta);
	
	return 0;
}
