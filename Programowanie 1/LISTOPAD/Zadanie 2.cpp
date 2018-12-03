#include <iostream>
#include <stdio.h>

using namespace std;

//2.1. Zapoznaæ siê z pêtl¹ while. Pêtla ta s³u¿y do wielokrotnego wykonania fragmentu kodu przez NIEZNAN¥ Z GÓRY iloœæ razy. Pêtla
//wykonuje siê zawsze, jeœli warunek jest prawdziwy (ewaluowany do true). Napisaæ pêtlê, w któej u¿ytkownik podaje liczbê x. Nale¿y
//wyœwietliæ tê liczbê. Je¿eli u¿ytkownik poda 0, nale¿y zakoñczyæ program.
void zad21()
{
	int a=1;
	while(a!=0)
	{
	
		cout<<"Podaj numerek: ";
		cin>>a;
	}
}
//2.2. Przerobiæ kalkulator z zadania 1.6. Teraz po ka¿dym dzia³aniu program powinien spytaæ u¿ytkownika, czy ten chce powtórzyæ
//wszystko od pocz¹tku. Jeœli tak - restartujemy kalkulator i zaczynamy od nowa. Jeœli nie - koñczymy program.
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
			cout<<"\nZ³y znak w sumie mog³em daæ wczesniej warunek sprawdzaj¹cy";
			break;
		}
												
	}
	cout<<"\n\njeszcze raz to wpisz 1:";
	cin>>war;
	
			}
}

//2.3. Pobraæ od u¿ytkownika liczbê x. Nale¿y wyœwietliæ wszystkie kolejne potêgi liczby x. Zakoñczyæ program, kiedy liczba przekroczy 100
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
//2.4. Pobraæ od u¿ytkownika liczbê x. Jeœli liczba jest niedodatnia - nale¿y zakoñczyæ program. Nastêpnie nale¿y wyœwietlaæ kolejno (w
//nowej linii) wszystkie liczby mniejsze od x, a¿ osi¹gniête zostanie 0.
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
