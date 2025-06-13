#include <iostream>
#include <vector>
#include "ToDo.cpp"
using namespace std;
//Do I wanna add a header File and cpp File?

int main()
{
    vector<string> toDoList;
    
    int num = 0;
    
    cout << "Hello and Welcome to your to do list." << endl;
    cout << "To add a task please enter 1." << endl;
    cout << "To take out a task please enter 2." << endl;
    cout << "To view the list please enter 3." << endl;
    cout << "To leave this program please enter 4." << endl;
    cout << "Please select what you would like to do: ";
    cin >> num;
    
    while(num < 1 || num > 4)
    {
        cout << "number entered was incorrect please select if you would like to add or take out a task: ";
        cin >> num;
    }
    
    switch(num){
        case 1:
        //adding to task list(try making a function to add and inform them that item has been added)
        case 2:
        //taking away from list
        case 3:
        //to view the list
        case 4:
        //to leave the program
        //should consist of a break to leave the switch run if need be
    }

    //will need to add another delete for this current vector so it deletes this one as well
    
    return 0;
}
