#include <iostream>
#include <stdio.h>

using namespace std;

//2.1 Utworzyæ osobn¹ metodê bool IsSorted(int *,int) realizuj¹c¹ zadanie 1.3
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

//2.2 Utworzyæ metodê void printBackwards(int *a, int s) s³u¿¹c¹ do wypisania tablicy od koñca

void printBackwards(int *a, int s)
{
	int i;
	for(i=s-1; i>=0; i--)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}

//2.3Utworzyæ metodê printDots(int *a,int s) wyœwietlaj¹c¹ w nowych liniach tyle kropek ile znajudje siê w danym elemencie tablicy.
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
//2.4 Utworzyæ metodê int Sum(int *a,int s) licz¹c¹ sumê elementów tablicy.
int Sum(int *a,int s)
{
	int sum=0;
	for(int i=0;i<s;i++)
	{
		sum+=a[i];
	}
	return sum;
}

//2.5 Zaimplementowac algorytm sortowania b¹belkowego(w fukncji main(). Algorytm powionien posortowaæ dowlonie du¿a  tablicê w kolejnoœci niemalej¹cej


int main()
{
	int tab[]={3,2,5,4};
	int AmountOfElem=sizeof(*tab);
	bool Solzad21;
	
	//2.1 Utworzyæ osobn¹ metodê bool IsSorted(int *,int) realizuj¹c¹ zadanie 1.3
	Solzad21=IsSorted(tab,AmountOfElem);
	if (Solzad21==true) {
	cout<<"\nTablica posortowana niemalejaco\n";
	}else {
	cout<<"\nTablica nie jest posortowana niemalejaco\n"<<endl;
		};

//2.2 Utworzyæ metodê void printBackwards(int *a, int s) s³u¿¹c¹ do wypisania tablicy od koñca
	printBackwards(tab,AmountOfElem);
	
	
//2.3Utworzyæ metodê printDots(int *a,int s) wyœwietlaj¹c¹ w nowych liniach tyle kropek ile znajudje siê w danym elemencie tablicy.
	printDots(tab,AmountOfElem);
	
//2.4 Utworzyæ metodê int Sum(int *a,int s) licz¹c¹ sumê elementów tablicy.
	int Solzad24=Sum(tab,AmountOfElem);
	cout<<"\n\nSuma"<<Solzad24<<endl;
	
//2.5 Zaimplementowac algorytm sortowania b¹belkowego(w fukncji main(). Algorytm powionien posortowaæ dowlonie du¿a  tablicê w kolejnoœci niemalej¹cej
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
