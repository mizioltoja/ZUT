#include <stdio.h> 
#include <stdlib.h>

typedef struct Node Node;

struct Node
{
int Value;
Node * Next;
};

Node * Create (int value) // tworzy listc jednoelementowq (alokuje wêze³), ktOra ma wczel wskazujqcy na samego siebie jako nastcpnik
{
	Node *Node1 = (Node*)malloc(sizeof(Node));
	Node1->Value = value;
	Node1->Next = NULL;
	return Node1;
	
}
Node* GetTail(Node* root) // metoda musi ustaliO pozycjc ostatniego elementu majqc dostcp do korzenia i zwrOcia jego adres (uwaga - nie jest to wymagany malloc!)
{
	Node *tail=NULL;
	if(root->Next !=NULL)
	{
		while(root->Next!=NULL)
		{
			tail = root->Next;
			root = root->Next;
		}
	}else tail = root;
	return tail;
}


void Add(Node* root, int value) //dodaje wczet do listy, ktorej KORZEN jest przekazany jako parametr, do znalezienia korica listy na1e±y u±yo metody GetTail() z powy±ej
{
	Node *Kursor = GetTail(root);
	Node *DodNode = (Node*)malloc(sizeof(Node));
	
	Kursor->Next = DodNode;
	DodNode->Next = NULL;
	DodNode->Value= value;
	
}

void PrintList(Node* root) // metoda powinna wypisao listc, majqc tylko jej korzen. Na1e±y uZyo GetTail() do okre6lenia, kiedy zakonczye wypisywanie
{
	if(root != NULL )
	{
		Node *tail = GetTail(root);
		Node *Kursor = root;
		while(Kursor != tail)
		{
			printf("%i -> ",Kursor->Value);
			Kursor = Kursor->Next;
		}
		printf("%i \n", Kursor->Value);
	}
}


void RemoveNode(Node * root, int value) // metoda powinna usunqa wczel o WARTOSCI podanej jako parametr, majqc tylko korzen listy. UWAGA - nale2y usunqo wczet, zwolnio pamicO po nim i nie naruszya integralnoki listy (powinna nastqpio zmiana nastcpnika wczta PRZED usuwanym wcztem, na zasadzie: 2->4->8->16->2->(...) , usuwamy wczet 4, nowa lista: 2->8->16->2->(...)
{
	Node *Kursor;
	Node *tmp;
	Node *Kursor2;
	Kursor = root;
	Kursor2 = root;
	tmp=NULL;
	
	if(Kursor->Value == value)
	{
		tmp= Kursor->Next;
		
	}
	while (Kursor !=NULL)
	{
		if(Kursor->Next !=NULL)
		{
			Kursor2 = Kursor->Next;
		}else break;
		
		if(Kursor2->Value==value)
		{
			tmp=Kursor2;
			break;
		}
		
		Kursor = Kursor2;
	}
	
	
	if(tmp!=NULL)
	{
		Kursor->Next = tmp->Next;
		free(tmp);
	}
	
}

void FreeList(Node * root) // metoda czyki pamico po likie, usuwajqc wszystkie wczty metodq free() 
{
	
	Node *Kursor;
	Node *tmp;
	root =NULL;
	while(Kursor !=NULL)
	{
		tmp=Kursor->Next;
		free(Kursor);
		Kursor=tmp;
	}
	
}
int Count(Node *root) // metoda zwraca rozmiar listy
{
	int count = 0;
	if(root!=NULL)
	{
		count++;
		while(root->Next != NULL)
		{
			count++;
			root = root->Next;
		}
	}
	return count;
}

int main(int argc, const char * argv[]) {
	
Node * root = Create(2); 
PrintList(root); // 2

Add(root, 4);
 Add(root, 8); 
Add(root, 16); 
PrintList(root); // 2 -> 4 -> 8 -> 16
Add(root, 20);

PrintList(root); // 2 -> 4 -> 8 -> 16 -> 20

printf("Ostatni wezel ma wartosc %d", GetTail(root)->Value); // 20

Add(root, 16);

PrintList(root); // 2 -> 4 -> 8 -> 16 -> 20 -> 16 
printf("%d", Count(root)); // 6

RemoveNode(root, 8);

PrintList(root); // 2 -> 4 -> 16 -> 20 -> 16 

RemoveNode(root, 10); // element nieistniejqcy 

PrintList(root); // 2 -> 4 -> 16 -> 20 -> 16

RemoveNode(root, 16); // usun wszystkie wczty o wartoki 16

PrintList(root); // 2 -> 4 -> 20

printf("%d", Count(root)); // 3

FreeList(root); // zwolnienie pamicci na wszystkie wczty.

 PrintList(root); // (nic, lista niezaalokowana)

return 0;
}
