#include <iostream>
#include <stdio.h>

using namespace std;

//2.1 Utworzy� osobn� metod� bool IsSorted(int *,int) realizuj�c� zadanie 1.3
bool IsSorted(int *a, int s)
{
	int i;
	bool uuu=true;
	for(i=0;i<s-1;i++)
	{
		
		if(a[i]<=a[i+1])
		{
			continue;
		}else
		{
			uuu=false;
		}
	}
	return uuu;
}

//2.2 Utworzy� metod� void printBackwards(int *a, int s) s�u��c� do wypisania tablicy od ko�ca

void printBackwards(int *a, int s)
{
	int i;
	for(i=s-1; i>=0; i--)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}

//2.3Utworzy� metod� printDots(int *a,int s) wy�wietlaj�c� w nowych liniach tyle kropek ile znajudje si� w danym elemencie tablicy.
void printDots(int *a,int s)
{
	int i,j;
	for(i=0;i<s;i++)
	{
		for(j=0; j<a[i]; j++)
		{
			cout<<".";
		}
		cout<<"\n";
	}
}
//2.4 Utworzy� metod� int Sum(int *a,int s) licz�c� sum� element�w tablicy.
int Sum(int *a,int s)
{
	int sum=0;
	for(int i=0;i<s;i++)
	{
		sum+=a[i];
	}
	return sum;
}

//2.5 Zaimplementowac algorytm sortowania b�belkowego(w fukncji main(). Algorytm powionien posortowa� dowlonie du�a  tablic� w kolejno�ci niemalej�cej


int main()
{
	int tab[]={3,2,5,4};
	int AmountOfElem=sizeof(*tab);
	bool Solzad21;
	
	//2.1 Utworzy� osobn� metod� bool IsSorted(int *,int) realizuj�c� zadanie 1.3
	Solzad21=IsSorted(tab,AmountOfElem);
	if (Solzad21==true) {
	cout<<"\nTablica posortowana niemalejaco\n";
	}else {
	cout<<"\nTablica nie jest posortowana niemalejaco\n"<<endl;
		};

//2.2 Utworzy� metod� void printBackwards(int *a, int s) s�u��c� do wypisania tablicy od ko�ca
	printBackwards(tab,AmountOfElem);
	
	
//2.3Utworzy� metod� printDots(int *a,int s) wy�wietlaj�c� w nowych liniach tyle kropek ile znajudje si� w danym elemencie tablicy.
	printDots(tab,AmountOfElem);
	
//2.4 Utworzy� metod� int Sum(int *a,int s) licz�c� sum� element�w tablicy.
	int Solzad24=Sum(tab,AmountOfElem);
	cout<<"\n\nSuma"<<Solzad24<<endl;
	
//2.5 Zaimplementowac algorytm sortowania b�belkowego(w fukncji main(). Algorytm powionien posortowa� dowlonie du�a  tablic� w kolejno�ci niemalej�cej
	int pom,i,n=AmountOfElem;
	
	do{
		for(i=0; i<n-1;i++)
		{
			if(tab[i]>tab[i+1])
			{
				pom=tab[i];
				tab[i]=tab[i+1];
				tab[i+1]=pom;
				
			}
		}
		n-=1;
	}while(n>1);
	
//	for(i=0;i<AmountOfElem;i++)
//	{
//		cout<<tab[i]<<" ";
//	}
	return 0;
}
