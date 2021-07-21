#include <iostream>

using namespace std;

//int main()
//{
//    int a=5,b=4;
//    int c;
//    c=a+b;
//
//    cout << "value of c is "<< c << endl;
//    return 0;
//}


int main()
{
    int c;

    cout << "Enter Value :";
    cin >> c;

    if((c%2)==0)
    {
        cout << " EVEN " << endl;
    }else
    {
        cout << " ODD " << endl;
    }
    return 0;
}
