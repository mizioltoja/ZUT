#include <iostream>
#include <stdio.h>

using namespace std;

//	1.1. Zadeklarowa� zmienne typu int, float, char. Przypisa� do nich warto��, wy�wietli� je na ekran
void zad11()
{
	int a=5;
	float b=5.555;
	char c=33; //!
	
	cout<<"Zmienna int ="<<a<<endl; 
	cout<<"Zmienna float ="<<b<<endl;
	cout<<"Zmienna char ="<<c<<endl;	
};
//1.2. Wy�wietli� zmienn� typu int na ekran. Nale�y u�y� metody printf i konstrukcji %d
//void zad12
//{
//	
//}

//1.3. Pobra� od u�ytkownika liczb� x. Wy�wietli� kwadrat liczby x.
void zad13()
{
	int x;
	cout<<"podaj x kt�re zostanie podniesione do kwadratu"<<endl;
	cin>>x;
	cout<<"\n "<<x*x; //szkoda pami�ci na dodatkowe zmienne D:
};




int main ()
{
	zad13();
	
	return 0;
}
