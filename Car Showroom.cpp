#include <iostream>
using namespace std;

int main()
{
    string Normal[] = {"Swift", "Tata Nano", "Indiga"};
    string luxury[] = {"Marcades", "BMW", "Jagur", "Volvo"};
    string sport[] = {"Ferrari", "Lamborgini", "Maclaren", "Bughatti", "Agira"};

    int choice;
    cout << "Choose Your Car Category: \n";
    cout << "1. Normal Cars\n"
         << "2. Luxary Cars\n"
         << "3. Sports Cars\n"
         << "4. Exit\n";
    cin >> choice;
    if (choice == 1)
    {
        int budegt;
        cout << "Enter your budget: ";
        cin >> budegt;
        if (budegt > 0 && budegt <= 100000)
        {
            cout << Normal[1] << "\n"
                 << Normal[2] << "\n";
        }
        else if (budegt > 100000 && budegt <= 200000)
        {
            cout << Normal[0] << "\n";
        }
        else if (budegt == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << i << ". " << Normal[i] << "\n";
            }
        }
        else
        {
            cout << "Car is Not Available."
                 << "\n";
        }
    }
    else if (choice == 2)
    {
        int budget;
        cout << "Enter your budget: ";
        cin >> budget;
        if (budget >= 200000 && budget <= 500000)
        {
            cout << luxury[1] << "\n"
                 << luxury[3] << "\n";
        }
        else if (budget > 500000 && budget <= 1000000)
        {
            cout << luxury[0] << "\n"
                 << luxury[2] << "\n";
        }
        else if (budget == 0)
        {
            for (int i = 0; i < 4; i++)
            {
                cout << i << ". " << luxury[i] << "\n";
            }
        }
        else
        {
            cout << "Car is Not Available."
                 << "\n";
        }
    }
    else if (choice == 3)
    {
        int budegt;
        cout << "Enter your budget: ";
        cin >> budegt;
        if (budegt > 1000000 && budegt <= 2000000)
        {
            cout << sport[0] << "\n"
                 << sport[2] << "\n";
        }
        else if (budegt > 2000000 && budegt <= 3000000)
        {
            cout << sport[1] << "\n"
                 << sport[4] << "\n";
        }
        else if (budegt > 3000000 && budegt <= 5000000)
        {
            cout << sport[3] << "\n";
        }
        else if (budegt == 0)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << i << ". " << sport[i] << "\n";
            }
        }
        else
        {
            cout << "Car is Not Available."
                 << "\n";
        }
    }
    else
    {
        cout << "Exit" << exit;
    }

    return 0;
}