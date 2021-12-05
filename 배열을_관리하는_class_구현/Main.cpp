//arrayclass를 작성하는 프로그램입니다.
#include<iostream>

using namespace std;

class arrayClass{//arrayClass
	private:
		long array[100000];//정수열 배열(1<=N<=100000까지 입력받을 수 있도록 크기 설정)int 형 배열선언
		int CurrentUsingArray;//현재 사용중인 배열의 개수를 나타내는 변수
	public:
		arrayClass();//기본 생성자
		~arrayClass();//기본 소멸자
		void put(long n);//배열에 데이터를 넣는 함수
		long Readntharray(int n);//배열의 n번째 데이터를 읽어오는 함수
		int UsingArray();//현재 사용중인 개수를 반환하는 함수
		void print();//배열의 내용을 출력하는 함수
};

arrayClass::arrayClass(){//기본 생성자
	for(int i;i<100000;i++){
		array[i]=0;
	}//초기값으로 다 0을 넣어줌
	CurrentUsingArray=0;//현재 사용중인 배열의 개수를 나타내는 변수를 0으로 초기화
}

arrayClass::~arrayClass(){//기본 소멸자

}
void arrayClass::put(long n){

	if(CurrentUsingArray>=100000){//배열의 개수를 한정된 용량보다 많이 쓰고 있을때
		cout<<"Error";//Error출력
	}
	else{//이외의 경우 n값을 비어있는 값부터 차례로 넣어주고 사용중인 배열의 크기를 1증가 시킨다.
		array[CurrentUsingArray]=n;
		CurrentUsingArray++;
	}

}
long arrayClass::Readntharray(int n){
	if(n>=CurrentUsingArray){//n이 사용중인 배열의 개수보다 클때
		return -9999;
	}
	else{//선언된 배열의 개수보다 이하일때 해당되는 값 반환
		return array[n];
	}
}

int arrayClass::UsingArray(){
	return CurrentUsingArray;//현재 사용중인 변수를 나타내는 멤버변수를 반환
}

void arrayClass::print(){//현재 사용중인 배열의 개수의 수를 반환
	for(int i=0;i<CurrentUsingArray;i++){
		cout<<array[i]<<" ";
	}
}

int main(){
	arrayClass Array;
	long input=0;//입력받을 숫자 저장할 int형 변수
	char order='\0';//사용자의 메뉴얼을 입력받는 char형 변수

	while(1){

		cin>>order;//사용자로부터 메뉴얼을 입력받도록 cin객체를 이용함

		if(order=='s'){//정수값을 입력받아 저장한다
			cin>>input;
			Array.put(input);
		}
		else if(order=='g'){//인덱스 값을 입력받아 그 위치에 있는 값을 출력한다
			cin>>input;
			if(Array.Readntharray(input)==-9999){//Error에 해당되는 값이 반환됬을때
				cout<<"Error"<<endl;
			}
			else{//그이외의 경우
				cout<<Array.Readntharray(input);
				cout<<endl;
			}
		}
		else if(order=='N'){//사용중인 데이터 개수 출력
			cout<<Array.UsingArray()<<endl;
		}
		else if(order=='p'){//배열의 내용 전체 출력
			Array.print();
			cout<<endl;
		}
		else if(order=='q'){//프로그램 종료
			break;
		}
		else{
			cout<<"Error"<<endl;//이외의 입력값에 대해서는 Error출력이후 while루프 처음으로 돌아가도록 설정
			continue;
		}

	}
	return 0;
}
