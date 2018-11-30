#include <iostream>
#include <stdio.h>

using namespace std;

//	1.1. Zadeklarowaæ zmienne typu int, float, char. Przypisaæ do nich wartoœæ, wyœwietliæ je na ekran
void zad11()
{
	int a=5;
	float b=5.555;
	char c=33; //!
	
	cout<<"Zmienna int ="<<a<<endl; 
	cout<<"Zmienna float ="<<b<<endl;
	cout<<"Zmienna char ="<<c<<endl;	
};
//1.2. Wyœwietliæ zmienn¹ typu int na ekran. Nale¿y u¿yæ metody printf i konstrukcji %d
//void zad12
//{
//	
//}

//1.3. Pobraæ od u¿ytkownika liczbê x. Wyœwietliæ kwadrat liczby x.
void zad13()
{
	int x;
	cout<<"podaj x które zostanie podniesione do kwadratu"<<endl;
	cin>>x;
	cout<<"\n "<<x*x; //szkoda pamiêci na dodatkowe zmienne D:
};




int main ()
{
	zad13();
	
	return 0;
}
