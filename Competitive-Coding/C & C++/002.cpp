// program to find largest element in an array
#include<iostream>
using namespace std;
int largestElementInArray(int array[],int sizeOfArray)
{
    int i=0, lrg=0;
    for(i=0;i<sizeOfArray;i++)
    {
        if(lrg<array[i])
            lrg=array[i];
    }
    return lrg;
}
int main()
{
    int ary[]={23, 66, 3, 23, 67};
    int size = sizeof(ary)/sizeof(ary[0]);
    // cout<<size;
    cout<<"Largest element in array is: "<<largestElementInArray(ary,size);
    return 0;
}