
#include <iostream>
using namespace std;

int main()
{
    int subjects;
    float credits, gradePoint;
    float totalCredits = 0, totalGradePoints = 0, cgpa;

    cout << "===== CGPA Calculator =====" << endl;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    for (int i = 1; i <= subjects; i++)
    {
        cout << "\nSubject " << i << endl;

        cout << "Enter Credits: ";
        cin >> credits;

        cout << "Enter Grade Point (0-10): ";
        cin >> gradePoint;

        totalCredits += credits;
        totalGradePoints += (credits * gradePoint);
    }

    cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "CGPA = " << cgpa << endl;

    return 0;
}
