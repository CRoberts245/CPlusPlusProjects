#include <iostream>

using namespace std;
class Arrays
{
    public:
        int arrayList[];
        int sizeOfArray;
        void displayMessage()
        {
            cout << "Welcome to the Array Program!" << endl;
        }
        Arrays()
        {
            displayMessage();
            arrayList[setSize()];

        }


        int setSize()
        {


            cout << "How big would you like your array to be? ";
            cin >> sizeOfArray;
            return sizeOfArray;



        }
        int getValues()
        {

            int input;
            const int levels = sizeOfArray;

            for(int i = 0; i < levels; i = i + 1)
            {

                cout << "Enter in value number " << i + 1 << ":";
                cin >> input;
                arrayList[i] = input;
            }

            return(levels);
        }
        const int setConst()
        {

            const int x = getValues();
            return x;

        }
};

int main()
{
    Arrays arrayClass;
    const int localvar = arrayClass.setConst();
    cout << "To exit, enter in a number greater than the" << endl;
    cout << "amount of spaces in your list, in this case: " << localvar << endl;
    while (true)
    {
        int input_two;

        cout << "Which value would you like to view? ";
        cin >> input_two;

        if (input_two > localvar)
            {
                cout << "I could not find the value"  << endl;
                break;
            }
        input_two = input_two - 1;
        cout << arrayClass.arrayList[input_two] << endl;
    }
    cout << "Thank you, have a nice day." << endl;
}
