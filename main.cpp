#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
int main()
{
	string val = "Insert string here";
    string store;
    size_t pointer = val.length() - 1;
    
    cout << "First string is: " << val << endl;
    
    while (pointer > 0) {  //while loop stores every string 
                            //val until first one is reached first one is reached
        store += val.at(pointer);
        pointer--;
    }
    store += val.at(0);     // stores the first string val
    cout << "Reversed string is: " << store << endl;    //prints the reversed string
	return 0;
}
