 #include <iostream>
#include <string> // Include the string library
using namespace std;
 
struct college_info {
    string college_name;
    string college_code;
    string dept;
    int intake;
};

int main() {
  
    struct college_info c;
    c.college_name = "GP junagadh";
    c.college_code = "a123";
    c.dept = "computer department";
    c.intake = 75;
     
    cout << "Name of the college: " << c.college_name << endl;
    cout << "college University Code: " << c.college_code << endl;
    cout << "Name of the Department: " << c.dept << endl;
    cout << "The department of " << c.dept << " has an in-take of: " << c.intake << endl;
     

    return 0;
}


