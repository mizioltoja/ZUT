#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{
	//1.1 Utworzyæ 5-cio elementow¹ tablicê typu int. Pobraæ od u¿ytkownika 5 elementów i dodaæ je do tablicy. Nastêpniewyœwietliæ najwiêksz¹ liczbê z tablicy
int tab[5];
bool uuu=true;
	int i,number;
	
	for(i=0;i<5;i++)
	{
		cout<<"\nPodaj "<<i+1<<" element tablicy:  ";
		cin>>tab[i];	
	}
	number=tab[0];
	for(i=1;i<5;i++)
		{
			if(tab[i]>number) number=tab[i];
		}
	cout<<number<<endl;	//Najwieksza libcza z tablicy
	
	
	//1.2 Wyœwietliæ w pêtli tablice z zadania 1.1 od pocz¹tku i od koñca
	cout<<"\nTablica od poczatku: ";
	for(i=0;i<5;i++)
	{
		cout<<tab[i]<<"  ";	
	}
	cout<<"\n\nTablica od konca: ";
	for(i=5;i>0;i--)
	{
		cout<<tab[i-1]<<"  ";
	}
	
	//1.3Napisac algorytm sprawdzajacy czy tablica jest posortowana w kolejnosci niemalejacej
	
	for(i=0;i<4;i++)
	{
		
		if(tab[i]<=tab[i+1])
		{
			continue;
		}else
		{
			uuu=false;
		}
	}
	if(uuu==true){
		cout<<"\n\nTablica jest posortowana niemalej¹co";
	}else cout<<"\n\nTablica NIE jest posortowana niemalej¹co";
	
	return 0;
}
