#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
// using namespace std;
class all
{
private:
    struct address
    {
        int house;
        char street[30];
        char city[30];
        char state[30];
        char country[30];
    };
    struct age
    {
        int day;
        int month;
        int year;
    };
    struct patient_info
    {
        char name[50];
        address AD1; // nested structure implemented
        age A1;      // nested structure inplemented
        int martial_status;
        int reg_no;
        int bld_group;
        int sex;
    } PI[100];
    int task;

protected:
    void enter_patient_info();
    void show_patient_detail();

public:
    void software_detail();
    void tasks();
    char answer;
    char answer1;
    char ch;
    int serial;
};

class date
{
private:
    int date;
    int month;
    int year;

public:
    void enter_date();
    void show_date();
};

class dob
{
private:
    struct dob1
    {
        int date;
        int month;
        int year;
        int rem;
    } DOB11[100];

public:
    void enter_date();
    void show_date();
};

int i = 0;
int rem;
int count;
int regis;
int attempt;
int temp;
int show_count = 0;

all A1;   // object declared
date D1;  // object declared
dob DOB1; // object declared

int main()
{
    clrscr();
    cout << "\n*******************************************************************************\n\t\t\t***** HOSPITAL \n\t\t\t\t MANAGEMENT \n\t\t\t\t\tSYSTEM****\n*******************************************************************************";
    cout << "\n\n\t Project made by:";
    cout << "\n\t\t1225.Nikam Rutuja Rajendra.\n\t\t1226.Thombare Shreya Vishnu.\n\t\t1227.Patankar Aishwarya Amar.\n";
    cout << "\n\n\t\t\t\t GOVERNMENT POLYTECHNIC , KARAD\n\n";
    count = 0;
    D1.enter_date();
    A1.tasks();
    return 0;
}

void all::tasks()
{
    attempt = 0;
    D1.show_date();
    cout << "\n\t\t\t  **Hospital Management Tasks**"
         << "\n";
    cout << "\n\t\t\t  *****************************"
         << "\n\n";
    cout << "Please  select a task to do...."
         << "\n\n";
    cout << "1. Enter a new patient information ."
         << "\n";
    cout << "2. View detail of existing patient ."
         << "\n";
    cout << "3. View detail about the program ."
         << "\n";
    cout << "4. Exit from the program ."
         << "\n\n";
    // other function remain
    cout << "Enter your task serail :"
         << "\n\n";
    cin >> task;
    switch (task)
    {
    case 1:
    {
        int ch;
        clrscr();
        cout << "\n\n********Departments available********";
        cout << "\n1.Accident and Emergency:\n2.Cardiology:\n3.Burn Center:\n4.Coronary Care Unit(CCU):\n5.Intensive care Unit(ICU):\n6.Exit:";
        cout << "\n Enter the department number";
        cin >> ch;
        switch (ch)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            A1.enter_patient_info();
            break;
        case 6:
            exit(0);
            break;
        }
    }
    case 2:
    {
        A1.show_patient_detail();
        break;
    }
    case 3:
    {
        A1.software_detail();
        break;
    }
    case 4:
    {
        system("CLS");
        cout << "Thank You for trying this program !!!"
             << "\n\n";
        cout << " This is the end of program...."
             << "\n\n";
        cout << " Press any key to exit....."
             << "\n\n";
        getch();
        exit(0);
        break;
    }
    default:
    {
        system("CLS");
        cout << "Invalid task serial ."
             << "\n\n";
        cout << "Press any key to continue...."
             << "\n\n";
        getch();
        system("CLS");
        A1.tasks();
    }
    }
}

