#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class ArrayADT
{
private:
    int ary[10], lastIndex=0, capacity=10;
public:
    void insert(int data)
    {
        if(lastIndex<capacity)
        {
            ary[lastIndex]=data;
            lastIndex++;
        }
        else
            cout<<"Array is Full"<<endl;
    }
    void update(int index, int data)
    {
        if(index<capacity)
            ary[index]=data;
        else
            cout<<index<<" is invalid index"<<endl<<endl;
    }

    void deleteValue(int data, int index)
    //its function take data & index by user from deletion
    {
        if(index<=lastIndex&&ary[index]==data)
        {
            for(index;index<lastIndex;index++)
            {
                ary[index]=ary[index+1];
            }
            lastIndex--;
            cout<<"Value Delete"<<endl<<endl;
        }
        else
            cout<<"Invalid Index & Value"<<endl<<endl;
    }

    void deleteValue(int data)
    //its function take only data by user, If the data is in the array, the function will delete it.
    {
        if(checkIndex(data)==true)
        {
            int index = findIndex(data);
            for(index;index<lastIndex;index++)
            {
                ary[index]=ary[index+1];
            }
            lastIndex--;
            cout<<"Value Delete"<<endl<<endl;
        }
        else
            cout<<"Invalid Index & Value"<<endl<<endl;
    }

    void appendl(int index, int data)
    {
        if(lastIndex<capacity&&index<=lastIndex)
        {
            int i=lastIndex;
            for(i;i>=index;i--)
            {
                ary[i]=ary[i-1];
            }
            ary[index]=data;
            lastIndex++;
        }
        else
            cout<<"Array is Full";
    }

    int findIndex(int data)
    {
        int i;
        for(i=0;i<=lastIndex;i++)
        {
            if(ary[i]==data)
                break;
        }
        return i;
    }

    bool checkIndex(int data)
    {
        int i;
        for(i=0;i<=lastIndex;i++)
        {
            if(ary[i]==data)
                return true;
        }
        return false;
    }

    void showArray(void)
    {
        int i;
        cout<<"Array Value: \n"<<"> [";
        for(i=0;i<lastIndex;i++)
        {
            cout<<ary[i]<<", ";
        }
        cout<<"\b\b]"<<endl<<endl;
        getch();
    }

    void showArrayWithIndex(void)
    {
        int i;
        cout<<"Array Value: \n";
        for(i=0;i<lastIndex;i++)
        {
            cout<<"ArrayADT["<<i<<"] = "<<ary[i]<<endl;
        }
        cout<<endl;
        getch();
    }

    void menu()
    {
        start:
        system("cls");
        int n, data, index;
        cout<<endl;
        cout<<"1. Insert data in ArrayADT"<<endl;
        cout<<"2. Delete data in ArrayADT"<<endl;
        cout<<"3. Update data in ArrayADT"<<endl;
        cout<<"4. Appendl data in ArrayADT"<<endl;
        cout<<"5. Show ArrayADT items data in ArrayADT"<<endl;
        cout<<"6. Show ArrayADT items with indexs Insert data in ArrayADT"<<endl;
        cout<<"9. For Exit"<<endl;
        cout<<">> Enter your choice: ";
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter +ve value to insert in Array: ";
            cin>>data;
            insert(data);
            getch();
            goto start;
            break;

        case 2:
            cout<<"1. Delete item by data"<<endl;
            cout<<"2. Delete item by index & data"<<endl;
            cin>>n;
            switch (n)
            {
                case 1:
                    cout<<"Enter data for delete in Array: ";
                    cin>>data;
                    deleteValue(data);
                    break;
                case 2:
                    cout<<"Enter index & data for delete in Array";
                    cin>>index>>data;
                    deleteValue(data,index);
                default:
                    break;
            }
            getch();
            goto start;
            break;

        case 3:
            cout<<"Enter index & data for update item in Array: ";
            cin>>index>>data;
            update(index,data);
            goto start;
            break;

        case 4:
            cout<<"Enter index & data for append item in Array: ";
            cin>>index>>data;
            appendl(index,data);
            getch();
            goto start;
            break;

        case 5:
            showArray();
            getch();
            goto start;
            break;

        case 6:
            showArrayWithIndex();
            getch();
            goto start;
            break;
        
        case 9:
            cout<<"Thank You";
            getch();
            exit;
            break;

        default:
            cout<<"Enter correct choice ->";
            goto start;
            break;
        }
    }
};

int main()
{
    ArrayADT a;
    a.menu();
    return 0;
}
