#include<iostream>

using namespace std;

int main(){
	int initial_hour,initial_minute,initial_second;//처음 시각, 분, 초 int형 타입 변수 설정
	int hour,minute,second;//흘러간 시간,분,초 설정
	int time;//계산을 위한 임의의 변수 time을 설정
	int final_hour,final_minute,final_second;//최종 시간,분,초 값출력

	cin>>initial_hour;//cin객체를 이용하여 사용자로 부터 시각 변수를 받아줌
	cin>>initial_minute;//cin객체를 이용하여 사용자로 부터 분 변수를 받아줌
	cin>>initial_second;//cin객체를 이용하여 사용자로 부터 초 변수를 받아줌

	cin>>hour;//cin객체를 이용하여 사용자로 부터 흘러간 시간 변수를 받아줌
	cin>>minute;//cin객체를 이용하여 사용자로 부터 흘러간 분 변수를 받아줌
	cin>>second;//cin객체를 이용하여 사용자로 부터 흘러간 초 변수를 받아줌

	time=3600*initial_hour+3600*hour+60*initial_minute+60*minute+initial_second+second;//흘러간 시간과 현재시간을 초단위로 바꾸어 더하기 위하여 시간에는 3600은 분에는 60을 곱하여 초와 함께 더해줌

	final_hour=time/3600;//최종시각 계산
	time-=final_hour*3600;//최종분출력을 위해 시간값을 뺌
	final_minute=time/60;//최종 분 계산
	time-=final_minute*60;//최종 초 출력을 위해 분값을 뺌
	final_second=time;//최종 초 계산

	cout<<initial_hour<<":"<<initial_minute<<":"<<initial_second<<" after "<<hour<<":"<<minute<<":"<<second<<" will be "<<final_hour<<":"<<final_minute<<":"<<final_second;
//cout객체를 통해 최종 답안 출력
	return 0;
}
