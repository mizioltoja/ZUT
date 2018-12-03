#include <iostream>
#include <stdio.h>

using namespace std;

//3.1. Napisaæ metodê void NewLine(). Powinna ona wypisaæ na ekran pojedyncz¹ pust¹ liniê. U¿yæ tej metodê w main()
void NewLine()
{
	cout<<"\n";
}

//3.2. Napisaæ metodê void NewLines(int count). Powinna ona wypisaæ tyle nowych linii, ile zosta³o podanych W PARAMETRZE count (nale¿y
//u¿yæ pêtli for). U¿yæ metodê w main()
void NewLines(int count)
{
	int i;
	for(i=0;i<count;i++) cout<<"\n";
}

//3.3. Napisaæ metodê void WriteBiggerNumber(int x, int y). Metoda powinna pobraæ 2 parametry i zwróciæ wiêkszy z nich. Wykorzystaæ
//funckjê w metodzie main(). UWAGA - pobieranie liczb od u¿ytkownika powinno odbyæ siê w funkcji main(), a NIE w WriteBiggerNumber! Do
//funkcji nale¿y jedynie przes³aæ pobrane wczeœniej parametry
void WriteBiggerNumber(int x, int y)
{
	
	if (x>y)
	{
		cout<<"To jest wiêksze: "<<x;
	}else
	{
		cout<<"To jest wiêksze: "<<y;
	}
}
	
//	3.4. Napisaæ metodê Multiply(int x, int y) . Metoda powinna ZWRÓCIÆ (s³owo kluczowe return) iloczyn dwóch parametrów. Uwaga! Metoda
//NIE POWINNA wypisywaæ wyniku - powinien on byæ wyœwietlony w funkcji main!
	int Multiply(int x, int y)
	{
		return x*y;
	}
	

int main()
{
	unsigned int ablabla=5; //zmienna do zad3.2
	int x3,y3;
	int zadanie;

	while(1) //tak, wiem nie powinno siê u¿ywaæ while(1). Przyzwyczajenie z programowania mikrokontrolerów i sterowników PLC
	{
	cout<<"\nPodaj numer zadania1,2,3 : ";
	cin>>zadanie;
	switch(zadanie)
	{
		case 1:
			{
				NewLine();
				break;
			}
		case 2:
			{
				NewLines(ablabla);
			}
		case 3:
			{
				cout<<"Podaj X:";
				cin>>x3;
				cout<<"\nPodaj Y:";
				cin>>y3;
				WriteBiggerNumber(x3,y3);
			}
		case 4:
			{
				cout<<"Podaj X:";
				cin>>x3;
				cout<<"\nPodaj Y:";
				cin>>y3;
				cout<<Multiply(x3,y3);
			}
	}
}
	
	
	return 0;	
}
