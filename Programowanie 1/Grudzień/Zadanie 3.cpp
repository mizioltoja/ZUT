#include <iostream>
#include <stdio.h>

using namespace std;
// 3.1 Npisa� metod� int getLength(char *str), w kt�rej w�asnor�cznie przeliczony zostanie rozmiar �a�cucha. 
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

//3.2 Napisa� metod� void Reverse(char *str), kt�ra wypisze �a�cuch znak�w od ko�ca.
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

//3.3 Napisa� metod� bool containsDigits(char *str), kt�ra zwr�ci informacj�, czy w danym stringu znajduje si� jakakolwiek cyfra. 
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
	
	//3.4 Pobra� od u�ytkownika �a�cuch znak�w. Przekaza� go do ka�dej z metod z 3. czesci zada�.
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
