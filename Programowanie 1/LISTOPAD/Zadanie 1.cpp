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
void zad12()
{
	
}

//1.3. Pobra� od u�ytkownika liczb� x. Wy�wietli� kwadrat liczby x.
void zad13()
{
	int x;
	cout<<"podaj x kt�re zostanie podniesione do kwadratu"<<endl;
	cin>>x;
	cout<<"\n "<<x*x; 
};

//1.4. Zapozna� si� z instrukcjami warunkowymi (if, else if, else oraz switch). Pobra� od u�ywkownika liczb� i wy�wietli� informacj�, czy jest
//ona: mniejsza, wi�ksza, czy r�wna 0
void zad14()
{
	int a;
	cout<<"Podaj liczbe:";
	cin>>a;
	if (a>0) 
	{
		cout<<"Wieksza";
	} else if (a<0)
	{
		cout<<"Mniejsza";
	} else
	{
		cout<<"Rowna 0";
	}
}

//1.5. Pobra� ud u�ytkownika 3 liczby (x1, x2, x3). Wy�wietli� informacj�, kt�ra z tych liczb jest najwi�ksza.
void zad15()
{
	int x1,x2,x3;
	cout<<"Podaj pierwsza liczbe:"<<endl;
	cin>>x1;
	cout<<"\nPodaj druga liczbe:"<<endl;
	cin>>x2;
	cout<<"\nPodaj trzecia liczbe:"<<endl;
	cin>>x3;
	
	if (x1>x2 && x1>x3) cout<<x1;
	if(x2>x1 && x2>x3) cout<<x2;
	if (x3>x1 && x3>x2 ) cout<<x3;
	
}
//1.6. Napisa� prosty kalkulator. Nale�y pobra� od u�ytkownika 2 liczby oraz operator (jeden z czterech: mno�enie, dzielenie, dodawanie,
//odejmowanie). Wymagane jest utworzenie prostego menu u�ytkownika. Uwaga - nale�y pami�ta� o u�amkach (1/3 powinno da� 0.33, a nie
//0)
void zad16()
{
	char sign;
	double result;
	double a,b;
	while(1){
	
	cout<<"\nCTRL+c aby wyj�� z programu.\n\n\nPierwsza ";
	cin>>a;
	cout<<"\nDruga: ";
	cin>>b;
	cout<<"\nZnak(+ - * /): ";
	cin>>sign;
	
	switch(sign)
	{
		case '+':
			{
				cout<<"\n\n"<<a<<"+"<<b<<"="<<a+b;
				break;
			}
		case '-':
			{
				cout<<"\n\n"<<a<<"-"<<b<<"="<<a-b;
				break;
			}
		case '*':
			{
				cout<<"\n\n"<<a<<"*"<<b<<"="<<a*b;
				break;
			}
		case '/':
			{
				if(b!=0){
					cout<<"\n\n"<<a<<"/"<<b<<"="<<a/b;
				}else cout<<"Nie lubimy granic";
				
				break;
			}
		default:
		{
			cout<<"\nZ�y znak w sumie mog�em da� wczesniej warunek sprawdzaj�cy";
			break;
		}
												
	}
			}
}
int main ()
{
	int WyborZadania;
	
	
	cout<<"\nWpisz numer zadania(1- zad11,2-  zad12..  6- zad16:  ";
	cin>>WyborZadania;
	switch(WyborZadania)
	{
		case(1):
			{
				zad11();
				break;
			}
		case(2):
			{
				zad12();
				break;
			}
		case(3):
			{
				zad13();
				break;
			}
		case(4):
			{
				zad14();
				break;
			}
		case(5):
			{
				zad15();
				break;
			}
		case(6):
			{
				zad16();
				break;
			}
		default:
			{
				cout<<"\nzle wpisane\n";
			}
	}

	return 0;

}
