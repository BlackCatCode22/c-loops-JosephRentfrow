//StringsandLoops.cpp
//Joseph Rentfrow
//Aug 21, 2023

#include <iostream>
#include <string>

using namespace std;

int main()
{

    cout << "Welcome to the strings and loops practice! \n\n";

    string phrase = "The quick brown fox jumped over the lazy dog.";

    cout << "This is the practice phrase: " << phrase << "\n\n";
    cout << endl << phrase << "\n\n";
    cout << "The index of fox is: " << phrase.find("fox") << "\n\n";
    cout << "This is at index four: " << phrase.at(4) << "\n\n";
    cout << "This is the size of the of the phrase: " << phrase.size() << "\n\n";
    cout << "This is the append of the of the phrase with xyz: " << phrase.append("xyz") << "\n\n";
    cout << "This is the length of the phrase: " << phrase.length() << "\n\n";
    //clear()
    //cout << phrase.clear() << endl;
    if (phrase.empty())
    {
        cout << "This string is empty." << "\n\n";
    }
    else {
        cout << "This string is not empty." << "\n\n";
    }
    cout << "mySubstr(7,5) = " << phrase.substr(7, 5) << "\n\n";

    //the factorial of a number
    //example 6!
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int factorial = 1;

  //another way
  //for (int i = 1; i <= number; i++)
  //{
      //factorial = factorial * i;
  //}

    for (int i = number; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    cout << number << "!= " << factorial << "\n\n";


    return 0;
}
