
#include <iostream>
#include <fstream>

using namespace std;

class employee {
private:
    int eno;
    char ename[20];
    float basic, pf, hra, net;
public:
    void new_employee();
    void show_employee();
    void del_employee();
    void modify_employee();
};

void employee::new_employee() {
    fstream f;
    int lastno;
    int wish;
    do {
        f.open("emp.dat", ios::in | ios::app | ios::binary);
        f.seekg(0, ios::end);
        if (f.tellg() == 0)
            lastno = 1;
        else {
            f.seekg(-sizeof(employee), ios::end);
            f.read((char*)this, sizeof(employee));
            lastno = eno + 1;
        }
        f.seekp(0, ios::end);
        eno = lastno;
        cout << "Employee no: " << eno << endl;
        cout << "Enter the name: ";
        cin >> ename;
        cout << "Enter the basic: ";
        cin >> basic;
        cout << "Enter the PF: ";
        cin >> pf;
        cout << "Enter the HRA: ";
        cin >> hra;
        net = basic + pf + hra;
        f.write((char*)this, sizeof(employee));
        f.close();
        cout << "Wish to record another employee? [Yes-1/No-0]: ";
        cin >> wish;
    } while (wish == 1);
}

void employee::del_employee() {
    int wish, no, found;
    fstream f1, f2;
    do {
        found = 0;
        f1.open("emp.dat", ios::in | ios::binary);
        f2.open("temp.dat", ios::out | ios::binary);
        cout << "Enter the employee no to be deleted: ";
        cin >> no;
        f1.read((char*)this, sizeof(employee));
        while (!f1.eof()) {
            if (eno == no)
                found = 1;
            else
                f2.write((char*)this, sizeof(employee));
            f1.read((char*)this, sizeof(employee));
        }
        if (!found)
            cout << "Record not found" << endl;
        f1.close();
        f2.close();
        remove("emp.dat");
        rename("temp.dat", "emp.dat");
        cout << "Wish to delete another employee? [Yes-1/No-0]: ";
        cin >> wish;
    } while (wish == 1);
}

void employee::show_employee() {
    fstream f;
    int no, found;
    int wish;
    do {
        found = 0;
        cout << "Enter the employee no to view: ";
        cin >> no;
        f.open("emp.dat", ios::in | ios::binary);
        f.read((char*)this, sizeof(employee));
        while (!f.eof()) {
            if (eno == no) {
                found = 1;
                cout << "No: " << eno << endl
                     << "Name: " << ename << endl
                     << "Basic: " << basic << endl
                     << "PF: " << pf << endl
                     << "HRA: " << hra << endl
                     << "Net: " << net << endl;
            }
            f.read((char*)this, sizeof(employee));
        }
        if (!found)
            cout << "Employee record not found" << endl;
        cout << "Wish to view another employee? [Yes-1/No-0]: ";
        cin >> wish;
        f.close();
    } while (wish == 1);
}

void employee::modify_employee() {
    fstream f;
    int no, found;
    int wish;
    do {
        found = 0;
        f.open("emp.dat", ios::in | ios::out | ios::binary);
        cout << "Enter the employee number to modify: ";
        cin >> no;
        f.read((char*)this, sizeof(employee));
        while (!f.eof()) {
            if (eno == no) {
                found = 1;
                cout << "Name: " << ename << endl;
                cout << "Enter new basic: ";
                cin >> basic;
                cout << "Enter new PF: ";
                cin >> pf;
                cout << "Enter new HRA: ";
                cin >> hra;
                net = basic + pf + hra;
                f.seekp(f.tellg() - sizeof(employee), ios::beg);
                f.write((char*)this, sizeof(employee));
            }
            f.read((char*)this, sizeof(employee));
        }
        if (!found)
            cout << "Employee record not found" << endl;
        f.close();
        cout << "Wish to modify another employee? [Yes-1/No-0]: ";
        cin >> wish;
    } while (wish == 1);
}

int main() {
    employee e;
    int choice;
    do {
        cout << "1. Add a new employee record" << endl;
        cout << "2. Delete an existing record" << endl;
        cout << "3. Modify an existing record" << endl;
        cout << "4. View detail" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter an option: ";
        cin >> choice;
        switch (choice) {
        case 1:
            e.new_employee();
            break;
        case 2:
            e.del_employee();
            break;
        case 3:
            e.modify_employee();
            break;
        case 4:
            e.show_employee();
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);
}
