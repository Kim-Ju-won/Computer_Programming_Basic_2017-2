//책에 대한 클래스의 정의 및 상속을 이용한 다양한 책의 종류를 클래스로 정의한 프로그램
#include<iostream>
#include<string>

using namespace std;

/////////////////////////////////////Book SuperClass////////////////////////////////////////////////////
class Book{//Book클래스
	protected:
		string name;//책 이름
		string author;//작가 이름
		string publisher;//출판사
		int price;//가격
		double gradePoint;//평점
		int year,month,day;
	public:
		Book(string name, string author, string publisher, int price, double gradePoint,int year, int month, int day);//책객체 생성자
		Book();//생성자
		~Book();//소멸자
		void setname(string name);//책 이름 변수 제어자
		void setauthor(string author);//작가 이름 변수 제어자
		void setpublisher(string publisher);//출판사 변수 제어자
		void setprice(int price);//가격 변수 제어자
		void setgradePoint(int gradePoint);//평점 변수 제어자
		void setyear(int year);//연도 변수 제어자
		void setmonth(int month);//월 변수 제어자
		void setday(int day);//일 변수 제어자
		string getname();//책 이름 변수 접근자
		string getauthor();//작가이름 변수 접근자
		string getpublisher();//출판사 변수 접근자
		int getprice();//가격 변수 접근자
		double getgradePoint();//평점 변수 접근자
		void display();//전체 값을 보여주는 함수
		int getyear();//연도 변수 접근자
		int getmonth();//월 변수 접근자
		int getday();//일 변수 접근자
};
Book::Book(){//초기값제어자
	this->name="";
	this->author="";
	this->publisher="";
	this->price=0;
	this->gradePoint=0;
	this->year=0;
	this->month=0;
	this->day=0;
}
Book::Book(string name, string author, string publisher, int price, double gradePoint,int year, int month, int day){//생성자
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->year=year;
	this->month=month;
	this->day=day;
}
Book::~Book(){//소멸자

}

string Book::getname(){
	return name;
}
void Book::setname(string name){
	this->name=name;
}
////name변수에 대한 접근자 및 제어자

string Book::getauthor(){
	return author;
}
void Book::setauthor(string author){
	this->author=author;
}
////author변수에 대한 접근자 및 제어자

string Book::getpublisher(){
	return author;
}
void Book::setpublisher(string publisher){
	this->publisher=publisher;
}
////publisher변수에 대한 접근자 및 제어자

int Book::getprice(){
	return price;
}
void Book::setprice(int price){
	this->price=price;
}
////price변수에 대한 접근자 및 제어자

double Book::getgradePoint(){
	return gradePoint;
}
void Book::setgradePoint(int gradePoint){
	this->gradePoint=gradePoint;
}
////gradePoint변수에 대한 접근자 및 제어자

int Book::getyear(){
	return year;
}
void Book::setyear(int year){
	this->year=year;
}
////year변수에 대한 접근자 및 제어자

int Book::getmonth(){
	return month;
}
void Book::setmonth(int month){
	this->month=month;
}
////month변수에 대한 접근자 및 제어자

int Book::getday(){
	return day;
}
void Book::setday(int day){
	this->day=day;
}
////day변수에 대한 접근자 및 제어자
void Book::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<endl;
}
////////////////////////Novel sub class////////////////////////
class Novel: public Book{
	protected:
		bool NovelDecisior;
	public:
		Novel(string name, string author, string publisher, int price, double gradePoint,bool NovelDecisior, int year, int month, int day);//Novel생성자
		Novel();
		~Novel();//소멸자
		void setNovelDecisior(bool D);
		bool getNovelDecisior();
		void display();//함수 overriding
};
Novel::Novel(){
	this->name="";
	this->author="";
	this->publisher="";
	this->price=0;
	this->gradePoint=0;
	this->year=0;
	this->month=0;
	this->day=0;
	this->NovelDecisior=true;
}
Novel::Novel(string name, string author, string publisher, int price, double gradePoint,bool NovelDecisior, int year, int month, int day){//생성자
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->NovelDecisior=NovelDecisior;
	this->year=year;
	this->month=month;
	this->day=day;
}
Novel::~Novel(){

}
bool Novel::getNovelDecisior(){
	return NovelDecisior;
}
void Novel::setNovelDecisior(bool D){
	this->NovelDecisior=D;
}
////NovelDecisior변수에 대한 접근자 및 제어자
void Novel::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<"소설"<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<endl;
}
////////////////////////Essay sub class////////////////////////
class Essay: public Book{
	protected:
		bool EssayDecisior;
	public:
		Essay(string name, string author, string publisher, int price, double gradePoint,bool EssayDecisior, int year, int month, int day);//Essay생성자
		Essay();
		~Essay();//소멸자
		void setEssayDecisior(bool D);
		bool getEssayDecisior();
		void display();//함수 overriding
};
Essay::Essay(){
	this->name="";
	this->author="";
	this->publisher="";
	this->price=0;
	this->gradePoint=0;
	this->year=0;
	this->month=0;
	this->day=0;
	this->EssayDecisior=true;
}
Essay::Essay(string name, string author, string publisher, int price, double gradePoint,bool EssayDecisior, int year, int month, int day){//생성자
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->EssayDecisior=EssayDecisior;
	this->year=year;
	this->month=month;
	this->day=day;
}
Essay::~Essay(){

}
bool Essay::getEssayDecisior(){
	return EssayDecisior;
}
void Essay::setEssayDecisior(bool D){
	this->EssayDecisior=D;
}
////EssayDecisior변수에 대한 접근자 및 제어자
void Essay::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<"수필"<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<endl;
}

