#include <iostream>
#include <stdio.h>

using namespace std;
// 3.1 Npisaæ metodê int getLength(char *str), w której w³asnorêcznie przeliczony zostanie rozmiar ³añcucha. 
int getLength(char *str)
{
	int count=0,i=0;
	while(1)
	{
		if(str[i]!='\0'){
			count++;
			i++;
		}else break;
	}
	
	return count;
}

//3.2 Napisaæ metodê void Reverse(char *str), która wypisze ³añcuch znaków od koñca.
void Reverse(char *str)
{
	int count=0,i=0;
	while(1)
	{
		if(str[i]!='\0'){
			count++;
			i++;
		}else break;
	}
	for(i=count;i>0;i--)
	{
		cout<<str[i-1];
	}
}

//3.3 Napisaæ metodê bool containsDigits(char *str), która zwróci informacjê, czy w danym stringu znajduje siê jakakolwiek cyfra. 
bool containsDigits(char *str)
{
	int count=0,i=0;
	bool uuu=false;
	while(1)
	{
		if(str[i]!='\0'){
			count++;
			i++;
			if(str[i]=='0'||'1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9') {
			uuu=true;
			}
		}else break;
	}
	return uuu;
	
}

int main()
{
	char word[]={'H','E','L','L','O','!','\0'};
	
	//3.4 Pobraæ od u¿ytkownika ³añcuch znaków. Przekazaæ go do ka¿dej z metod z 3. czesci zadañ.
	cout<<"Podaj lancuch znakow: ";
	cin>>word;
//3.1
	
	cout<<"\nIlosc znakow w slowie: "<<getLength(word)<<endl;
	
//3.2 
	Reverse(word);
//3.3
	if(containsDigits(word)==true)
	{cout<<"\nW slowie sa cyfry"<<endl;
	}else cout<<"\nW slowie nie ma cyfr"<<endl;

	
	return 0;
}
