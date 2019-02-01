#include <iostream>
using namespace std;


    class add {
    public:
    int a,b;
    int convert(int *a, int *b )


        {
        return(*a+*b);
    }
};


    main() {
    add values;
    char reply;


        while (1) {
        system("cls");
        cout << "\n\n\t Addition Program Using Class and Pointers ";
        cout << "\n\n \t Created By: Kshitiz Saini";
        cout << "\n";
        cout << "\n\n Enter the first value : ";
        cin >> values.a;
        cout << "\n Enter the second value : ";
        cin >> values.b;
        cout << "\n\n";
        cout << " The total sum is ";
        cout << values.convert(&values.a,&values.b);
        cout << ".";
        cout <<"\n\n";
        cout << " More Y/N :=> ";
        cin >> reply;


            if (reply == 'N' || reply == 'n') {
            cout << "\n\n";
            cout << "\t Thank You For Using This Program :-D";
            break;
        }
    }
    cout << "\n\n\n\n";
    system("pause");
}
