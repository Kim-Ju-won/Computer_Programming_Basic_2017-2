#include<iostream>
#include<cstring>

using namespace std;

int strLength(const char *str);
char* strCopy(char *str, const char *cpy);
char* strConcatenate(char *str, const char *cat);
int strCompare(const char *str1, const char *str2);
char* strnCopy(char *str, const char *cpy, int n);
char* strnConcatenate(char *str, const char *cat, int n);
int strnCompare(const char* str1, const char* str2, int n);
char* strchrAdress(char* str, char chr);
char* strstringSearch(char* str1, char* str2);
void MakeEmpty(char* str);

int main(){

	int order;//메뉴얼변수
	int NewOld;//기존배열 사용여부 결정 변수 int형 선언
	int n=0;//새롭게 붙이거나 복사할 변수의 길이
	int length=0;
	char c;

	char str1[1024]={'\0', };//입력받을 문자열 배열 char형 선언 및 초기화
	char str2[1024]={'\0', };//입력받을 문자열 배열 char형 선언 및 초기화
	char comstr[1024]={'\0',};
	char* P=NULL;

	while(1){

		cin>>order;
		if(order==1){//strlen
			cin>>NewOld;
			while(1){
				if(NewOld==1){
					MakeEmpty(str1);
					cin.ignore();
					cin.getline(str1,1024);
					length=strLength(str1);
					cout<<"strlen: "<<str1<<" result: "<<length<<endl;
					break;
				}
				else if(NewOld==2){
					length=strLength(str1);
					cout<<"strlen: "<<str1<<" result: "<<length<<endl;
					break;
				}
				else{
					continue;
				}
			}

		}
		else if(order==2){//strcpy

			cin>>NewOld;
			while(1){
				if(NewOld==1){
					MakeEmpty(str1);
					cin.ignore();
					cin.getline(str1,1024);
					MakeEmpty(str2);
					break;
				}
				else if(NewOld==2){
					break;
				}
				else{
					continue;
				}
			}
			strCopy(str2, str1);
			cout<<"strcpy: "<<str1<<", "<<str2<<" result: "<<str2<<endl;
		}
		else if(order==3){//strcat

			cin>>NewOld;
			while(1){
				if(NewOld==1){
					MakeEmpty(str1);
					MakeEmpty(str2);
					cin.ignore();
					cin.getline(str1,1024);
					cin.getline(str2,1024);
					break;
				}
				else if(NewOld==2){
					break;
				}
				else{
					continue;
				}
			}
			strConcatenate(str1, str2);
			cout<<"strcat: "<<str1<<", "<<str2<<" result: "<<str1<<endl;
		}
		else if(order==4){//strcmp

			cin>>NewOld;
			while(1){
				if(NewOld==1){
					MakeEmpty(str1);
					MakeEmpty(str2);
					cin.ignore();
					cin.getline(str1,1024);
					cin.getline(str2,1024);
					break;
				}
				else if(NewOld==2){
					break;
				}
				else{
					continue;
				}
			}
			int result=strCompare(str1, str2);
			cout<<"strcmp: "<<str1<<", "<<str2<<" result: "<<result<<endl;
		}
		else if(order==5){//strncpy
			cin>>NewOld;
			while(1){
				if(NewOld==1){
					MakeEmpty(str1);
					MakeEmpty(str2);
					cin.ignore();
					cin.getline(str1,1024);
					break;
				}
				else if(NewOld==2){
					break;
				}
				else{
					continue;
				}
			}
			cin>>n;
			strnCopy(str2, str1, n);
			cout<<"strncpy: "<<str2<<", "<<str1<<", "<<n<<" result: "<<str2<<endl;
		}
		else if(order==6){//strncat

			cin>>NewOld;
			while(1){
				if(NewOld==1){
					MakeEmpty(str1);
					MakeEmpty(str2);
					cin.ignore();
					cin.getline(str1,1024);
					cin.getline(str2,1024);
					break;
				}
				else if(NewOld==2){
					break;
				}
				else{
					continue;
				}
			}
			cin>>n;
			strnConcatenate(str1, str2, n);
			cout<<"strncat: "<<str1<<", "<<str2<<", "<<n<<" result: "<<str1<<endl;
		}
		else if(order==7){//strncmp
			cin>>NewOld;
			while(1){
				if(NewOld==1){
					MakeEmpty(str1);
					MakeEmpty(str2);
					cin.ignore();
					cin.getline(str1,1024);
					cin.getline(str2,1024);
					break;
				}
				else if(NewOld==2){
					break;
				}
				else{
					continue;
				}
			}
			cin>>n;
			int result=strnCompare(str1, str2, n);
			cout<<"strncmp: "<<str1<<", "<<str2<<", "<<n<<" result: "<<result<<endl;
		}
		else if(order==8){//strchr
			cin>>NewOld;
			while(1){
				if(NewOld==1){
					MakeEmpty(str1);
					MakeEmpty(str2);
					cin.ignore();
					cin.getline(str1,1024);
					break;
				}
				else if(NewOld==2){
					break;
				}
				else{
					continue;
				}
			}
			cin>>c;
			P=strchrAdress(str1, c);
			cout<<"strchr: "<<str1<<", "<<c<<" result: "<<P<<endl;
			P=NULL;
			c='\0';
		}
		else if(order==9){//strstr
			cin>>NewOld;
			while(1){
				if(NewOld==1){
					MakeEmpty(str1);
					MakeEmpty(str2);
					cin.ignore();
					cin.getline(str1,1024);
					cin.getline(comstr,1024);
					break;
				}
				else if(NewOld==2){
					cin.ignore();
					cin.getline(comstr,1024);
					break;
				}
				else{
					continue;
				}
			}
			P=strstringSearch(str1, comstr);
			cout<<"strstr: "<<str1<<", "<<comstr<<" result: "<<P<<endl;
			P=NULL;
			MakeEmpty(comstr);
		}
		else if(order==10){//Exit the program
			break;
		}
		else{
			continue;
		}
	}
}

