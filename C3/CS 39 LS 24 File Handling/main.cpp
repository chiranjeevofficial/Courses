#include<fstream>
#include<conio.h>
#include<iostream>
using namespace std;
void writing()
{
    ofstream fout;
    fout.open("file.txt");
    fout<<"I am Chiranjeev";
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
        fin.seekg(5);
        cout<<fin.tellg();
        ch=fin.get();
        while(fin.tellg()!=10)
        //while(!fin.eof())
        {
            cout<<"-"<<ch<<endl;
            cout<<fin.tellg();
            ch=fin.get();
        }
    }
    fin.close();
}
int main()
{
    writing();
    reading();
}
