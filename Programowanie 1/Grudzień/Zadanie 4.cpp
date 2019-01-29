#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void printBackwards(int *a, int s)
{
	int i;
	for(i=s-1; i>=0; i--)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}

bool AreArraysIdentical(int *a1, int s1, int *a2, int s2) 
{
	bool wynik=true;
	int i;
	if(s1==s2)
	{
		for(i=0; i<s1;i++)
		{
			if (a1[i]!=a2[i])
			{
				wynik=false;
			}
		}
		
	}else{
		wynik=false;
	}
	
	
	return wynik;
}

char *reverseString(char *s)
{
	int size=0;
		int i,j=0;
	while(1)
	{
		if(s[i]!='\0'){
			size++;
			i++;
		}else break;
	}
	

	char *odwrot;
	odwrot=(char *) malloc(sizeof(int) * size);
	for(i=size-1; i>=0;i--)
	{
		odwrot[j]=s[i];
		j++;
	}
	odwrot[j]='\0';
	
	return odwrot;
	
}

int main()
{
// 4.1 Pobraæ od u¿ytkownika liczbê n. Zaalokowaæ pamiêæ na n elementów in i pobraæ je od u¿ytkownika. Wykonaæ na niej metodê printBackwards z 2.2
/*
int *tab;
int i,n;
cout<<"Podaj ilosc elementow tablicy: ";
cin>>n;
tab=(int *) malloc(sizeof(int) * n);

for(i=0;i<n; i++)
{
	cout<<"\nPodaj "<<i+1<<" element tablicy:";
	cin>>tab[i];
}
printBackwards(tab,n);

*/

// 4.2 Pobraæ od u¿ytkownika liczbê n. Zaalokowaæ pamiêæ na n elementów in i pobraæ je od u¿ytkownika.
/*
int *tab,*tab2;
int i,n,counter=0;
cout<<"Podaj ilosc elementow tablicy: ";
cin>>n;
tab=(int *) malloc(sizeof(int) * n);

for(i=0;i<n;i++)
{
	cout<<"\nPodaj "<<i+1<<" element tablicy:";
	cin>>tab[i];
	
}
tab2=(int *) malloc(sizeof(int) * n);

for(i=0;i<n;i++)
{
	if (tab[i]<0)
	{
		tab2[counter]=tab[i];
		counter++;
	}
}
cout<<endl;
for(i=0;i<counter;i++)
{
	cout<<tab2[i]<<" ";
}
free(tab);
free(tab2);
*/

// 4.3 Napisac metodê bool AreArraysIdentical(int *a1, int s1, int *a2, int s2) zwracja¹c¹ informacjê, czy dwie tablice podane jako parametr s¹ identyczne, tj czy maj¹ tak¹ sam¹ d³ugoœæ i czy na ka¿dym indeksie wystepuje taki sam element.
/*
int size1=4;
int size2=4;
int tab1[size1]={2,5,4,8};
int tab2[size2]={2,5,4,8};

bool zgodnosc=AreArraysIdentical(tab1,size1,tab2,size2);
cout<<zgodnosc;
*/

// 4.4 Napisaæ metodê char *reverseString(char *s), która zwróci(a nie wypisze) string który jest odwróconym stringiem przekazanym jako pierwszy parametr. Funkcja zaalokuje pamiêæ na nowy ³añcuch i go zwróci. Nale¿y ngo nastêpnie przechwyciæ w funkcji main.
char *str;
int n=20,i;
str=(char *) malloc(sizeof(int) * n);
cout<<"\nWpisz zdanie na maksymalnie 19 znaków bez spacji: ";
cin>>str;



char *result=reverseString(str);
cout<<result;
free(str);
free(result);




	return 0;
}