void all::enter_patient_info()
{
    system("CLS");
    answer = 'y';
    if (count == 0)
    {
        serial = 1;
    }
    else
    {
        i = serial;
    }
    for (i = serial; answer == 'y' || answer == 'Y'; i++)
    {
        PI[i].reg_no = i;
        temp = serial;
        cout << "  ***ENTERING INFORMATION FOR PATIENT SERIAL NUMBER " << i << "***"
             << "\n";
        cin.get(ch);
        cout << "Registration Number : " << PI[i].reg_no;
        cout << "\nEnter the name of patient :"
             << "\n";
        cin.getline(PI[i].name, 50);
        cout << "Sex (1-Male 2-Female) :"
             << "\n";
        cin >> PI[i].sex;
        while (PI[i].sex != 1 && PI[i].sex != 2)
        {
            cout << "Invalid input for sex of patient!!!"
                 << "\n";
            cout << "Sex :"
                 << "\n";
            cin >> PI[i].sex;
        }
        cout << "***ENTERING ADDRESS**"
             << "\n";
        cout << "House number :"
             << "\n";
        cin >> PI[i].AD1.house;
        while (PI[i].AD1.house <= 0)
        {
            cout << "Invalid input for house number ."
                 << "\n";
            cout << "Again enter the house number ."
                 << "\n";
            cin >> PI[i].AD1.house;
        }
        cin.get(ch);
        cout << "Street :"
             << "\n";
        cin.getline(PI[i].AD1.street, 30);
        cout << "City :"
             << "\n";
        cin.getline(PI[i].AD1.city, 30);
        cout << "State :"
             << "\n";
        cin.getline(PI[i].AD1.state, 30);
        cout << "Country :"
             << "\n";
        cin.getline(PI[i].AD1.country, 30);
        DOB1.enter_date();
        // to calculate age
        cin.get(ch);
        cout << "Martial status(1-Married,2-Not Married ):"
             << "\n";
        if (count != 0)
        {
            cout << "\n";
        }
        cin >> PI[i].martial_status;
        while (PI[i].martial_status < 1 || PI[i].martial_status > 2)
        {
            cout << "Invalid input for martial status ."
                 << "\n";
            cout << "Enter a valid martial status :"
                 << "\n";
            cin >> PI[i].martial_status;
        }
        cin.get(ch);
        if (count != 0)
        {
            cout << "\n";
        }
        cout << "Blood group :"
             << "\n";
        cout << "1. A+ "
             << "\n";
        cout << "\n";
        cout << "2. A- "
             << "\n";
        cout << "\n";
        cout << "3. B+ "
             << "\n";
        cout << "\n";
        cout << "4. B- "
             << "\n";
        cout << "\n";
        cout << "5. AB+ "
             << "\n";
        cout << "\n";
        cout << "6. AB- "
             << "\n";
        cout << "\n";
        cout << "7. O+ "
             << "\n";
        cout << "\n";
        cout << "8. O- "
             << "\n";
        cout << "\n";
        cout << "Enter :"
             << "\n";
        cout << "\n";
        cin >> PI[i].bld_group;
        switch (PI[i].bld_group)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        {
            break;
        }
        default:
        {

            while (PI[i].bld_group != 1 && PI[i].bld_group != 2 && PI[i].bld_group != 3 &&

                   PI[i].bld_group != 4 && PI[i].bld_group != 5 && PI[i].bld_group != 6 &&
                   PI[i].bld_group != 7 && PI[i].bld_group != 8)
            {
                cout << "\n";
                cout << "Invalid input !"
                     << "\n";
                cout << "Blood Group :"
                     << "\n";
                cout << "\n";
                cin >> PI[i].bld_group;
            }
            break;
        }
        }
        cin.get(ch);
        cout << "Want to enter information for another patient ? "
             << "\n";
        cout << "\n";
        cin >> answer;
        count++;
        serial++;
    }
    system("CLS");
    A1.tasks();
}

void dob::enter_date()
{
    cout << "\n";
    cout << "Date of birth"
         << "\n";
    cout << "\n";
    cout << "Year :";
    cout << "\n";
    cout << "\n";
    cin >> DOB11[temp].year;
    if (DOB11[temp].year <= 0 || DOB11[temp].year > 10000)
    {
        do
        {
            cout << "\n";
            cout << "Invalid input for year !"
                 << "\n";
            cout << "Please enter the year correctly :"
                 << "\n";
            cin >> DOB11[temp].year;
        } while (DOB11[temp].year < 0 || DOB11[temp].year > 10000);
    }
    cout << "\n";
    cout << "Month :";
    cout << "\n";
    cin >> DOB11[temp].month;
    if (DOB11[temp].month <= 0 || DOB11[temp].month > 12)
    {
        do
        {
            cout << "\n";
            cout << "Invalid input for month !"
                 << "\n";
            cout << "Again enter the month :"
                 << "\n";
            cout << "\n";
            if (count != 0)
            {
                cout << "\n";
            }
            cin >> DOB11[temp].month;
        } while (DOB11[temp].month < 0 || DOB11[temp].month > 12);
    }
    cout << "Date :";
    cout << "/n";
    switch (DOB11[temp].month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        cin >> DOB11[temp].date;
        while (DOB11[temp].date < 1 || DOB11[temp].date > 31)
        {
            cout << "\n";
            cout << "Invalid date !"
                 << "\n";
            cout << "Again enter the date :"
                 << "\n";
            cout << "\n";
            cin >> DOB11[temp].date;
        }
        break;
    }
    case 2:
    {
        cin >> DOB11[temp].date;
        if (DOB11[temp].year % 4 == 0)
        {
            while (DOB11[temp].date < 0 || DOB11[temp].date > 29)
            // for leap year
            {
                cout << "\n";
                cout << "Invalid date !"
                     << "\n";
                cout << "Again enter the date :"
                     << "\n";
                cout << "\n";
                cin >> DOB11[temp].date;
            }
        }
        else
        {
            while (DOB11[temp].date < 0 || DOB11[temp].date > 28)
            // for non-leap year
            {
                cout << "\n";
                cout << "Invalid date !"
                     << "\n";
                cout << "Again enter the date :"
                     << "\n";
                cout << "\n";
                cin >> DOB11[temp].date;
            }
        }
        break;
    }
    default:
    {
        cin >> DOB11[temp].date;
        while (DOB11[temp].date < 1 || DOB11[temp].date > 30)
        {
            cout << "\n";
            cout << "Invalid date !"
                 << "\n";
            cout << "Again enter the date :"
                 << "\n";
            cout << "\n";
            cin >> DOB11[temp].date;
        }
        break;
    }
    } // end of switch
    cout << "\n";
}

