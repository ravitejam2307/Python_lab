#include<iostream>
#include <string>
using namespace std;

class Credit_Card
{
    public:
        Credit_Card();
        Credit_Card(int account);
        double getCredit_Limit();
        double getBalance_Due();
        int getAcc_No();
        double Avail_Cred();
        int Credit_Inc(int amount);
        void Transaction1();
        // I added this to start the add charge item.
        bool add_charge(double charge_amount, const std::string& description);
        ~Credit_Card();

    private:
        int account_number;
        double vC_Limit;
        double vBal_due;
        std::string CCName;
        std::string CCLName;
        void write_status(const std::string& message);
        void write_log(const std::string& message);

};
