#include<iostream>

using namespace std;

int gcd_while(int a, int b);//함수 gcd_while prototyping--while문이용
int gcd_rec(int a, int b);//함수 gcd_rec prototyping--재귀함수이용

int main(){

	long long n,m;//사용자에게 입력받을 변수 2개 선언

	cin>>n;
	cin>>m;
//cin 객체를 통해서 사용자로부터 변수 값을 받아줌

	cout<<"GCD Using Subtraction: "<<gcd_while(n,m)<< endl;
	cout<<"GCD Using Recursion: "<<gcd_rec(n,m);//cout 객체를 이용하여 결과값 출력
		
	return 0;
}

int gcd_while(int a, int b){//gcd를 구하는 함수(반복문이용)

	while(a!=0&&b!=0)//a나 b가 0이 아닐때 까지 반복문 실행
	{
		if(a>b)
		{
			a-=b;//a가 클경우 b를 뺌
		}
		else
		{
			b-=a;//b가 크거나 같을 경우 a를 뺌
		}
	}
	return a+b;//gcd값 반환
}
int gcd_rec(int a, int b){//gcd를 구하는 함수(재귀문 이용)

	if(a!=0&&b!=0)
	{
		if(a>=b)
		{
			return gcd_rec(a-b,b);//a가 b와같거나 b보다클때 a-b,b를 인자로 갖게끔 재귀로 호출
		}
		else
		{
			return gcd_rec(a,b-a);//b가 a보다 클때 b-a,a를 인자로 갖게끔 재귀로 호출
		}
	}
	else
	{
		return a+b;//gcd값 반환
	}
}
