#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
Hello world! Programming is fun! Again hello! c�mlesinde hangi harften kac tane oldugunu hashing kullanarak yaziniz.

*/

struct Node{
	char harf;
	struct Node *next;
};
struct Node* hashTablosu[29];
struct Node* gecici=hashTablosu[0];



void hashing(struct Node* gecici){
	int mod;
	mod=gecici/29;
	if(gecici==NULL){
		
	}
	isalpha(gecici->harf){
		//herhangi bi �eylerin modu esitse o modun sayisini 1 arttircaz
		
		
	}
	hashing(gecici->next);
}

int main(){
	
}

