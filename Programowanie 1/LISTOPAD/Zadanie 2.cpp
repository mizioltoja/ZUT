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
//2.5. Zapoznaæ siê z instrukcjami continue; i break;. Pierwsza s³u¿y do zakoñczenia iteracji i przejœcia do nastêpnej, a druga natychmiast
//koñczy pêtlê. Przerobiæ program z zadania 1.4, aby wyœwietla³ tylko parzyste liczby (u¿yæ if oraz continue). Jeœli liczba wynosi 40, nale¿y
//wyjœæ z pêtli i zakoñczyæ program
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

//2.6. Zapoznaæ siê z pêtl¹ for. Pêtla s³u¿y do wykonania danego fragmentu kodu ZNAN¥ Z GÓRY okreœlon¹ iloœæ razy. Uwaga - ka¿d¹ pêtlê
//for mo¿na zast¹piæ pêtl¹ while i wzajemnie. Zwyczajowo obowiazuje zasada, ¿e jeœli iloœæ iteracji jest znana - u¿ywamy for, a jeœli nie jest
//znana (zale¿y od u¿ytkownika lub jakiegoœ stanu zewnêtrznego) - u¿ywamy pêtli while. Pêtla for sk³ada siê z: ZMIENNEJ ITERACYJNEJ,
//czyli stanu pocz¹tkowego pêtli, np. int i = 0. Nastêpnie WARUNKU ZAKOÑCZENIA PÊTLI, np. i<10. Nastêpnie OPERACJI WYKONYWANEJ
//PO KA¯DEJ ITERACJI - zazwyczaj jest to zwiêkszenie iteratora o 1, czyli i = i + 1, b¹dŸ w skrócie i++. Napisaæ pêtlê for, która wyœwietli cyfry
//od 0 do 9.

void zad26()
{
	int i;
	for(i=0;i<=9;i++)
	{cout<<i<<endl;
	}
}
//2.7. Pobraæ od u¿ytkownika liczby x i y. Zak³adamy, ¿e y > x (zawsze, nie musimy tego sprawdzaæ). Za pomoc¹ pêtli for wypisaæ liczby
//miêdzy x a y (do przemyœlenia - co jest stanem pocz¹tkowym, a co warunkiem zakoñczenia pêtli?)
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

//2.8. Pobraæ od u¿ytkownika liczbê x. Za pomoc¹ pêtli for wypisaæ wszystkie liczby mniejsze od x, ale wiêksze ni¿ 0.
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

//2.9. Pobraæ od u¿ytkownika liczbê x. Za pomoc¹ pêtli for wypisywaæ CO TRZECI¥ liczbê wiêksz¹ od x. Pêtla powinna siê zakoñczyæ, jeœli
//liczba przekroczy 100. Uwaga - proszê nie u¿ywaæ operacji continue i break, a sterowaæ tylko parametrami pêtli.
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
