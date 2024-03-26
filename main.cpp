#include <iostream>

using namespace std;

int main()
{
    int n, ogl=0, copie_n;
    cout<<"introduceti un numar: ";
    cin>>n;
    copie_n=n;
    while (n!=0)
    {
        ogl=ogl*10+n%10;
        n=n/10;
    }
    cout<<"oglinditul nr este: "<<ogl<<endl;
    if(copie_n==ogl)
        cout<<"numarul este palindrom: ";
        else
            cout<<"numarul  NU este palindrom; ";









    return 0;
}
