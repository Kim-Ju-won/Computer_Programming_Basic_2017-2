
#include<iostream>

using namespace std;

int* CreateArray(int n);
int* MergeArray(int* arr1, int* arr2, int length ,int lengthSum);
int* AscendArray(int* arr, int n);
int* DescendArray(int* arr, int n);
void PrintArray(int* arr1, int* arr2, int* arr3, int n, int m);
void swap(int* a, int* b);

int main(){
	int order=0;
	int *arr1=NULL;
	int *arr2=NULL;
	int *arr3=NULL;
	int length=0;
	int length2=0;
	int lengthSum=0;
	int number=0;

	while(1){

		cin>>order;

		if(order==1){

			if(length==0&&length2==0)
			{
				cin>>length;
			  cin>>length2;

				arr1=CreateArray(length);
				arr2=CreateArray(length2);
			}
			else{
				continue;
			}
		}
		else if(order==2){

			if(arr1!=NULL&&arr2!=NULL){
				lengthSum=length+length2;
				arr3=MergeArray(arr1, arr2, length, lengthSum);

				delete[] arr1;
				delete[] arr2;

				arr1=NULL;
				arr2=NULL;
			}
			else{
				cout<<"Create array first!"<<endl;
			}
		}
		else if(order==3){
			if(arr3!=NULL){
				while(1){
					
					cin>>number;
					if(number==1){
						AscendArray(arr3,lengthSum);
						break;
					}
					else if(number==2){
						DescendArray(arr3,lengthSum);
						break;
					}
					else{
						continue;
					}
				}
			}
			else{
				cout<<"No merged array exist!"<<endl;
			}
		}
		else if(order==4){
			PrintArray(arr1, arr2, arr3, length, length2);
		}
		else if(order==5){
			break;
		}
		else{
			continue;
		}
	}
	return 0;
}

int* CreateArray(int n){
	int* a;
	int i=0;

	a= new int[n];

	for(i=0;i<n;i++){
		cin>>a[i];
	}

	return a;
}

int* MergeArray(int* arr1, int* arr2, int length, int lengthSum){

	int i=0;

	int* arr3=new int[lengthSum];

	for(i=0;i<length;i++){
		arr3[i]=arr1[i];
	}

	for(i=length;i<lengthSum;i++){
		arr3[i]=arr2[i-length];
	}

	return arr3;
}

void PrintArray(int* arr1, int* arr2, int* arr3, int n, int m){

	int i=0;

	if(arr1==NULL){
		cout<<"arr1: NULL"<<endl;
	}
	else{
		cout<<"arr1: ";
		for(i=0;i<n;i++){
			cout<<arr1[i]<<" ";
		}
		cout<<endl;
	}

	if(arr2==NULL){
		cout<<"arr2: NULL"<<endl;
	}
	else{
		cout<<"arr2: ";
		for(i=0;i<m;i++){
			cout<<arr2[i]<<" ";
		}
		cout<<endl;
	}

	if(arr3==NULL){
		cout<<"arr3: NULL"<<endl;
	}
	else{
		cout<<"arr3: ";
		for(i=0;i<n+m;i++){
			cout<<arr3[i]<<" ";
		}
		cout<<endl;
	}
}

void swap(int* a, int* b){

	int temp=*a;

	*a=*b;

	*b=temp;
	
}

int* AscendArray(int* arr, int n){
	int i,j=0;

	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}

	return arr;
}
int* DescendArray(int* arr, int n){

	int i,j=0;

	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(arr[j]<arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}

	return arr;
}
