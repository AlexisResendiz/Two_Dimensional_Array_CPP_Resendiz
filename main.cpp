//Student Name: Alexis Resendiz
//Teacher: Dr. Tyson McMillan
//Date: 04-10-2020
//A program to practice working with multi-dimensional arrays
#include <iostream>
using namespace std;

//New_York = 1, Oakland = 2

//Data Table

//City X, Day X: Temp
/*

New_York, Day 1: 56

New_York, Day 2: 59

New_York, Day 3: 68

New_York, Day 4: 59

New_York, Day 5: 47

New_York, Day 6: 53

New_York, Day 7: 53

Oakland, Day 1: 59

Oakland, Day 2: 59

Oakland, Day 3: 43

Oakland, Day 4: 42

Oakland, Day 5: 39

Oakland, Day 6: 45

Oakland, Day 7: 47

*/

int main()
{
      const int CITY = 2;
      const int WEEK = 7;
    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }
    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
    return 0;

}