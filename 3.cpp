#include <iostream>
using namespace std;

void insertion(int arr[],int tam){
	int i,j,temp;
	for(i=1;i<tam;i++){
		j=i;
		while(j>0 && arr[j-1]>arr[j]){
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}

	}


}
void quickSort(int arr[], int left, int right) {
        int i = left, j = right;
        int tmp;
        int pivot = arr[(left + right) / 2];
        /* particion */
        while (i <= j) {
            while (arr[i] < pivot)
                    i++;
            while (arr[j] > pivot)
                j--;
            if (i <= j) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                i++;
                j--;}
};
/* recursion */
if (left < j)
    quickSort(arr, left, j);
if (i < right)
    quickSort(arr, i, right);

}


void mostrar(int arr[],int tam){
	for(int i=0;i<tam;i++){
		cout<<arr[i]<<" ";
	}

}

int main(){
	int arr[9]={5,9,10,1,4,6,0,7,3};
	int arr2[5]={2,3,9,4,5};
	mostrar(arr,9);
	cout<<endl;
	quickSort(arr2,0,8);
	mostrar(arr,9);
	cout<<endl;
	mostrar(arr2,9);
	cout<<endl;
	insertion(arr,9);
	mostrar(arr2,9);
	return 0;


}
