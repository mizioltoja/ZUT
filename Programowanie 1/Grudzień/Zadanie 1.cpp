#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{
	//1.1 Utworzy� 5-cio elementow� tablic� typu int. Pobra� od u�ytkownika 5 element�w i doda� je do tablicy. Nast�pniewy�wietli� najwi�ksz� liczb� z tablicy
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
	
	
	//1.2 Wy�wietli� w p�tli tablice z zadania 1.1 od pocz�tku i od ko�ca
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
		cout<<"\n\nTablica jest posortowana niemalej�co";
	}else cout<<"\n\nTablica NIE jest posortowana niemalej�co";
	
	return 0;
}
