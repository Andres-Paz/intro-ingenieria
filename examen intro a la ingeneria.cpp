#include <iostream>

using namespace std;

int main()
{
    string palabra;
    cout << "INGRESE SU MENSAJE" << endl;
    getline(cin, palabra);
    for(int i = 0; i < palabra.length(); i++)
    {
        if (palabra[i] == 'a')
        {
            palabra[i] = 1;
        }
        else if (palabra[i] == 'e')
        {
            palabra[i] = 2;
        }
        else if (palabra[i] == i)
        {
            palabra[i] = 3;
        }
        else if (palabra[i] == 'o')
        {
            palabra[i] = 4;
        }
        else if (palabra[i] == 'u')
        {
            palabra[i] = 5;
        }
        else if (palabra[i] == 'z')
        {
            palabra[i] = 'c';
        }
        else if (palabra[i] == 'c')
        {
            palabra[i] = 'z';
        }
          else if (palabra[i] == 'j')
        {
            palabra[i] = 'g';
        }
        else if (palabra[i] == 'g')
        {
            palabra[i] = 'j';
        }
        else if (palabra[i] == 'y')
        {
            palabra[i] = 'b';
        }
        else if (palabra[i] == 'y')
        {
            palabra[i] = 'i';
        }
        else if (palabra[i] == 'A')
        {
            palabra[i] == 1;
        }
        else if (palabra[i] == 'E')
        {
            palabra[i] == 2;
        }
        else if (palabra[i] == 'I')
        {
            palabra[i] = 3;
        }
        else if (palabra[i] == 'O')
        {
            palabra[i] = 4;
        }
        else if (palabra[i] == 'U')
        {
            palabra[i] = 5;
        }
        else
        {
           palabra[i]=palabra[i] + 2;
        }
    }
    cout<<endl<<endl;
    cout << "MENSAJE CIFRADO --------->" <<palabra<< endl;
    return 0;
}
