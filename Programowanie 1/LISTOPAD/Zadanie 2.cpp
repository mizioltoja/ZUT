#include <iostream>
#include <stdio.h>

using namespace std;

//2.1. Zapozna� si� z p�tl� while. P�tla ta s�u�y do wielokrotnego wykonania fragmentu kodu przez NIEZNAN� Z G�RY ilo�� razy. P�tla
//wykonuje si� zawsze, je�li warunek jest prawdziwy (ewaluowany do true). Napisa� p�tl�, w kt�ej u�ytkownik podaje liczb� x. Nale�y
//wy�wietli� t� liczb�. Je�eli u�ytkownik poda 0, nale�y zako�czy� program.
void zad21()
{
	int a=1;
	while(a!=0)
	{
	
		cout<<"Podaj numerek: ";
		cin>>a;
	}
}
//2.2. Przerobi� kalkulator z zadania 1.6. Teraz po ka�dym dzia�aniu program powinien spyta� u�ytkownika, czy ten chce powt�rzy�
//wszystko od pocz�tku. Je�li tak - restartujemy kalkulator i zaczynamy od nowa. Je�li nie - ko�czymy program.
void zad22()
{
	char sign;
	double result;
	double a,b;
	int war=1;
	while(war==1){
	
	
	cout<<"\n\n\nPierwsza ";
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
	cout<<"\n\njeszcze raz to wpisz 1:";
	cin>>war;
	
			}
}

//2.3. Pobra� od u�ytkownika liczb� x. Nale�y wy�wietli� wszystkie kolejne pot�gi liczby x. Zako�czy� program, kiedy liczba przekroczy 100
//000.

void zad23()
{
	int i=1, x,b;
	cout<<"Podaj liczbe";
	cin>>x;
	b=x;
	while(b<=1000000)
	{
	
		cout<<x<<"^"<<i<<"="<<b<<endl;
		b*=x;
		i++;
	}
}
//2.4. Pobra� od u�ytkownika liczb� x. Je�li liczba jest niedodatnia - nale�y zako�czy� program. Nast�pnie nale�y wy�wietla� kolejno (w
//nowej linii) wszystkie liczby mniejsze od x, a� osi�gni�te zostanie 0.
void zad24()
{
	int x;
	cout<<"Podaj x: ";
	cin>>x;
	if (x<1) exit(0);
	
	while(x!=0)
	{
		x-=1;
		cout<<x<<endl;
		
	}
}


int main()
{
	
	zad24();
	return 0;
}
