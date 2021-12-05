#include <iostream>

using namespace std;

int main(){

	float initial_balance=0.0;//원금 변수 설정
	float interest=0.0;//연이자율 변수 설정
	float final_balance=0.0;//최종 원금 변수 설정

	cout.setf(ios::fixed);
	cout.precision(6);

	cin>>initial_balance;//cin객체를 이용하여 원금을 사용자로부터 받아줌
	cin>>interest;//cin객체를 이용하여 이자을 사용자로부터 받아줌

	final_balance=initial_balance+(initial_balance*interest/100.0);//1년후 잔고
	final_balance=final_balance+(final_balance*interest/100.0);//2년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//3년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//4년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//5년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//6년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//7년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//8년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//9년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//10년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//11년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//12년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//13년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//14년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//15년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//16년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//17년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//18년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//19년후 잔고
	final_balance=final_balance+(final_balance*interest/100.000000);//20년후 잔고

	cout<<"In case initial balance is "<< initial_balance << endl;//원금 출력(initial_valance 값 줄력)
	cout<<"and annual interest rate in "<< interest <<endl;//이자 퍼센트 출력(interest값 출력)
	cout<<"final balance after 20 years will be "<< final_balance;//최종원금 출력(final_balance변수)

	return 0;
}

