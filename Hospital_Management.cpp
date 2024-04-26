#include <iostream>
#include <vector>

using namespace std;

class Hospital {
    public:
        string m_name, m_address, m_bloodType;
        int m_age, m_contact;

    Hospital() {}
    Hospital(string name, string address, string bloodType, int age, int contact) : m_name {name}, m_address {address}, m_bloodType {bloodType}, m_age {age}, m_contact{contact}
    {}
}; 

vector <Hospital> vh;

int main() {
    int userInput;

    Hospital user;

    while(true) {
        cout << "1. To admit patient: " << endl;
        cout << "2. To show all patient: " << endl;
        cout << "3. To dismiss patient: " << endl;
        cout << "4. To exit: " << endl;
        cin >> userInput;

        switch(userInput) {
            case 1: { system("cls");
                int choice;
                do {
                    cout << " Name: "; cin >> user.m_name;
                    cout << " Age: "; cin >> user.m_age;
                    cout << " Contact: "; cin >> user.m_contact;
                    cout << " Blood type: "; cin >> user.m_bloodType;
                    cout << " Address: "; cin >> user.m_address;
                    vh.push_back(user);
                    for (int i = 0; i < vh.size(); i++) {
                        system("cls");
                        cout << i+1 << " Patient admitted " << endl;
                    }
                    cout << " 1 to continue or 0 to exit: "; cin >> choice;
                    system("cls");

                } while(choice != 0 && choice == 1);
                break;
            case 2: { system("cls");
                for (int i = 0; i <vh.size(); i++) {
                    cout << i + 1 << " Name: " << vh[i].m_name << endl;
                    cout << " Age: " << vh[i].m_age << endl;
                    cout << " Contact: " << vh[i].m_contact << endl;
                    cout << " Blood type: " << vh[i].m_bloodType << endl;
                    cout << " Address: " << vh[i].m_address << endl << endl;
                }
                break;
            }
            case 3: { system("cls");
                string n;
                cout << " Enter name to dismiss: "; cin >> n;
                for (int i = 0; i < vh.size(); i++) {
                    if ( n == vh[i].m_name) {
                    cout << i + 1 << " Name: " << vh[i].m_name << endl;
                    cout << " Age: " << vh[i].m_age << endl;
                    cout << " Contact: " << vh[i].m_contact << endl;
                    cout << " Blood type: " << vh[i].m_bloodType << endl;
                    cout << " Address: " << vh[i].m_address << endl << endl;
                    vh.erase(vh.begin() + i);          
                    }
                    cout << " Patient Dismissed " << endl;
                    cout <<" Number of Admitted patients: " << vh.size() << endl << endl;          
                }
                break;
            }
            case 4: {
                exit(0);
                break;
            }
            default: { system("cls");
                cout << " Invalid Input " << endl << endl;
                break;
            }

            }
        }
    }
}