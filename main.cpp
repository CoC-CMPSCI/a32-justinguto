#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numFemale, numMale, numOthers;
    double percF, percM, percO;
    int total;

    cout << "Enter the number of students: Male, Female and Others";
    cin >> numMale >> numFemale >> numOthers;

    total = numMale + numFemale + numOthers;

    percM = (numMale / (double)total) * 100;
    percF = (numFemale / (double)total) * 100;
    percO = (numOthers / (double)total) * 100;

    cout << setprecision(2) << fixed;

    cout << "Percentage of Male: " << percM << endl;
    cout << "Percentage of Female: " << percF << endl;
    cout << "Percentage of Others: " << percO << endl;

    return 0;
}
