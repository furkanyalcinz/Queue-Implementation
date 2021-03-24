//Furkan Yalçýn 20181701039

#include"QueType.h"
#include <iostream>
using namespace std;
int main()
{
 //variables   
    int Number;
    QueType queue;
    string command;
    int numCommands;
    //This codes are for user interface.
    cout << "Please enter e function which can be; Enqueue, Dequeue, IsEmpty,IsFull" << endl;
    cout << "If you wan to exit loop pleace type Quit" << endl;
    while (command != "Quit")
    {
        
        cin >> command;
        try
        {
            if (command == "Enqueue")
            {
                cout << "Please enter a number" << endl;
                cin >> Number;
                queue.Enqueue(Number);
                cout << Number << " is enqueued." << endl;
            }
            else if (command == "Dequeue")
            {
                queue.Dequeue(Number);
                cout << Number << " is dequeued. " << endl;
            }
            else if (command == "IsEmpty")
                if (queue.IsEmpty())
                    cout<< "Queue is empty." << endl;
                else
                    cout << "Queue is not empty." << endl;
            else if (command == "IsFull")
                if (queue.IsFull())
                    cout<< "Queue is full." << endl;
                else cout<< "Queue is not full." << endl;
        }
        catch (FullQueue)
        {
            cout << "FullQueue exception thrown." << endl;
        }
        catch (EmptyQueue)
        {
            cout << "EmtpyQueue exception thrown." << endl;
        }
    };
    cout << "Testing completed." << endl;
    


    
}
