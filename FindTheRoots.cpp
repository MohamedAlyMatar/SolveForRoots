#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    bool answer = true;
    while (answer)
    {
        cout << "Hello RootMan!\n";
        cout << "\nWhat function do you want to calculate the roots for?\n\n";
        
        cout << "Choose:\n";
        cout << "1- Roots of Quadratic function\n";
        cout << "2- Roots of linear function with one variable\n";
        cout << "3- Roots of linear function with two variable\n";
        
        int c;
        cout << "\nChoice: ";
        cin >> c;

        if (c == 1)
        {
            double a, b, c, determinant, root1, root2;

            cout << "Enter the coeffiecents a,b,c of (a^2+ bx + c = 0), respectivly\n";
            cin >> a >> b >> c;

            determinant = (b * b) - (4 * a * c);

            if (determinant > 0)
            {
                root1 = (-b + sqrt(determinant)) / (2 * a);
                root2 = (-b - sqrt(determinant)) / (2 * a);

                cout << "root 1 is " << root1 << endl;
                cout << "root 2 is " << root2 << endl;
            }
            else if (determinant == 0)
            {
                root1 = -b / 2 * a;
                root2 = root1;

                cout << "root 1 is " << root1 << endl;
                cout << "root 2 is " << root2 << endl;
            }
            else
            {
                int realPart = (-b / 2 * a);
                int imaginePart = (sqrt(-determinant)) / (2 * a);
                cout << "root 1 is " << realPart << "+(" << imaginePart << ")i" << endl;
                cout << "root 2 is " << realPart << "-(" << imaginePart << ")i" <<endl;
            }
        }
        else if (c == 2)
        {
            float a, b, root;

            cout << "Enter the coeffiecents a,b of (ax + b = 0), respectivly\n";
            cin >> a >> b;

            root = -b / a;

            cout << "The only solution is " << root << endl;
        }
        else
        {
            float a, b, c, a2, b2, c2, x, y, rootX, rootY;

            cout << "Enter the coeffiecents a,b,c of the 1st function (ax + by = c), respectivly\n";
            cin >> a >> b >> c;

            cout << "Enter the coeffiecents a2,b2,c2 of the 2nd function (ax + by = c), respectivly\n";
            cin >> a2 >> b2 >> c2;

            if (a == 0 && b == 0 || a2 == 0 && b2 == 0)
            {
                cout << "No Solution!!!";
            }
            else
            {
                rootX = ((c * b2) - (b * c2)) / ((a * b2) - (b * a2));
                rootY = ((a * c2) - (c * a2)) / ((a * b2) - (b * a2));
            }

            cout << "Solution x is " << rootX << endl;
            cout << "Solution Y is " << rootY << endl;
        }

        cout << "Do you want to calculate again? (Y or N)\n";
        char a;
        cin >> a;

        if (a == 'N' || a == 'n')
        {
            cout << "Good Bye!\n";
            answer = false;
        }
        cout << endl;
    }

    return 0;
}