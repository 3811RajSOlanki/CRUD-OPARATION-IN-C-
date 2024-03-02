#include<iostream>
using namespace std;

int main(){

    int choice,size,pos ,elem ;

    cout << "Enter Array Size :";
    cin >> size ;
    int a[size];

    cout << "Enter Array elements :";

    for (int i=0;i<size;i++)
    {
       cout << "Enter a["<< i << "]:" ;
       cin >> a[i];
    }
    cout << endl <<endl << endl<<"============================================="<<endl<<endl << endl;

    do
    {
        cout << "Press 1 for Insert an element"<< endl;
        cout << "Press 2 for Update an element"<< endl;
        cout << "Press 3 for Delete an element"<< endl;
        cout << "Press 4 for View All element"<< endl;
        cout << "Press 0 for Exit"<< endl;


        cout << "Enter Your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
         
            cout << " Enter Position :";
            cin >> pos ;
            
            cout << " Enter New element :";
            cin >> elem ;
            for (int i=size-1;i>=pos;i--)
            {
                    a[i+1]=a[i];
            }
            size++;

            a[pos] = elem ;

             cout << " Element Inserted Successfully ";
             cout << endl;
            break;
        case 2:
            cout << " Enter Position :";
            cin >> pos ;
            cout << " Enter New element :";
            cin >> elem ;
            a[pos]= elem ;
             cout << " Updated Successfully ";
             break;
        case 3:
            cout << " Enter Position :";
            cin >> pos ;
            for ( int i=pos + 1;i<size;i++)
            {
                a[i-1] = a[i];
            }
            size--;
             cout << "Deleted Successfully ";
            break;

        case 4:
            cout << endl << "Array is :";
            for (int e : a)
            {
                cout << e << " "; 
            }
            cout << endl;

            break;
        
        default:

            break;


        }

    } while (choice != 0);
    

}