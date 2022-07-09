#include <iostream>
#include <string.h>
using namespace std;

class coronapati
{
    char name[100];
    char father[100];
    char mother[100];
    int age;
    char gender;
    long long int phone;
    char email[100];
    char addr[100];
    char proffession[100];

public:
    void identity();
    void quiz();
    void result();
};

void coronapati::identity()
{
    cout << "\n What is Your Name:";
    cin.ignore();
    cin.getline(name, 100);
    cout << "\n What is your father name: ";
    cin.ignore();
    cin.getline(father, 100);
    cout << "\n What is your mother name: ";
    cin.ignore();
    cin.getline(mother, 100);
    cout << "\nYour Age: ";
    cin >> age;
    cout << "\n Sex/Gender: ";
    cin >> gender;
    cout << "\nEnter your Phone Number: ";
    cin >> phone;
    cout << "\nEnter Email Address: ";
    cin.ignore();
    cin.getline(email, 100);
    cout << "\n Address: ";
    cin.ignore();
    cin.getline(addr, 100);
    cout << "\n Enter Your Proffession: ";
    cin.ignore();
    cin.getline(proffession, 100);

    char option;
    cout << "\nDo you Want to continue with entered information ! (Y / N) ?" << endl;
    cin >> option;

    if (option == 'Y' || option == 'y')
    {
        quiz();
    }
    else
    {
        exit(1);
    }
}

void coronapati::quiz()
{
    int temptr, breath, cold, area, ill;
    cout << "\n What is Your Current Body Temperature in celcius ? " << endl;
    cout << "\n1.) < 50                       2.) 60-80" << endl;
    cout << "\n3.) 80-100                     4.) 100 < " << endl;
    cin >> temptr;
    cout << endl;
    cout << "\n Are you have trouble in Breathing ? " << endl;
    cout << "\n1.) Yes                        2.) No " << endl;
    cout << "\n3.) Don't Know                 4.) Absolutly Not " << endl;
    cin >> breath;
    cout << endl;
    cout << "\n Do you have cold ? " << endl;
    cout << "\n1.) Yes                        2.) No " << endl;
    cout << "\n3.) Don't Know                 4.) Absolutly Not " << endl;
    cin >> cold;
    cout << endl;
    cout << "\n have you been to crowded in last few days ? " << endl;
    cout << "\n1.) Yes                        2.) No " << endl;
    cout << "\n3.) Don't Know                 4.) Absolutly Not " << endl;
    cin >> area;
    cout << endl;
    cout << "\n Are you feeling illness ? " << endl;
    cout << "\n1.) Yes                        2.) No " << endl;
    cout << "\n3.) Don't Know                 4.) Absolutly Not " << endl;
    cin >> ill;
    cout << endl;

    if (temptr == 4 && breath == 1 && cold == 1 && area == 1 && ill == 1)
    {
        cout << "\n-----------------------------------------------" << endl;
        cout << "| Congatstulations Now You Are a CoronaPati ! |" << endl;
        cout << "-----------------------------------------------\n"<< endl;
        result();
    }
    else if (temptr == 3 && breath == 1 && cold == 1 && area == 1 && ill == 1)
    {
        cout << "\n-----------------------------------------------" << endl;
        cout << "| Congatstulations Now You Are a CoronaPati ! |" << endl;
        cout << "-----------------------------------------------\n"<< endl;
        result();
    }
    else if (temptr == 4 && breath == 1 && cold == 2 && area == 1 && ill == 1)
    {
        cout << "\n-----------------------------------------------" << endl;
        cout << "| Congatstulations Now You Are a CoronaPati ! |" << endl;
        cout << "-----------------------------------------------\n"<< endl;
        result();
    }
    else if (temptr == 4 && breath == 1 && cold == 2 && area == 1 && ill == 2)
    {
        cout << "\n-----------------------------------------------" << endl;
        cout << "| Congatstulations Now You Are a CoronaPati ! |" << endl;
        cout << "-----------------------------------------------\n"<< endl;
        result();
    }
    else
    {
        cout << "-------------------------------------------------------------------" << endl;
        cout << "|  Sorry You Loose The Game ! try Again To become a coronapati !  |" << endl;
        cout << "-------------------------------------------------------------------" << endl;
    }
}

void coronapati::result()
{
    cout << "\nName :" << name << endl;
    cout << "\nFather Name :" << father << endl;
    cout << "\nMother Name :" << mother << endl;
    cout << "\nAge :" << age << endl;
    cout << "\nGender  :" << gender << endl;
    cout << "\nPhone :" << phone << endl;
    cout << "\nEmail :" << email << endl;
    cout << "\nAddress :" << addr << endl;
    cout << "\nProffession :" << proffession << endl;
}

int main()
{
    coronapati obj1;
    char opt1, opt2;

    do
    {
        cout << "\n------------------- WELLCOME TO CORONAPATI ----------------" << endl;

        cout << "\nDo You Want To Continue With Coronapati ? (Y / N): ";
        cin >> opt1;

        if (opt1 == 'y' || opt1 == 'Y')
        {
            obj1.identity();
        }
        else
        {
            exit(0);
        }

        cout << "\nDo You Want to Play Again ?  Press 'Y' to continue or Press 'N' To Exit! ";
        cin >> opt2;

        if (opt2 == 'n' || opt2 == 'N')
        {
            exit(1);
        }

    } while (opt2 == 'y' || opt2 == 'Y');

    return 0;
}