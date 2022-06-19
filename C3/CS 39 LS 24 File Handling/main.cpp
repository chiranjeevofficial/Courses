#include<fstream>
#include<conio.h>
#include<iostream>
using namespace std;
void writing()
{
    ofstream fout;
    fout.open("file.txt");
    fout<<"Hello I am Chiranjeev Kashyap";
    fout.close();
}
void reading()
{
    ifstream fin;
    fin.open("file.txt");
    char ch;
    if(!fin)
        cout<<"File not found...";
    else
    {
        fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            fin>>ch;
        }
    }
    fin.close();
}
int main()
{
    writing();
    reading();
}
