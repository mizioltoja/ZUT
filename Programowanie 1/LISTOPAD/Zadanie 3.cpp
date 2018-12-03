#include <iostream>
#include <stdio.h>

using namespace std;

//3.1. Napisa� metod� void NewLine(). Powinna ona wypisa� na ekran pojedyncz� pust� lini�. U�y� tej metod� w main()
void NewLine()
{
	cout<<"\n";
}

//3.2. Napisa� metod� void NewLines(int count). Powinna ona wypisa� tyle nowych linii, ile zosta�o podanych W PARAMETRZE count (nale�y
//u�y� p�tli for). U�y� metod� w main()
void NewLines(int count)
{
	int i;
	for(i=0;i<count;i++) cout<<"\n";
}

//3.3. Napisa� metod� void WriteBiggerNumber(int x, int y). Metoda powinna pobra� 2 parametry i zwr�ci� wi�kszy z nich. Wykorzysta�
//funckj� w metodzie main(). UWAGA - pobieranie liczb od u�ytkownika powinno odby� si� w funkcji main(), a NIE w WriteBiggerNumber! Do
//funkcji nale�y jedynie przes�a� pobrane wcze�niej parametry
void WriteBiggerNumber(int x, int y)
{
	
	if (x>y)
	{
		cout<<"To jest wi�ksze: "<<x;
	}else
	{
		cout<<"To jest wi�ksze: "<<y;
	}
}
	
//	3.4. Napisa� metod� Multiply(int x, int y) . Metoda powinna ZWR�CI� (s�owo kluczowe return) iloczyn dw�ch parametr�w. Uwaga! Metoda
//NIE POWINNA wypisywa� wyniku - powinien on by� wy�wietlony w funkcji main!
	int Multiply(int x, int y)
	{
		return x*y;
	}
	

int main()
{
	unsigned int ablabla=5; //zmienna do zad3.2
	int x3,y3;
	int zadanie;

	while(1) //tak, wiem nie powinno si� u�ywa� while(1). Przyzwyczajenie z programowania mikrokontroler�w i sterownik�w PLC
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
