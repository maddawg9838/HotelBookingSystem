#include <iostream>

using namespace std;

Check the availability of the hotel
Book a hotel room
Find reservations
Edit reservations

// Function Prototypes
void Book();
void CheckAvailability();
void FindReservation();
void EditReservation();

int main ()
{
    int operation;
    
    do
    {
        cout << "Hi! What would you like to do?" << endl;
        cout << "1. Check Hotel Room Availability"
        << "2. Book A Hotel Room"
        << "3. Find A Reservation"
        << "4. Edit A Reservation"
        << "5. Quit"
        cin >> operation;
            
       switch(operation)
           case '1':
        {
            CheckAvailability();
        }
        case '2':
        {
            Book();
        }
        case '3':
        {
            FindReservation();
        }
        case '4':
        {
            EditReservation();
        }
        case '5':
        {
            return;
        }  
    } while(true);
}

void CheckAvailability()
{
    
}

void Book()
{
    
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
    
}
