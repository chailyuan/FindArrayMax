#include <stdio.h>
#include <stdlib.h>

int array[10]={32,432,67,98,035,86,97,234,23,567};
int nnn = 0;

int findMax(int* src,int length){
	nnn++;
	if (length==0) return 0;
	if (length==1) return src[0];
//	if (length==2) return src[0]>src[1]?src[0]:src[1];

	return findMax(src,(length+1)/2)>findMax(src+(length+1)/2,(length+1)/2)?
		findMax(src,(length+1)/2):findMax(src+(length+1)/2,(length+1)/2);
}

int main(){
	int a = findMax(array,10);
	printf("%d\n",a);
	printf("%d\n",nnn);
	system("pause");
}