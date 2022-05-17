#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class Book
{
private:
    int bookID;
    float bookPrice;
    char bookBranch[10];
    char bookAuthor[20];
public:
    Book()
    {
        bookID=0;
        bookPrice=0.0;
        strcpy(bookBranch,"undefined");
        strcpy(bookAuthor,"undefined");
    }

    void showBookDetails()
    {
        cout<<"Book Details: "<<endl;
        cout<<" - BOOK ID     : "<<bookID<<endl;
        cout<<" - Book Price  : "<<bookPrice<<endl;
        cout<<" - Book Branch : "<<bookBranch<<endl;
        cout<<" - Book Author : "<<bookAuthor<<endl<<endl;
    }
};

int main()
{
    int n=0;
    cout<<"Enter total number of Books: ";
    cin>>n;
    Book B[n];
    int i;
    for(i=0;i<n;i++)
    {
        B[i].showBookDetails();
    }
    return 0;
}
