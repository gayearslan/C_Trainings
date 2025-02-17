#include <stdio.h>
#include <stdlib.h>

int enkucukbul(int *index,int enkucuk){
	if(*(index+1)=='\0'){
		if(enkucuk> *index){
			enkucuk=*index;
			return enkucuk;
			}
		return enkucuk;
		}
	if(enkucuk>*(index+1)){
		enkucuk=*(index+1);
		return enkucukbul(index+1,enkucuk);
		}
	return enkucukbul(index+1,enkucuk);
	}

int main(){
	int dizi[10]={5,3,6,2,-4,-1,4,7,8,0};
	printf("%d ",enkucukbul(dizi,*dizi));
}

