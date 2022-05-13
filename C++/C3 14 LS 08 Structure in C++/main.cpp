#include<iostream>
#include<conio.h>
using namespace std;
struct Book
{
    private:
	int bookid;
	char title[20];
	float price;
		
    public:
	void input()
	{
		cout<<"Enter BookID, Title & Price of Book: "<<endl;
		cin>>bookid;
		cin.ignore();
		cin.get(title,20);
		cin>>price;
		cout<<endl;
    }
	
	void display()
	{
		cout<<endl;
		cout<<"BookID: "<<bookid<<"\nTitle: "<<title<<"\nPrice: "<<price;
		cout<<endl;
	}
};
int main()
{
    Book b1, b2;
    b1.input();
    b2.input();
    b1.display();
    b2.display();
    return 0;
}
