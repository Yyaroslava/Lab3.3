#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;  // вхідний аргумент 
    double R;  // вхідний параметр
    double y;  // результат обчислення виразу 

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    // розгалуження в повній формі  
    if (x <= -8 - R)
        y = R;
    else
        if (-8 - R <= x && x <= -8 + R)
            y = R - sqrt(R * R - (x + 8) * (x + 8));
        else
            if (-8 + R <= x && x <= -4)
                y = R;
            else
                if (-4 <= x && x <= 2)
                    y = R + (-1 - R) / 6 * (x + 4);
                else
                    y = x-3;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
