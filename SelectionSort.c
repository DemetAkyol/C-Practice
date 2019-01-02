#include<stdio.h>
#include<stdlib.h>


void selectionsort(int dizi[], int numberOfElements){
	int min, temp, i, j;
	for (i = 0; i < numberOfElements; i++){
		min = i;
		for (j = i + 1; j <= numberOfElements; j++){
			if (dizi[j] < dizi[min])
				min = j;
		}
		temp = dizi[i];
		dizi[i] = dizi[min];
		dizi[min] = temp;
	}


}
int main(){
	int dizi[] = { 1, 2, 3, 8, 6, 7, 9, 5 };
	for (int x = 0; x < 8; x++)
		printf("%d", dizi[x]);
	printf("\n");
	selectionsort(dizi, 7);

	for (int x = 0; x < 8; x++)
		printf("%d", dizi[x]);

	system("PAUSE");
}
