//Student Name: Alexis Resendiz
//Teacher: Dr. Tyson McMillan
//Date: 04-10-2020
//A program to practice working with multi-dimensional arrays
#include <iostream>
using namespace std;

//New_York = 1,Oakland = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp
/*

City 1, Day 1: 56

City 1, Day 2: 59

City 1, Day 3: 68

City 1, Day 4: 59

City 1, Day 5: 47

City 1, Day 6: 53

City 1, Day 7: 53

City 2, Day 1: 59

City 2, Day 2: 59

City 2, Day 3: 43

City 2, Day 4: 42

City 2, Day 5: 39

City 2, Day 6: 45

City 2, Day 7: 47

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