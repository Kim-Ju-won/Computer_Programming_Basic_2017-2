//연속된 정수가 최댓값이 될 때를 출력해주는 프로그램
#include<iostream>

using namespace std;

int main(){

	int input=0;//사용자가 입력해줄 사이즈 변수 int형 선언
	int num[100]={0,};//사용자가 입력할 정수변수 int형선언
	int i,j,k=0;//for문에 쓰이는 세개의 변수 int형 선언
	int Max=0;//최댓값
	int sum=0;//summation값

	cin>>input;
//cin객체로 배열의 사이즈를 받아줌

	if(0<input&&input<=100)//사용자가 입력한 배열 사이즈가 1~100일때 프로그램이 돌아가도록 설정
	{
		for(i=0;i<input;i++){
			cin>>num[i];
		}//for문을 이용하여 정수를 input사이즈만큼 받아줌
		//i와 j를 이용하여 모든 연속된 변수를 구할 수 있는 3중 포문 구성
		for(i=0;i<input;i++)//i=처음 더할 배열의 인덱스 설정
		{
			for(j=i;j<input;j++)//j=끝 배열의 인텍스 설정
			{
				for(k=i;k<=j;k++)//k= i~j까지 더할 수 있도록설정
				{
					sum+=num[k];//num[i]~num[j]까지 더해줌
				}
				if(sum>Max)//더한값 sum이 Max보다 클때 Max의 값을 바꿔줌
				{
					Max=sum;
				}

				sum=0;//크기 비교뒤 초기화

			}
		}
		cout<<"Maximum summation is "<<Max;//cout객체를 이용하여 최댓값 출력
	}
	else{
		cout<<"input size error [0 < n <= 100]";//input값이0~100이 아닐때 cout객체를 이용해서 출력
	}

	return 0;
}
