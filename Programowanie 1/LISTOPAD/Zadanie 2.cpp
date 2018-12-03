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
//2.5. Zapozna� si� z instrukcjami continue; i break;. Pierwsza s�u�y do zako�czenia iteracji i przej�cia do nast�pnej, a druga natychmiast
//ko�czy p�tl�. Przerobi� program z zadania 1.4, aby wy�wietla� tylko parzyste liczby (u�y� if oraz continue). Je�li liczba wynosi 40, nale�y
//wyj�� z p�tli i zako�czy� program
void zad25()
{
	int a;
	while(1)
	{
	cout<<"Podaj liczbe:";
	cin>>a;
	if (a==40) 
	{
		break;
	} else if (a%2==0)
	{
			cout<<"Wyswietlam liczbe parzysta:"<<a<<endl;
	} else
	{
		continue;
	}
}
//nie wiem czy dobrze zrozumialem to zadanie ale chyba o to chodzilo. 
}

//2.6. Zapozna� si� z p�tl� for. P�tla s�u�y do wykonania danego fragmentu kodu ZNAN� Z G�RY okre�lon� ilo�� razy. Uwaga - ka�d� p�tl�
//for mo�na zast�pi� p�tl� while i wzajemnie. Zwyczajowo obowiazuje zasada, �e je�li ilo�� iteracji jest znana - u�ywamy for, a je�li nie jest
//znana (zale�y od u�ytkownika lub jakiego� stanu zewn�trznego) - u�ywamy p�tli while. P�tla for sk�ada si� z: ZMIENNEJ ITERACYJNEJ,
//czyli stanu pocz�tkowego p�tli, np. int i = 0. Nast�pnie WARUNKU ZAKO�CZENIA P�TLI, np. i<10. Nast�pnie OPERACJI WYKONYWANEJ
//PO KA�DEJ ITERACJI - zazwyczaj jest to zwi�kszenie iteratora o 1, czyli i = i + 1, b�d� w skr�cie i++. Napisa� p�tl� for, kt�ra wy�wietli cyfry
//od 0 do 9.

void zad26()
{
	int i;
	for(i=0;i<=9;i++)
	{cout<<i<<endl;
	}
}
//2.7. Pobra� od u�ytkownika liczby x i y. Zak�adamy, �e y > x (zawsze, nie musimy tego sprawdza�). Za pomoc� p�tli for wypisa� liczby
//mi�dzy x a y (do przemy�lenia - co jest stanem pocz�tkowym, a co warunkiem zako�czenia p�tli?)
void zad27()
{
	int x,y,roznica,i;
	cout<<"Podaj x: ";
	cin>>x;
	cout<<"\nPodaj y wieksze od x: ";
	cin>>y;
	roznica=y-x;
	for(i=1;i<roznica;i++)
	{
	cout<<y-i<<endl;
}
}

//2.8. Pobra� od u�ytkownika liczb� x. Za pomoc� p�tli for wypisa� wszystkie liczby mniejsze od x, ale wi�ksze ni� 0.
void zad28()
{
	unsigned int x;
	int i;
	cout<<"Podaj x>0: ";
	cin>>x;
	
	for(x=x-1;x>0;x--)
	{
		cout<<x<<endl;
	}
}

//2.9. Pobra� od u�ytkownika liczb� x. Za pomoc� p�tli for wypisywa� CO TRZECI� liczb� wi�ksz� od x. P�tla powinna si� zako�czy�, je�li
//liczba przekroczy 100. Uwaga - prosz� nie u�ywa� operacji continue i break, a sterowa� tylko parametrami p�tli.
void zad29()
{
	int x;
	cout<<"Podaj : ";
	cin>>x;
	for(x=x+3;x<=100;x+=3)
	{
		cout<<x<<",  ";
	}
}

int main()
{
	
	zad29();
	return 0;
}
