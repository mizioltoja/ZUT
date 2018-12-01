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
void zad12()
{
	
}

//1.3. Pobraæ od u¿ytkownika liczbê x. Wyœwietliæ kwadrat liczby x.
void zad13()
{
	int x;
	cout<<"podaj x które zostanie podniesione do kwadratu"<<endl;
	cin>>x;
	cout<<"\n "<<x*x; 
};

//1.4. Zapoznaæ siê z instrukcjami warunkowymi (if, else if, else oraz switch). Pobraæ od u¿ywkownika liczbê i wyœwietliæ informacjê, czy jest
//ona: mniejsza, wiêksza, czy równa 0
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

//1.5. Pobraæ ud u¿ytkownika 3 liczby (x1, x2, x3). Wyœwietliæ informacjê, która z tych liczb jest najwiêksza.
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
//1.6. Napisaæ prosty kalkulator. Nale¿y pobraæ od u¿ytkownika 2 liczby oraz operator (jeden z czterech: mno¿enie, dzielenie, dodawanie,
//odejmowanie). Wymagane jest utworzenie prostego menu u¿ytkownika. Uwaga - nale¿y pamiêtaæ o u³amkach (1/3 powinno daæ 0.33, a nie
//0)
void zad16()
{
	char sign;
	double result;
	double a,b;
	while(1){
	
	cout<<"\nCTRL+c aby wyjœæ z programu.\n\n\nPierwsza ";
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
			cout<<"\nZ³y znak w sumie mog³em daæ wczesniej warunek sprawdzaj¹cy";
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
