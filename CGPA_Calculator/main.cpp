#include <iostream>
using namespace std;
int main()
{
    float marks, points, hours, totalp = 0, totalh = 0, gpa;
    string course;
    cout << "Welcome to GPA Calculator" << endl;
    for (int i = 0;; i++)
    {
        cout << "Enter Course "
             << "#" << i + 1 << " name: ";
        cin >> course;
        if (course == "stop")
            break;
        cout << "Enter " << course << " Credit Hours: ";
        cin >> hours;
    mark:
        cout << "Enter " << course << "'s marks from 60 to 100: ";
        cin >> marks;
        if (marks <= 100 && marks >= 95)
            points = hours * 5.00;
        else if (marks < 95 && marks >= 90)
            points = hours * 4.75;
        else if (marks < 90 && marks >= 85)
            points = hours * 4.50;
        else if (marks < 85 && marks >= 80)
            points = hours * 4.00;
        else if (marks < 80 && marks >= 75)
            points = hours * 3.50;
        else if (marks < 75 && marks >= 70)
            points = hours * 3.00;
        else if (marks < 70 && marks >= 65)
            points = hours * 2.50;
        else if (marks < 65 && marks >= 60)
            points = hours * 2.00;
        else
        {
            cout << "Please Enter Correct marks" << endl;
            goto mark;
        }
        totalp += points;
        totalh += hours;
    }
    gpa = totalp / totalh;
    cout << "Your GPA is: " << gpa << "\n";

    system("pause");

    return 0;
}