////////////////////////Magazine sub class////////////////////////
class Magazine: public Book{
	protected:
		bool MagazineDecisior;
	public:
		Magazine(string name, string author, string publisher, int price, double gradePoint,bool MagazineDecisior, int year, int month, int day);//Magazine생성자
		Magazine();
		~Magazine();//소멸자
		void setMagazineDecisior(bool D);
		bool getMagazineDecisior();
		void display();//함수 overriding
};
Magazine::Magazine(){
	this->name="";
	this->author="";
	this->publisher="";
	this->price=0;
	this->gradePoint=0;
	this->year=0;
	this->month=0;
	this->day=0;
	this->MagazineDecisior=true;
}
Magazine::Magazine(string name, string author, string publisher, int price, double gradePoint,bool MagazineDecisior, int year, int month, int day){//생성자
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->MagazineDecisior=MagazineDecisior;
	this->year=year;
	this->month=month;
	this->day=day;
}
Magazine::~Magazine(){

}
bool Magazine::getMagazineDecisior(){
	return MagazineDecisior;
}
void Magazine::setMagazineDecisior(bool D){
	this->MagazineDecisior=D;
}
////MagazineDecisior변수에 대한 접근자 및 제어자

void Magazine::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<"잡지"<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<endl;
}
////////////////////////Textbook sub class////////////////////////
class Textbook: public Book{
	protected:
		bool TextbookDecisior;
	public:
		Textbook(string name, string author, string publisher, int price, double gradePoint,bool TextbookDecisior, int year, int month, int day);//Textbook생성자
		Textbook();
		~Textbook();//소멸자
		void setTextbookDecisior(bool D);
		bool getTextbookDecisior();
		void display();//함수 overriding
};
Textbook::Textbook(){
	this->name="";
	this->author="";
	this->publisher="";
	this->price=0;
	this->gradePoint=0;
	this->year=0;
	this->month=0;
	this->day=0;
	this->TextbookDecisior=true;
}
Textbook::Textbook(string name, string author, string publisher, int price, double gradePoint,bool TextbookDecisior, int year, int month, int day){//생성자
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->TextbookDecisior=TextbookDecisior;
	this->year=year;
	this->month=month;
	this->day=day;
}
Textbook::~Textbook(){

}
bool Textbook::getTextbookDecisior(){
	return TextbookDecisior;
}
void Textbook::setTextbookDecisior(bool D){
	this->TextbookDecisior=D;
}
////TextbookDecisior변수에 대한 접근자 및 제어자
void Textbook::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<"교재"<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<endl;
}
////////////////////////Non_Literacy sub class////////////////////////
class Non_Literacy: public Book{
	protected:
		bool Non_LiteracyDecisior;
	public:
		Non_Literacy(string name, string author, string publisher, int price, double gradePoint,bool Non_LiteracyDecisior, int year, int month, int day);//Non_Literacy생성자
		~Non_Literacy();//소멸자
		Non_Literacy();
		void setNon_LiteracyDecisior(bool D);
		bool getNon_LiteracyDecisior();
		void display();//함수 overriding
};
Non_Literacy::Non_Literacy(){
	this->name="";
	this->author="";
	this->publisher="";
	this->price=0;
	this->gradePoint=0;
	this->year=0;
	this->month=0;
	this->day=0;
	this->Non_LiteracyDecisior=true;
}
Non_Literacy::Non_Literacy(string name, string author, string publisher, int price, double gradePoint,bool Non_LiteracyDecisior, int year, int month, int day){//생성자
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->Non_LiteracyDecisior=Non_LiteracyDecisior;
	this->year=year;
	this->month=month;
	this->day=day;
}
Non_Literacy::~Non_Literacy(){

}
bool Non_Literacy::getNon_LiteracyDecisior(){
	return Non_LiteracyDecisior;
}
void Non_Literacy::setNon_LiteracyDecisior(bool D){
	this->Non_LiteracyDecisior=D;
}
////Non_LiteracyDecisior변수에 대한 접근자 및 제어자
void Non_Literacy::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<"비문학"<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<endl;
}
////////////////////////Novel-BestSeller sub class////////////////////////
class Novel_BestSeller: public Novel{
	protected:
		bool bestseller;
	public:
		Novel_BestSeller(string name, string author, string publisher, int price, double gradePoint,bool NovelDecisior, int year, int month, int day);//Novel생성자
		~Novel_BestSeller();//소멸자
		void setbestseller(bool B);
		bool getbestseller();
		void display();//함수 overriding
};
Novel_BestSeller::Novel_BestSeller(string name, string author, string publisher, int price, double gradePoint,bool NovelDecisior, int year, int month, int day){
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->NovelDecisior=NovelDecisior;
	this->year=year;
	this->month=month;
	this->day=day;
	this->bestseller=true;
}