void date::enter_date()
{
    cout << "First of all I need the current date ..."
         << "\n";
    cout << "Year :";
    cin >> year;
    if (year <= 0 || year > 10000)
    {
        do
        {
            cout << "Invalid input for year !"
                 << "\n";
            cout << "Please enter the year correctly :"
                 << "\n";
            cin >> year;
        } while (year < 0 || year > 10000);
    }
    cout << "Month :";
    cin >> month;
    if (month <= 0 || month > 12)
    {
        do
        {
            cout << "Invalid input for month !"
                 << "\n";
            cout << "Again enter the month :"
                 << "\n";
            cin >> month;
        } while (month < 0 || month > 12);
    }
    cout << "Date :";
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        cin >> date;
        while (date < 1 || date > 31)
        {
            cout << "Invalid date !"
                 << "\n";
            cout << "Again enter the date :"
                 << "\n";
            cin >> date;
        }
        break;
    }
    case 2:
    {
        cin >> date;
        if (year % 4 == 0)
        {
            while (date < 0 || date > 29) // for leap year
            {
                cout << "Invalid date !"
                     << "\n";
                cout << "Again enter the date :"
                     << "\n";
                cin >> date;
            }
        }
        else
        {
            while (date < 0 || date > 28) // for non-leap year
            {
                cout << "Invalid date !"
                     << "\n";
                cout << "Again enter the date :"
                     << "\n";
                cin >> date;
            }
        }
        break;
    }
    default:
    {
        cin >> date;
        while (date < 1 || date > 30)
        {
            cout << "Invalid date !"
                 << "\n";
            cout << "Again enter the date :"
                 << "\n";
            cin >> date;
        }
        break;
    }
    } // end of switch
}

void date::show_date() // remove the goto ststements in this function
{
    system("CLS");
    cout << "Hello.... It's ";
    cout << date;
    rem = date % 10;
    switch (date)
    {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    {
        cout << "th ";
        goto over;
    }
    }
    switch (rem)
    {
    case 1:
    {
        cout << "st ";
        break;
    }
    case 2:
    {
        cout << "nd ";
        break;
    }
    case 3:
    {
        cout << "rd ";
        break;
    }
    default:
    {
        cout << "th ";
        break;
    }
    }
over:
    switch (month)
    {
    case 1:
    {
        cout << "January , ";
        break;
    }
    case 2:
    {
        cout << "February , ";
        break;
    }
    case 3:
    {
        cout << "March , ";
        break;
    }
    case 4:
    {
        cout << "April , ";
        break;
    }
    case 5:
    {
        cout << "May , ";
        break;
    }
    case 6:
    {
        cout << "June , ";
        break;
    }
    case 7:
    {
        cout << "July , ";
        break;
    }
    case 8:
    {
        cout << "August , ";
        break;
    }
    case 9:
    {
        cout << "September , ";
        break;
    }
    case 10:
    {
        cout << "October , ";
        break;
    }

    case 11:
    {
        cout << "November , ";
        break;
    }
    case 12:
    {
        cout << "December , ";
        break;
    }
    }
    cout << year << " ";
}

