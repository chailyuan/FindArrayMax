#include <stdio.h>
#include <stdlib.h>

int array[20]={32,432,67,98,035,86,97,234,23,567,32,432,67,98,035,86,97,234,23,567};
int nnn = 0;

int findMax(int* src,int length){
	nnn++;
	if (length==0) return 0;
	if (length==1) return src[0];
	int wen = findMax(src,(length+1)/2);
	int longfei = findMax(src+(length+1)/2,(length+1)/2);
	return wen>longfei?
		wen:longfei;
}

int findMax2(int *src,int length){
	nnn++;
	if (length==0) return 0;
	int wenlongfei = findMax2(src+1,length-1);
	return src[0]>wenlongfei?
		src[0]:wenlongfei;
}

int main(){
	int a = findMax(array,20);
	printf("%d\n",a);
	printf("%d\n",nnn);
	system("pause");
}