Novel_BestSeller::~Novel_BestSeller(){

}
bool Novel_BestSeller::getbestseller(){
	return bestseller;
}
void Novel_BestSeller::setbestseller(bool B){
	this->bestseller=B;
}
////Bestseller변수에 대한 접근자 및 제어자
void Novel_BestSeller::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<"소설"<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<"\t"<<"베스트셀러"<<endl;
}
////////////////////////Essay-BestSeller sub class////////////////////////
class Essay_BestSeller: public Essay{
	protected:
		bool bestseller;
	public:
		Essay_BestSeller(string name, string author, string publisher, int price, double gradePoint,bool EssayDecisior, int year, int month, int day);//Essay생성자
		~Essay_BestSeller();//소멸자
		void setbestseller(bool B);
		bool getbestseller();
		void display();//함수 overriding
};
Essay_BestSeller::Essay_BestSeller(string name, string author, string publisher, int price, double gradePoint,bool EssayDecisior, int year, int month, int day){
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->EssayDecisior=EssayDecisior;
	this->year=year;
	this->month=month;
	this->day=day;
	this->bestseller=true;
}

Essay_BestSeller::~Essay_BestSeller(){

}
bool Essay_BestSeller::getbestseller(){
	return bestseller;
}
void Essay_BestSeller::setbestseller(bool B){
	this->bestseller=B;
}
////Bestseller변수에 대한 접근자 및 제어자
void Essay_BestSeller::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<"소설"<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<"\t"<<"베스트셀러"<<endl;
}
////////////////Magazine-BestSeller//////////////////
class Magazine_BestSeller: public Magazine{
	protected:
		bool bestseller;
	public:
		Magazine_BestSeller(string name, string author, string publisher, int price, double gradePoint,bool MagazineDecisior, int year, int month, int day);//Magazine생성자
		~Magazine_BestSeller();//소멸자
		void setbestseller(bool B);
		bool getbestseller();
		void display();//함수 overriding
};
Magazine_BestSeller::Magazine_BestSeller(string name, string author, string publisher, int price, double gradePoint,bool MagazineDecisior, int year, int month, int day){
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->MagazineDecisior=MagazineDecisior;
	this->year=year;
	this->month=month;
	this->day=day;
	this->bestseller=true;
}

Magazine_BestSeller::~Magazine_BestSeller(){

}
bool Magazine_BestSeller::getbestseller(){
	return bestseller;
}
void Magazine_BestSeller::setbestseller(bool B){
	this->bestseller=B;
}
////Bestseller변수에 대한 접근자 및 제어자
void Magazine_BestSeller::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<"잡지"<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<"\t"<<"베스트셀러"<<endl;
}
////////////Textbook-BestSeller/////////////////
class Textbook_BestSeller: public Textbook{
	protected:
		bool bestseller;
	public:
		Textbook_BestSeller(string name, string author, string publisher, int price, double gradePoint,bool TextbookDecisior, int year, int month, int day);//Textbook생성자
		~Textbook_BestSeller();//소멸자
		void setbestseller(bool B);
		bool getbestseller();
		void display();//함수 overriding
};
Textbook_BestSeller::Textbook_BestSeller(string name, string author, string publisher, int price, double gradePoint,bool TextbookDecisior, int year, int month, int day){
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->TextbookDecisior=TextbookDecisior;
	this->year=year;
	this->month=month;
	this->day=day;
	this->bestseller=true;
}

