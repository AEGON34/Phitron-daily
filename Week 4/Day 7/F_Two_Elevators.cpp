#include <iostream>
#include <cmath> // For abs function
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;

        int time_first_elevator = abs(a - 1);

        int time_second_elevator;

        if (b == 1)
        {

            time_second_elevator = abs(c - 1);
        }
        else
        {

            time_second_elevator = abs(b - c) + abs(c - 1);
        }

        if (time_first_elevator < time_second_elevator)
        {
            cout << "1" << endl;
        }
        else if (time_first_elevator > time_second_elevator)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }

    return 0;
}
