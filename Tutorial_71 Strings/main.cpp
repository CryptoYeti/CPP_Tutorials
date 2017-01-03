#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s1 = "This is a string";         // create string variable and assign it a value
    string s2("This is also a string");     // create a string and pass a value to its constructor

    cout << s1 << endl << s2 << endl;
    cout << s1[2] << s1.at(3) << endl;      //Element of string can be called by its array index or using at(position) function

    for(int x = 0; x < s1.length(); x++)    // use of string.length() function to get the length of string
    {
        cout << s1.at(x) << " ";            // use of at function to demonstrate working with individual elements
    }

    cout << endl;

    cout << s1.substr(10, 6) << endl;       // use of substring function to return portion of string

    cout << endl;

    string one("apples ");
    string two("oranges ");
    string three;
    three.assign(one);                      // use of assign operator to assign one string the value of another

    cout << one << two << three << endl;
    two.swap(three);                        // use of swap to swap one string with another
    cout << one << two << three << endl;

    cout << endl;

    string temp("ham is spam oh yes I am!");

    cout << temp.find("am") << endl;        // use of find function to find starting index of "am" query
    cout << temp.rfind("am") << endl;       // use of reverse find function
        cout << endl;
    cout << temp << endl;
    temp.erase(11);                         // use of erase function to remove characters from index 11 on.
    cout << temp << endl;
    temp.replace(7, 4, "great!");           // use of replace function; starting index, num of char to replace, replacement text
    cout << temp << endl;
    temp.replace(0, 3, one);                // replace with a string variable
    cout << temp << endl;
    temp.replace(7, 3, "are");              // replace is with are and also remove extra space added from "apples " string
    cout << temp << endl;
    three.insert(7, " and");                // use of insert to add " and" to string three to make it "oranges and"
    temp.insert(0, three);                  // insert new string three into temp string; two parameters starting position and string or text to add
    cout << temp << endl;

    return 0;
}