Textbook_BestSeller::~Textbook_BestSeller(){

}
bool Textbook_BestSeller::getbestseller(){
	return bestseller;
}
void Textbook_BestSeller::setbestseller(bool B){
	this->bestseller=B;
}
////Bestseller변수에 대한 접근자 및 제어자
void Textbook_BestSeller::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<"교재"<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<"\t"<<"베스트셀러"<<endl;
}
////////////Non_Literacy-BestSeller/////////////////
class Non_Literacy_BestSeller: public Non_Literacy{
	protected:
		bool bestseller;
	public:
		Non_Literacy_BestSeller(string name, string author, string publisher, int price, double gradePoint,bool Non_LiteracyDecisior, int year, int month, int day);//Non_Literacy생성자
		~Non_Literacy_BestSeller();//소멸자
		void setbestseller(bool B);
		bool getbestseller();
		void display();//함수 overriding
};
Non_Literacy_BestSeller::Non_Literacy_BestSeller(string name, string author, string publisher, int price, double gradePoint,bool Non_LiteracyDecisior, int year, int month, int day){
	this->name=name;
	this->author=author;
	this->publisher=publisher;
	this->price=price;
	this->gradePoint=gradePoint;//매개변수와 변수이름이 같으므로 this포인터 사용
	this->Non_LiteracyDecisior=Non_LiteracyDecisior;
	this->year=year;
	this->month=month;
	this->day=day;
	this->bestseller=true;
}

Non_Literacy_BestSeller::~Non_Literacy_BestSeller(){

}
bool Non_Literacy_BestSeller::getbestseller(){
	return bestseller;
}
void Non_Literacy_BestSeller::setbestseller(bool B){
	this->bestseller=B;
}
////Bestseller변수에 대한 접근자 및 제어자
void Non_Literacy_BestSeller::display(){
	cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<gradePoint<<"\t"<<"비문학"<<"\t"<<year<<"년"<<month<<"월"<<day<<"일"<<"\t"<<"베스트셀러"<<endl;
}

/*
 * 가장상위에 있는 SuperClass: Book
 * 바로 아래에 있는 SubClass: Novel, Magazine, Essay, Textbook, Non_Literacy 각각을 판별해주는 boolean변수가 존재 함
 * 가장 아래에 있는 subClass: 각각 Novel, Magazine, Essay, Textbook, Non_Literacyd의 베스트셀러를 알려주는
 *  Novel_Best, Magazine_Best, Essay_Best, Textbook, Non_Literacy_Best_Best-bestseller, Non_Literacy_Best라는 boolean변수가 존재함
 */

int main(){

	cout.setf(ios::fixed);
	cout.precision(2);//평점값 두자리로 출력

	Book mybook("해커스 토익 리스닝","David Cho","해커스 어학 연구소", 18800,8.13,2016,3,21);
	Novel novel("그 개와 같은 말","임현","현대문학", 11700,8.00,true,2017,10,13);
	Novel_BestSeller bestnovel("82년생 김지영","조남주","민음사",11700,8.00,true,2016,10,14);
	Essay_BestSeller bestessay("신경끄기 기술","마크맨슨","갤리온",13500,8.00,true,2017,10,27);
	Non_Literacy_BestSeller bestliteracy("정재승의 과학 콘서트","정재승", "어크로스", 12150, 8.00,true,2011,7,8);
	cout<<"---------------------------------bookclass 출력문-----------------------------------"<<endl;
	cout<<"책이름\t\t저자\t\t출판사\t\t가격\t평점\t출시일"<<endl;
	mybook.display();
	cout<<"---------------------------------subclass(책종류)출력문-------------------------------"<<endl;
	cout<<"책이름\t\t저자\t출판사\t가격\t평점\t책종류\t출시일"<<endl;
	if(novel.getNovelDecisior()){novel.display();}
	cout<<"---------------------------------BestSeller 출력문----------------------------------"<<endl;
	cout<<"책이름\t\t저자\t출판사\t가격\t평점\t책종류\t출시일"<<endl;
	if(bestnovel.getbestseller()){bestnovel.display();}
	if(bestessay.getbestseller()){bestessay.display();}
	if(bestliteracy.getbestseller()){bestliteracy.display();}
	return 0;
}