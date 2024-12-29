#include <iostream>
using namespace std;

struct Attendee {
    string name;
    int ticket_no;
};

int main()
{
    int n;
    cout << "Enter the number of People attending the event: ";
    cin >> n;
    Attendee people[n];
  
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for attendee " << i + 1 << endl;
        cout << "Name: ";
        cin >> people[i].name;
        cout << "Ticket_no: ";
        cin >> people[i].ticket_no;
        cout << endl;
    }

    cout << "Attendee Information:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Attendee " << i + 1 << ": " << endl;
        cout << "Name: " << people[i].name << endl;
        cout << "Ticket_no: " << people[i].ticket_no << endl;
        cout << endl;
    }

    return 0;
}
