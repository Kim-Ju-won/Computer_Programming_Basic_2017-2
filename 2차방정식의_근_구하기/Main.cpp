#include<iostream>//c++헤더파일
#include<cmath>//sqrt,pow함수를 이용하기위해 cmath라이브러리를 열어놓음

using namespace std;

int main(){
	float a,b,c=0;//계수변수 float형으로 선언
	float discriminant=0;//판별식으로 활용할 변수 float형으로 선언
	float solution1,solution2=0;//근 변수 float형으로 선언

	cout.setf(ios::fixed);
	cout.precision(6);//goorm시스템에서 6자리까지 소수점이 나와있으므로 precision을이용하여 6자리까지 출력하도록 설정

	cin>>a;
	cin>>b;
	cin>>c;
//cout 객체로 ppt에 나와있는 출력양식대로 코딩하고 cin 객체로 계수변수 a,b,c의 값을 사용자로부터 받아줌
	discriminant=pow(b,2)-(4*a*c);
//b^2-4ac판별식을 연산자와 cmath의 pow함수를 통해 계산하여 판별식에 해당하는 변수에 대입
	if(discriminant>0)//판별식이 0보다 클때(2개의 근)
	{
		solution1=(-b+sqrt(discriminant))/(2*a);//첫번째 근 계산
		solution2=(-b-sqrt(discriminant))/(2*a);//두번째 근 계산
		cout<<"solution = "<<solution1<<endl;//첫번째 근 출력
		cout<<"solution = "<<solution2;//두번째 근 출력
	}
	else if(discriminant==0)//판별식이 0일때(중근)
	{
		solution1=((-b)/(2*a));//중근 계산
		cout<<"solution = "<<solution1<<endl;//중근 출력
	}
	else//판별식이 0보다 작을때 
	{
		cout<<"no solution"<<endl;//해가없음을 cout객체를 이용하여 출력
	}
	
	return 0;
}