int strLength(const char *str){
	int i=0;

	for(i=0;i<1024;i++){
		if(str[i]=='\0'){
			break;
		}
	}

	return i;
}

char* strCopy(char *str, const char *cpy){
	int n=strLength(cpy);
	int i=0;

	for(i=0;i<n;i++){
		str[i]=cpy[i];
	}

	return str;
}

char* strConcatenate(char *str, const char *cat){

	int i=0;
	int n=strLength(str);
	int m=strLength(cat);

	for(i=n;i<n+m;i++){
		str[i]=cat[i-n];
	}

	return str;
}

int strCompare(const char *str1, const char *str2){
	int n=strLength(str2);
	int result;
	int i=0;

	for(i=0;i<n;i++){
		result+=(int)(str1[i]-str2[i]);
	}
	return result;
}

char* strnCopy(char *str, const char *cpy, int n){
	int i=0;

	for(i=0;i<n;i++){
		str[i]=cpy[i];
	}
	return str;
}

char* strnConcatenate(char *str, const char *cat, int n){

	int i=0;
	int m=strLength(str);

	for(i=m;i<n+m;i++){
		str[i]=cat[i-m];
	}

	return str;

}

int strnCompare(const char* str1, const char* str2, int n){

	int result;
	int i=0;

	for(i=0;i<n;i++){
		result+=(int)(str1[i]-str2[i]);
	}

	return result;
}

char* strchrAdress(char* str, char chr){
	int i=0;
	int n=strLength(str);
	char*p=NULL;

	for(i=0;i<n;i++){
		if(str[i]==chr)
		{
			p=&str[i];
			break;
		}
	}

	return p;
}

char* strstringSearch(char* str1, char* str2){
	int i,j=0;
	int n=strLength(str1);
	int m=strLength(str2);
	char*p=NULL;
	int YesorNo=1;

	for(i=0;i<n-m;i++){
		YesorNo=1+m;
		int length=0;
		for(j=i;j<i+m;j++){
			if(str1[j]==str2[length])
			{
				YesorNo--;
			}
			length++;
	    }
			if(YesorNo==1){
				p=&str1[j];
				break;
			}
		}
		for(i=0;i<m;i++){
			p--;
		}
		return p;
}

void MakeEmpty(char* str){

	int n=strLength(str);
	int i=0;

	for(i=0;i<n;i++){
		str[i]='\0';
	}

}