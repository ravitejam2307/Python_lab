#include "Credit_Card.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{

srand((unsigned)time(nullptr));
    Credit_Card *cc;
    char choice;
    int acct_no;
    int ans;
    double charge = 0;

    double payment = 0;
    double increase;


    cout << "New or existing account? (N/E): ";
    cin >> choice;
    choice = toupper(choice);

    if(choice == 'N')
    {
        //new account creation
        cc = new Credit_Card();
        if(cc->getAcc_No() == 0)
        {
            cout << "Account couldn't be created.";
            return(1);
        }

        cout << "Credit Account " << cc->getAcc_No() << " was opened. " << endl;
    }
    else
    {
        cout << "Please enter Account Number: ";
        cin >> acct_no;
        cc = new Credit_Card(acct_no);
        if(cc->getAcc_No() == 0)
        {
            cout << "Account doesn't exist.";
            return(2);
        }
        cout << "Credit Account " << cc->getAcc_No() << " was re-opened." << endl;
    }

    do
    {
        //cout << "Your Credit Limit is " << cc->getCredit_Limit() << endl;
        cout << "Account: " << cc->getAcc_No() << "\nOutstanding Balance: " << cc->getBalance_Due()
             << "\nCredit Limit: " << cc->getCredit_Limit() << "\nAvailable Credit: " << cc->Avail_Cred()<<endl;
        cout << "\nTransaction Options" << endl;
        cout << "0. Quit \n1. New Charge \n2. Payment \n3. Credit Increase Request \n4. Card History \nChoice: ";
        cin >> ans;
        if(cin.fail())
        {

            cin.clear();
            cin.ignore();
        }

        switch(ans)
        {
            case 0:
                cout << "Thanks for using the credit card simulator!" << endl;
                break;
            case 1:
            {
                string description;
                cout << "Charge Amount: ";
                cin >> charge;
                cout << "Charge Description: ";
                getline(cin >> ws, description);
                if(cc->add_charge(charge, description))
                {
                    cout << "New balance is: " << cc->getBalance_Due() << endl;
                }
                else
                {
                    double remaining = cc->getCredit_Limit() - cc->getBalance_Due();
                    cout << "Sorry charge rejected. Current remaining balance is: " << remaining << endl;
                }

                break;
            }
            case 2:
                cout << "Payment Amount: ";
                cin >> payment;
                break;
            case 3:
                cout << "Request Increase (increments of 100): ";
                cin >> increase;
                //if statement to see if they get increase or not using random number generator

                break;
            case 4:
                break;

            default:
                cout << "You did not enter a valid selection";
                break;
        }

    } while(ans !=0);


    system("pause");
    return 0;
}
