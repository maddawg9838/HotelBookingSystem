#include <iostream>
#include <string>

using namespace std;

// Fixes: array doesn't maintain information
// Check the availability of the hotel
// Book a hotel room
// Find reservations
// Edit reservations

// Function Prototypes
void CheckAvailability();
void FindReservation();
void EditReservation();
void Message();

// Global Constants
const int SIZE = 20;
int queenRooms[SIZE];
int kingRooms[SIZE];
int twinRooms[SIZE];

int main()
{
    int operation;
    bool invalid = false;

    do
    {
        cout << "Hi! What would you like to do?" << endl;
        cout << "1. Check Hotel Room Availability/Book" << endl
             << "2. Find A Reservation" << endl
             << "3. Edit A Reservation" << endl
             << "4. Quit" << endl;
        cin >> operation;

        if (operation == 1)
        {
            CheckAvailability();
        }
        else if (operation == 2)
        {
            FindReservation();
        }
        else if (operation == 3)
        {
            EditReservation();
        }
        else if (operation == 4)
        {
            return (0);
        }
        else
        {
            cout << "Please enter a valid response" << endl;
            cout << "Hi! What would you like to do?" << endl;
            cout << "1. Check Hotel Room Availability/Book" << endl
                 << "2. Find A Reservation" << endl
                 << "3. Edit A Reservation" << endl
                 << "4. Quit" << endl;
            cin >> operation;
            invalid = true;
        }
    } while (invalid == true);
}

void CheckAvailability()
{
    string roomType;
    int count;
    char book;

    cout << "What room are you looking for? "
         << "A queen, king, or twin room?" << endl;

    cin >> roomType;

    if (roomType == "Queen" || roomType == "queen")
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (queenRooms[i + 1] == 0)
            {
                cout << "Room " << i << " is available for booking" << endl;
                cout << "Would you like to book it? ";
                cin >> book;

                if (book == 'y' || book == 'Y')
                {
                    queenRooms[i] = 1;
                    Message();
                }

                count++;
            }
        }

        if (count == 0)
        {
            cout << "Sorry there are no Queen rooms available" << endl;
        }
    }

    if (roomType == "Twin" || roomType == "twin")
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (twinRooms[i + 1] == 0)
            {
                cout << "Room " << i << " is available for booking" << endl;
                cout << "Would you like to book it? ";
                cin >> book;

                if (book == 'y' || book == 'Y')
                {
                    twinRooms[i] = 1;
                    Message();
                }

                count++;
            }
        }

        if (count == 0)
        {
            cout << "Sorry there are no Twin rooms available" << endl;
        }
    }

    if (roomType == "King" || roomType == "king")
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (kingRooms[i + 1] == 0)
            {
                cout << "Room " << i << " is available for booking" << endl;
                cout << "Would you like to book it? ";
                cin >> book;

                if (book == 'y' || book == 'Y')
                {
                    kingRooms[i] = 1;
                    Message();
                }

                count++;
            }
        }

        if (count == 0)
        {
            cout << "Sorry there are no King rooms available" << endl;
        }
    }
}

void FindReservation()
{
    char edit;

    cout << "Would you like to edit this reservation? Please enter y or Y for yes and n or N for no. " << endl;
    cin >> edit;

    if (edit == 'y' || edit == 'Y')
    {
        EditReservation();
    }
    else if (edit == 'n' || edit == 'N')
    {
        return;
    }
    else
    {
        cout << "Please enter a valid response. Would you like to edit this reservation? Please enter y or Y for yes and n or N for no. " << endl;
        cin >> edit;
    }
}

void EditReservation()
{
    cout << "You enter in the edit reservation page" << endl;
}

void Message()
{
    char continueUsage;
    cout << "Thanks for using our service! Would you like to do another thing? " << endl;
    cin >> continueUsage;

    if (continueUsage == 'y' || continueUsage == 'Y')
    {
        main();
    }
    else
    {
        exit(0);
    }
}
