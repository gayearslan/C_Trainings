/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int boyutBulma(int* dizi);
int* twoSum(int* nums, int numSize, int target, int* returnSize);

int* twoSum(int* nums, int numSize, int target, int* returnSize) {
    int boyut= boyutBulma(nums);
    int kontrol=0;
    int toplam=0;
    int dizi[2];
    for(int i=0;i<boyut;i++){
        for(int j=i;j<boyut;j++){
            toplam=nums[i]+nums[j];
            if(toplam==target){
                kontrol=1;
				dizi[0] = i;
				dizi[1] = j;
                return dizi;
            }
        }
    }
    if(kontrol==0){
        return 0;
    }
}


//dizi boyutu bulma
int boyutBulma(int* dizi){
    int i=0;
    while(*(dizi+i)!='\0'){
        i++;
    }
    return i;
}

int main(){
	int nums[]={1,2,5};
	int target=3;
	int size=3;
	int rsize=2;
	twoSum(nums,size,target,&rsize);
}
