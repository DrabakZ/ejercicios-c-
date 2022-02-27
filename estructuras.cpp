#include <iostream>

using namespace std;

int main()
{
    struct personaje
    {
        int edad;
        int tel;
    }santiago;
    santiago.edad = 17;
    santiago.tel = 987987;
    cout << santiago.edad << endl;

    cin.get();
    return 0;
}