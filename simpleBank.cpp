//This project name is Simple Bank System. This will take input of customer and output the information about his bank account.
//It was developed by Ansari Mohammed Adeen
//This will only take input once.
//Working on complex banking system 
//This is just frontend of this project.
//Simple Banking System using Constructor and Destructor.

//Some Necessary Header Files
#include<iostream>
#include<stdio.h>

//Using Namespace std, so that you dont have to put std in every cout and cin 
using namespace std;

//Making Classes
//class name account to contain data 
class account {

    //Making Private Class to keep data safe and secure and making it unusable from outside
    private:
        //float the balance so that balance can be written in decimal too
        float balance;
        //Float Rate of Interest so that rate can also be written or display in decimal
        float rate;

    //Making Public Class to display the content which are in this class on screen 
    public:
        //declaring account constructor
        account();
        //declaring accounts destructor
        ~account();
        //Declaring Deposit Function in which information about deposit will be kept 
        void deposit();
        //Declaring Withdraw funtion in which information about withdraw will kept
        void withdraw();
        //Declaring Compound function in which interest rate will be kept and display
        void compound();
        //Declaring Balance function in which balance of customer will be kept
        void getBalance();
        //Declaring Menu function which will display which option to choose
        void menu();

};
//End of Class

account :: account() {
    //Asking Customer to Enter his initial balance
    cout<<"Enter Initial Balance"<<endl;
    cin>>balance;

    //Asking Customer to input Interest Rate
    cout<<"Enter Interest Rate"<<endl;
    cin>>rate;

}

account :: ~account() {
    cout<<"Data has been Deleted"<<endl;
}

//Making of Deposit Function
void account :: deposit() {
    //Floating Amount so that Customer can put amount with cents/pennies
    float amount;

    //Asking Customer to Enter Amount to Deposit
    cout<<"Enter the Amount : ";
    cin>>amount;

    //After Customer will enter amount, the amount will be added to his account along with his previous balance. It will Add up with previous balance
    balance = balance + amount ;
}

//Making of Withdraw function
void account :: withdraw() {
    //Floating Amount so that Customer can withdraw money along with cents/pennies
    float amount;

    //Asking Customer to Enter Amount to WithDraw
    cout<<"How much to WithDraw ? "<<endl;
    cin>>amount;

    //Using If-Else so that amount input for withdrawn is not greater than balance and to update balance 
    if(amount <= balance) {
        
        // This will deduct the withdrawn amount from balance
        balance = balance - amount;

        //Will display how much amount is withdrawn
        cout<<"Amount Drawn = "<<amount<<endl;

        //Will display how much amount is left in Balance
        cout<<"Current Balance = "<<balance<<endl; 
    } else {
        cout<<"Your WithDrawn Amount is greater than your balance. Please enter proper amount";
    }
}

//Making of Interest Compound function
void account :: compound() {
    //Floating interest, coz interest comes with decimal
    float interest;

    //interest will multiply with balance with its rate
    interest = balance * rate;

    //balance will update with interest amount
    balance = balance + interest;

    //Display Interest Amount
    cout<<"Interest Amount = "<<interest<<endl;

    //Display Total Balance with Interest amount added
    cout<<"Total Amount = "<<balance<<endl; 
}

//Making of Balance function
void account :: getBalance() {
    //Will display balance in the account
    cout<<"Current Balance = ";
    cout<<balance<<endl;
}

//Making of Menu function
void account :: menu() {
    //For Deposit
    cout<<" d -> Deposit "<<endl;
    //For Withdraw
    cout<<" w -> Withdraw "<<endl;
    //For Compound Interest
    cout<<" c -> Compound Interest "<<endl;
    //For Balance 
    cout<<" b -> Get Balance "<<endl;
    //For Exit
    cout<<" e -> Exit "<<endl;
    //Tells to Chose Option
    cout<<" Option Please ? "<<endl;
}

//Int Main to Display main/Home Page
int main() {
    class account acct;
    char ch;
    acct.menu();
    while((ch = getchar()) != 'q') {
        switch(ch) {
            case 'd' :
                acct.deposit();
                break;
            case 'w' :
                acct.withdraw();
                break;
            case 'c' :
                acct.compound();
                break;
            case 'b' :
                acct.getBalance();
                break;
        }
    }
    return 0;
}