void all::show_patient_detail()
{
    do
    {
        system("CLS");
        cout << "Enter registration number :"
             << "\n";
        cout << "\n";
        cin >> regis;
        cin.get(ch);
        show_count++;
        if (regis > 0 && regis < serial)
        {
            cout << "\n\n";
            cout << "   ***INFORMATION FOR PATIENT REGISTRATION NUMBER" << regis << "***";
            cout << "\n";
            cout << "Name           : " << PI[regis].name << "";
            cout << "\n";
            cout << "Sex            : ";
            cout << "\n";
            if (PI[regis].sex == 1)
            {
                cout << "Male "
                     << "\n";
                cout << "\n";
            }
            if (PI[regis].sex == 2)
            {
                cout << "Female "
                     << "\n";
                cout << "\n";
            }
            cout << "Blood Group    : ";
            cout << "\n";
            switch (PI[regis].bld_group)
            {
            case 1:
            {
                cout << "\n";
                cout << "A+";
                break;
            }
            case 2:
            {
                cout << "\n";
                cout << "A-";
                break;
            }
            case 3:
            {
                cout << "\n";
                cout << "B+";
                break;
            }
            case 4:
            {
                cout << "\n";
                cout << "B-";
                break;
            }
            case 5:
            {
                cout << "\n";
                cout << "AB+";
                break;
            }
            case 6:
            {
                cout << "\n";
                cout << "AB-";
                break;
            }
            case 7:
            {
                cout << "\n";
                cout << "O+";
                break;
            }
            case 8:
            {
                cout << "\n";
                cout << "O-";
                break;
            }
            }
            cout << "\n";
            cout << "Date of birth  : ";
            cout << "\n";
            DOB1.show_date();
            cout << "Martial Status : ";
            cout << "\n";
            if (PI[i].martial_status == 1)
            {
                cout << "Married "
                     << "\n";
                cout << "\n";
            }
            else
            {
                cout << "Not married "
                     << "\n";
                cout << "\n";
            }
            cout << "\n";
            cout << "          **ADDRESS**"
                 << "\n\n";
            cout << "\n\n";
            cout << "House no.      : " << PI[regis].AD1.house;
            cout << "\n\n";
            cout << "Street         : " << PI[regis].AD1.street;
            cout << "\n\n";
            cout << "City           : " << PI[regis].AD1.city;
            cout << "\n\n";
            cout << "State          : " << PI[regis].AD1.state;
            cout << "\n\n";
            cout << "Country        : " << PI[regis].AD1.country;
            cout << "\n\n";
        }
        else
        {
            if (regis == 1)
            {
                cout << "Database is empty !!!"
                     << "\n";
                cout << "Press any key to exit to main task menu..."
                     << "\n";
                getch();
                system("CLS");
                A1.tasks();
            }
            attempt++;
            if (attempt == 3)
            {
                cout << "You have entered wrong registration number 3 times ."
                     << "\n";
                cout << "Access Denied!!! "
                     << "\n";
                cout << "Please try again later. "
                     << "\n";
                cout << "Press any key to exit to main task menu..."
                     << "\n";
                getch();
                system("CLS");
                A1.tasks();
            }
            cout << "\n\n";
            cout << "Sorry, the registration number is invalid ."
                 << "\n";
            cout << "Press any key to continue...."
                 << "\n";
            getch();
            cout << "\n";
            A1.show_patient_detail();
        }
        cout << "\n";
        cout << "Want to see information of another patient :"
             << "\n";
        cout << "\n";
        cin >> answer1;
    } while (answer1 == 'y' || answer1 == 'Y');
    cout << "\n";
    system("CLS");
    A1.tasks();
}

void dob::show_date()
{
    cout << DOB11[regis].date;
    rem = DOB11[regis].date % 10;
    switch (DOB11[regis].date)
    {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    {
        cout << "th ";
        goto over;
    }
    }
    switch (rem)
    {
    case 1:
    {
        cout << "st ";
        break;
    }
    case 2:
    {
        cout << "nd ";
        break;
    }
    case 3:
    {
        cout << "rd ";
        break;
    }
    default:
    {
        cout << "th ";
        break;
    }
    }
over:
    switch (DOB11[regis].month)
    {
    case 1:
    {
        cout << "January , ";
        break;
    }
    case 2:
    {
        cout << "February , ";
        break;
    }
    case 3:
    {
        cout << "March , ";
        break;
    }
    case 4:
    {
        cout << "April , ";
        break;
    }
    case 5:
    {
        cout << "May , ";
        break;
    }
    case 6:
    {
        cout << "June , ";
        break;
    }
    case 7:
    {
        cout << "July , ";
        break;
    }
    case 8:
    {
        cout << "August , ";
        break;
    }
    case 9:
    {
        cout << "September , ";
        break;
    }
    case 10:
    {
        cout << "October , ";
        break;
    }

    case 11:
    {
        cout << "November , ";
        break;
    }
    case 12:
    {
        cout << "December , ";
        break;
    }
    }
    cout << DOB11[regis].year << " ";
}

void all::software_detail()
{
    void intro();
    clrscr();
    system("CLS");
    cout << "    ***SOFTWARE DETAILS***\n\n";
    cout << " Programming Language     : C++ "
         << "\n";
    cout << " Aim                      : Simulation of the software used in Hospital"
         << "\n";
    cout << " Hope you like it..."
         << "\n";
    cout << " Thank You for trying this program. "
         << "\n";
    cout << "Press any key to return to the main task menu......."
         << "\n";
    getch();
    A1.tasks();
}
