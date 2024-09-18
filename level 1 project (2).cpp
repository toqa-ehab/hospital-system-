#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string Name;
    string Nationality;
    long long Nationalid;
    int Age;
    char Gender;
    string Email;
    string PhoneNumber;
    string Address;

public:

    void setName(string Name1) {
        if (Name1 != "   ") {
            Name = Name1;
        }
        else {
            cout << "Invalid input for name\n";
        }
    }
    void setNationality(string nationality1) {
        if (nationality1 != "  ") {
            Nationality = nationality1;
        }
        else {
            cout << "Invalid input for nationality\n";
        }
    }
    void setnationalid(long long nationalId1) {
        if (nationalId1 != 0) {
            Nationalid = nationalId1;
        }
        else {
            cout << "Invalid input for national Id\n";
        }
    }

    void setAge(int Age1);
    void setGender(char Gender1);

    void setEmail(string Email1) {
        if (Email1 != "   ") {
            Email = Email1;
        }
        else {
            cout << "Invalid input for email\n";
        }
    }

    void setPhoneNumber(string PhoneNumber1) {
        if (PhoneNumber1 != "   ") {
            PhoneNumber = PhoneNumber1;
        }
        else {
            cout << "Invalid input for phone number\n";
        }
    }

    void setAddress(string Address1) {
        if (Address1 != " ") {
            Address = Address1;
        }
        else {
            cout << "Invalid input for address\n";
        }
    }

    void getAge();

    void getName() {
        cout << Name << "\n";
    }
    void getNationality() {
        cout << Nationality << "\n";
    }
    void getnationalid() {
        cout << Nationalid << "\n";
    }


    void getGender();

    void getEmail() {
        cout << Email << "\n";
    }

    void getPhoneNumber() {
        cout << PhoneNumber << "\n";
    }

    void getAddress() {
        cout << Address << "\n";
    }

    //default constructor
    Person() :Name(" "), Nationality(" "), Nationalid(0), Gender(' '), Age(0), Email(" "), PhoneNumber(" "), Address(" ")
    {


    }
    // parameterized  Constructor
    Person(int Age2, string Name2, char Gender2, string Email2, string PhoneNumber2, string Address2, string Nationality2, long long Nationalid2)
        : Name(Name2), Nationality(Nationality2), Nationalid(Nationalid2), Age(Age2), Gender(Gender2), Email(Email2)
        , PhoneNumber(PhoneNumber2), Address(Address2)
    {

    }
    //overloaded constructor
    Person(string Name3, string Nationality3, long long Nationid3, int Age3, char Gender3)
        : Name(Name3), Nationality(Nationality3), Nationalid(Nationid3), Age(Age3), Gender(Gender3)
    {

    }
    //method to display information
    void diplayInfo() {
        cout << "your Name is  " << Name << "\n" << "your Nationality is  " << Nationality << "\n" << "your portcode or Nation ID is  " << Nationalid << "\n"
            << "your Age is  " << Age << "\n" << "your Gender is " << Gender << "\n" << "your PhoneNumber is   " << PhoneNumber << "\n"
            << "your Email is " << Email << "\n" << "your Address is  " << Address << "\n";
    }
    // copy constructor
    Person(Person& obj) {
        Age = obj.Age;
        Name = obj.Name;
        Gender = obj.Gender;
        Email = obj.Email;
        PhoneNumber = obj.PhoneNumber;
        Address = obj.Address;
        Nationalid = obj.Nationalid;
        Nationality = obj.Nationality;

        cout << "Welcome Copy Constructor for Employee!\n";

    }

};
void Person::setAge(int Age1) {
    if (Age1 > 0) {
        Age = Age1;
    }
    else {
        cout << "Invalid input for age\n";
    }

}
void Person::setGender(char Gender1) {
    if (Gender1 == 'M' || Gender1 == 'm' || Gender1 == 'F' || Gender1 == 'f') {
        Gender = Gender1;
    }
    else {
        cout << "Invalid input for gender\n";
    }
}
void Person::getAge() {
    cout << Age << "\n";
}
void Person::getGender() {
    cout << Gender << "\n";
}

//child class from class person
class Employee : public Person {

private:
    int employeeID;
    double salary;
    string department;

public:

    // setter & getter methods

    void setEmployeeID(int ID) {

        if (ID > 0) {
            employeeID = ID;
        }
        else {
            cout << "Invalid input for employee ID\n";
        }
    }


    void setSalary(double S) {

        if (S > 0) {
            salary = S;
        }
        else {
            cout << "Invalid input for salary\n";
        }
    }

    void setDepartment(string D) {

        if (D != "") {
            department = D;
        }
        else {
            cout << "Invalid input for department\n";
        }
    }

    void getEmployeeID() {
        cout << employeeID << "\n";
    }

    void getSalary() {
        cout << salary << "\n";
    }

    void getDepartment() {
        cout << department << "\n";
    }

    //Parameterized Constructor
    Employee(int Age2, string Name2, char Gender2, string Email2, string PhoneNumber2, string Address2, string Nationality2, long long Nationalid2, int ID, double S, string D)
        : Person(Age2, Name2, Gender2, Email2, PhoneNumber2, Address2, Nationality2, Nationalid2)
        , employeeID(ID), salary(S), department(D)
    {
        cout << "Welcome Employee!\n";
    }

    // default constructor
    Employee() {
        int age = 0;
        string name = "   ";
        char gender = ' ';
        string email = "      ";
        string  phoneNumber = "    ";
        string address = "   ";
        long long  nationalid = 0;
        string nationality = "   ";
        int employeeID = 0;
        int salary = 0;
        string department = "     ";

        cout << "Welcome Default  Constructor for Employee!\n";

    }

    // copy constructor
    Employee(Employee& obj) {
        Age = obj.Age;
        Name = obj.Name;
        Gender = obj.Gender;
        Email = obj.Email;
        PhoneNumber = obj.PhoneNumber;
        Address = obj.Address;
        Nationalid = obj.Nationalid;
        Nationality = obj.Nationality;
        employeeID = obj.employeeID;
        salary = obj.salary;
        department = obj.department;

        cout << "Welcome copy Constructor for Employee!\n";

    }

    //method to display information
    void diplayInfo() {
        Person::diplayInfo();
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;

    }


};

//child class from class Patient
class patient : public Person {
private:
    int patientId;
    string bloodType;
    string healthInsuranceCard;

public:

    // setter & getter methods
    void setPatientId(int id) {
        if (id != 0)
        {
            patientId = id;
        }
        else
            cout << "invalid input for patient id\n";
    }
    void setBloodType(string B) {

        if (B != "  ") {
            bloodType = B;
        }
        else {
            cout << "Invalid input for blood type\n";
        }
    }


    void setHealthInsuranceCard(string H) {
        if (H != "  ") {
            healthInsuranceCard = H;
        }
        else {
            cout << "invalid input for health insurance card\n";
        }
    }



    void getPatientId() {
        cout << patientId << "\n";
    }
    void getBloodType() {
        cout << bloodType << "\n";
    }
    void getHealthInsuranceCard() {
        cout << healthInsuranceCard << "\n";
    }
    //Parameterized constructor
    patient(int Age3, string Name3, char Gender3, string Email3, string PhoneNumber3, string Address3, string Nationality3, long long Nationalid3, int patientid3, string bloodtype3, string healthInsuranceCard3)
        : Person(Age3, Name3, Gender3, Email3, PhoneNumber3, Address3, Nationality3, Nationalid3),
        patientId(patientid3), bloodType(bloodtype3), healthInsuranceCard(healthInsuranceCard3)
    {
        cout << "welcome, we hope to make you better !\n";
    }

    //Default constructor
    patient() {
        cout << "welcome, we hope to make you better !\n";
        string name = "  ";
        int age = 0;
        char gender = ' ';
        string email = "            ";
        string  phoneNumber = "          ";
        string address = "      ";
        long long  nationalid = 0;
        string nationality = "     ";
        int patientID = 0;
        string bloodType = "  ";
        string healthInsuranceCard = "    ";

    }

    //copy constructor
    patient(patient& obj) {
        Name = obj.Name;
        Age = obj.Age;
        Gender = obj.Gender;
        Email = obj.Email;
        PhoneNumber = obj.PhoneNumber;
        Address = obj.Address;
        Nationalid = obj.Nationalid;
        Nationality = obj.Nationality;
        patientId = obj.patientId;
        bloodType = obj.bloodType;
        healthInsuranceCard = obj.healthInsuranceCard;

    }

    //method to display information
    void diplayInfo() {
        Person::diplayInfo();
        cout << "Patient id :" << patientId << endl;
        cout << "Blood type :" << bloodType << endl;
        cout << "Health insurance card :" << healthInsuranceCard << endl;
    }


};
class laboratory
{
    // attributes using array
protected:
    double price[3];
    string conditions[3];
    string nameOfDoctors[3];
    string devices[3];

public:
    // default constructor
    laboratory()
    {
        for (int i = 0; i < 3; i++)
        {
            price[i] = 00.00;
            nameOfDoctors[i] = "unknown";
            devices[i] = "unknown";
            conditions[i] = "unknown";

        }
    }
    // parameterized constructor
    laboratory(double p[], string cond[], string doc[], string dev[])
    {
        for (int i = 0; i < 3; i++)
        {
            if (doc[i] != "N/A")
            {
                nameOfDoctors[i] = doc[i];
            }
            if (dev[i] != "N/A")
            {
                devices[i] = dev[i];
            }

            if (p[i] != 0.0)
            {
                price[i] = p[i];
            }
            if (cond[i] != "N/A")
            {
                conditions[i] = cond[i];
            }

        }
    }
    // setter & getter methods
    void setprice(double p[])
    {
        for (int i = 0; i < 3; i++)
        {
            price[i] = p[i];
        }
    }
    void setconditions(string cond[])
    {
        for (int i = 0; i < 3; i++)
        {
            conditions[i] = cond[i];
        }
    }
    void setnameOfDoctors(string doc[])
    {
        for (int i = 0; i < 3; i++)
        {
            nameOfDoctors[i] = doc[i];
        }
    }
    void setdevices(string dev[])
    {
        for (int i = 0; i < 3; i++)
        {
            devices[i] = dev[i];
        }
    }
    double* getprice()
    {
        return price;
    }
    string* getConditions()
    {
        return conditions;
    }
    string* getNameOfDoctors()
    {
        return nameOfDoctors;
    }
    string* getDevices()
    {
        return devices;
    }
    // the method of displaying info (inside the class)
    void displayInfo()
    {
        cout << "the price:";
        for (int i = 0; i < 3; i++) {
            if (i == 1) {
                cout << "\t ";
            }
            else if (i == 2) {
                cout << "\t";
            }

            cout << "                " << price[i] << "\t";
        }
        cout << endl;
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
        cout << "Doctors:";

        for (int i = 0; i < 3; i++) {

            cout << "                 " << nameOfDoctors[i] << "\t";
        }
        cout << endl;
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
        cout << "Conditions: ";

        for (int i = 0; i < 3; i++) {
            if (i == 1) {
                cout << "\t";
            }


            cout << "         " << conditions[i] << "\t";
        }
        cout << endl;
        cout << "----------------------------------------------------------------------------------------------------------" << endl;

        cout << "Devices:";

        for (int i = 0; i < 3; i++) {

            cout << "                " << devices[i] << "\t";
        }
        cout << endl;
        cout << "----------------------------------------------------------------------------------------------------------" << endl;

    }
    // copy constructor
    laboratory(laboratory& object) {
        for (int i = 0; i < 3; i++)
        {
            nameOfDoctors[i] = object.nameOfDoctors[i];
            devices[i] = object.devices[i];
            price[i] = object.price[i];
            conditions[i] = object.conditions[i];
        }

    }


};

class XRay : public laboratory {
private:
    string nameofxray[3];
    int resolution[3];
    string LevelofEnergy[3];


public:
    patient p1;
    // Default constructor
    XRay() {
        for (int i = 0; i < 3; i++) {
            nameOfDoctors[i] = "N/A";
            devices[i] = "N/A";
            price[i] = 0.0;
            conditions[i] = "N/A";
            nameofxray[i] = "N/A";
            resolution[i] = 0;
            LevelofEnergy[i] = "N/A";
        }

    }

    // Constructor with personal information and X-Ray machine attributes
    XRay(double p[], string name[], string cond[], string dev[], string lvl[], int res[], string x_name[])
        : laboratory(p, cond, name, dev)
    {
        for (int i = 0; i < 3; i++)
        {
            if (x_name[i] != "N/A")
            {
                nameofxray[i] = x_name[i];
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (res[i] != 0)
            {
                resolution[i] = res[i];
            }
        }

        for (int i = 0; i < 3; i++)
        {
            if (lvl[i] != "N/A")
            {
                LevelofEnergy[i] = lvl[i];
            }
        }

        int Age5, patientID5, test1;
        long long NationID5;
        string Name5, Nation5, Email5, Address5, PhoneNumber5, BloodType5, HIC5;
        char gender5;

        cout << "Enter your Name" << "\n";

        getline(cin, Name5);
        getline(cin, Name5);
        cout << "Enter your Nationality " << "\n";
        getline(cin, Nation5);
        cout << "Enter your National ID" << "\n";
        cin >> NationID5;
        cout << "Enter your Age" << "\n";
        cin >> Age5;
        cout << "Enter your Gender" << "\n";
        cin >> gender5;
        cout << "Enter your Email" << "\n";
        cin.ignore();
        getline(cin, Email5);
        cout << "Enter your Address" << "\n";
        getline(cin, Address5);
        cout << "Enter your Phone Number" << "\n";
        getline(cin, PhoneNumber5);
        cout << "Enter your patient ID" << "\n";
        cin >> patientID5;
        cout << "Enter your Blood Type" << "\n";
        cin.ignore();
        getline(cin, BloodType5);
        cout << "Enter your HIC" << "\n";
        getline(cin, HIC5);

        p1.setName(Name5);
        p1.setNationality(Nation5);
        p1.setnationalid(NationID5);
        p1.setAge(Age5);
        p1.setGender(gender5);
        p1.setEmail(Email5);
        p1.setAddress(Address5);
        p1.setPhoneNumber(PhoneNumber5);
        p1.setPatientId(patientID5);
        p1.setBloodType(BloodType5);
        p1.setHealthInsuranceCard(HIC5);


    }

    // Copy constructor
    XRay(XRay& object) {
        for (int i = 0; i < 3; i++)
        {
            nameOfDoctors[i] = object.nameOfDoctors[i];
            devices[i] = object.devices[i];
            price[i] = object.price[i];
            conditions[i] = object.conditions[i];
            LevelofEnergy[i] = object.LevelofEnergy[i];
            resolution[i] = object.resolution[i];
            nameofxray[i] = object.nameofxray[i];

        }
    }

    // Display information method
    int displayInfo() {

        string test;

        cout << "\n";
        cout << "do you want to make a test? \n";
        cin >> test;
        if (test == "yes" || test == "Yes") {
            int cost = 0, s;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "                             " << "1" << "                            " << "2" << "                            " << "3" << "\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "the name of x-ray: ";

            for (int i = 0; i < 3; i++)
            {
                if (i == 1) {
                    cout << "\t\t";
                }
                else if (i == 2) {
                    cout << "\t\t    ";
                }

                cout << "        " << nameofxray[i];
            }
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "Level of Energy: ";
            for (int j = 0; j < 3; j++) {
                if (j == 1) {
                    cout << "\t    ";
                }
                else if (j == 2) {
                    cout << "\t";
                }
                cout << "              " << LevelofEnergy[j] << "\t";

            }
            cout << "\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "Resolution: ";
            for (int g = 0; g < 3; g++) {

                if (g == 1) {
                    cout << "      ";
                }
                else if (g == 2) {
                    cout << " ";
                }

                cout << "           " << resolution[g] << " pixels" << "\t";
            }
            cout << "\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            laboratory::displayInfo();
            cout << "what type of x-ray do you want?" << "\n";
            cin >> s;
            if (s == 1)
            {
                cost = cost + 5000;
            }
            else if (s == 2)
            {
                cost = cost + 7500;
            }
            if (s == 3)
            {
                cost = cost + 10000;
            }

            p1.diplayInfo();

            cout << "the cost is  " << cost << "\n";


        }
        else if (test == "No" || test == "no") {
            return 0;
        }

    }


    // Getter and setter methods
    string getNameOfXRay(int index) const {
        if (index >= 0 && index < 3) {
            return nameofxray[index];
        }
        return "Index out of bounds";
    }

    void setNameOfXRay(int index, const string& name) {
        if (index >= 0 && index < 3) {
            nameofxray[index] = name;
        }
    }

    int getResolution(int index) const {
        if (index >= 0 && index < 3) {
            return resolution[index];
        }
        return -1; // Invalid index
    }

    void setResolution(int index, int res) {
        if (index >= 0 && index < 3) {
            resolution[index] = res;
        }
    }

    string getLevelOfEnergy(int index) const {
        if (index >= 0 && index < 3) {
            return LevelofEnergy[index];
        }
        return "Index out of bounds";
    }

    void setLevelOfEnergy(int index, const string& level) {
        if (index >= 0 && index < 3) {
            LevelofEnergy[index] = level;
        }
    }
    ~XRay() {
        cout << "Registration is done " << endl;

    }
};
class Analysis : public laboratory {
private:
    string labName[3];
    string typeofanalysis[3];
    string equipment[3];
public:
    patient p1;

    //Default Constructor definition
    Analysis() {
        for (int i = 0; i < 3; i++) {
            price[i] = 0.0;
            nameOfDoctors[i] = "N/A";
            devices[i] = "N/A";
            conditions[i] = "N/A";
            labName[i] = "N/A";
            typeofanalysis[i] = "N/A";
            equipment[i] = "N/A";

        }

    }
    // Overloaded constructor
    Analysis(double p[], string cond[], string doc[], string dev[], string LN[], string TA[], string equip[]) {


        for (int i = 0; i < 3; i++)
        {
            if (doc[i] != "N/A")
            {
                nameOfDoctors[i] = doc[i];
            }
            if (dev[i] != "N/A")
            {
                devices[i] = dev[i];
            }

            if (p[i] != 0.0)
            {
                price[i] = p[i];
            }
            if (cond[i] != "N/A")
            {
                conditions[i] = cond[i];
            }
            if (LN[i] != "N/A")
            {
                labName[i] = LN[i];
            }
            if (TA[i] != "N/A")
            {
                typeofanalysis[i] = TA[i];
            }
            if (equip[i] != "N/A")
            {
                equipment[i] = equip[i];
            }


        }
        int Age5, patientID5, test1;
        long long NationID5;
        string Name5, Nation5, Email5, Address5, PhoneNumber5, BloodType5, HIC5;
        char gender5;

        cout << "Enter your Name" << "\n";

        getline(cin, Name5);
        getline(cin, Name5);
        cout << "Enter your Nationality " << "\n";
        getline(cin, Nation5);
        cout << "Enter your National ID" << "\n";
        cin >> NationID5;
        cout << "Enter your Age" << "\n";
        cin >> Age5;
        cout << "Enter your Gender" << "\n";
        cin >> gender5;
        cout << "Enter your Email" << "\n";
        cin.ignore();
        getline(cin, Email5);
        cout << "Enter your Address" << "\n";
        getline(cin, Address5);
        cout << "Enter your Phone Number" << "\n";
        getline(cin, PhoneNumber5);
        cout << "Enter your patient ID" << "\n";
        cin >> patientID5;
        cout << "Enter your Blood Type" << "\n";
        cin.ignore();
        getline(cin, BloodType5);
        cout << "Enter your HIC" << "\n";
        getline(cin, HIC5);

        p1.setName(Name5);
        p1.setNationality(Nation5);
        p1.setnationalid(NationID5);
        p1.setAge(Age5);
        p1.setGender(gender5);
        p1.setEmail(Email5);
        p1.setAddress(Address5);
        p1.setPhoneNumber(PhoneNumber5);
        p1.setPatientId(patientID5);
        p1.setBloodType(BloodType5);
        p1.setHealthInsuranceCard(HIC5);

    }
    Analysis(Analysis& object) {
        for (int i = 0; i < 3; i++)
        {
            nameOfDoctors[i] = object.nameOfDoctors[i];
            devices[i] = object.devices[i];
            price[i] = object.price[i];
            conditions[i] = object.conditions[i];
            labName[i] = object.labName[i];
            typeofanalysis[i] = object.typeofanalysis[i];
            equipment[i] = object.equipment[i];

        }
    }

    ~Analysis() {
        cout << "Analysis object is being Destroyed";
    }
    // Setter And getter.
    void setlabname(string LN[]) {
        for (int i = 0; i < 3; i++) {
            labName[i] = LN[i];
        }
    }
    void settyapofanalysis(string TA[]) {
        for (int i = 0; i < 3; i++) {
            typeofanalysis[i] = TA[i];
        }
    }
    void setEquipment(string Eq[]) {
        for (int i = 0; i < 3; i++) {
            equipment[i] = Eq[i];
        }
    }
    string* getlabName() {
        return labName;
    }
    string* gettyapofanalysis() {
        return typeofanalysis;
    }
    string* getequipment() {
        return equipment;
    }

    // method to display information
    int displayInfo() {

        string test;
        cout << "\n";
        cout << "do you want to make a test? \n";
        cin >> test;
        if (test == "yes" || test == "Yes") {
            int cost = 0, s;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "                             " << "1" << "                            " << "2" << "                            " << "3" << "\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "Lab Name : ";

            for (int i = 0; i < 3; i++)
            {
                if (i == 1) {
                    cout << "\t\t";
                }
                else if (i == 2) {
                    cout << "\t\t    ";
                }

                cout << "        " << labName[i];
            }
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "Equipment: ";
            for (int j = 0; j < 3; j++) {
                if (j == 1) {
                    cout << "\t    ";
                }
                else if (j == 2) {
                    cout << "\t";
                }
                cout << "              " << equipment[j] << "\t";

            }
            cout << "\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "Type of Analysis: ";
            for (int g = 0; g < 3; g++) {

                if (g == 1) {
                    cout << "      ";
                }
                else if (g == 2) {
                    cout << " ";
                }

                cout << "           " << typeofanalysis[g] << " pixels" << "\t";
            }
            cout << "\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            laboratory::displayInfo();
            cout << "what type of Analysis  do you want ?" << "\n";
            cin >> s;
            if (s == 1)
            {
                cost = cost + 1200;
            }
            else if (s == 2)
            {
                cost = cost + 1000;
            }
            if (s == 3)
            {
                cost = cost + 800;
            }

            p1.diplayInfo();

            cout << "the cost is  " << cost << "\n";


        }
        else if (test == "No" || test == "no") {
            return 0;
        }

    }



};
class Doctor :public Employee {
private:
    string NameofDoctor[3];
    double price[3];
    string hour[3];
    string day[3];

public:
    patient p1;

    // setter & getter methods
    void setNameofDoctor(string name[]) {
        for (int i = 0; i < 3; i++) {
            NameofDoctor[i] = name[i];
        }
    }
    void sethour(string ho[]) {
        for (int i = 0; i < 3; i++) {
            hour[i] = ho[i];
        }
    }
    void setday(string da[]) {
        for (int i = 0; i < 3; i++) {
            day[i] = da[i];
        }
    }
    void setprice(double p[])
    {
        for (int i = 0; i < 3; i++)
        {
            price[i] = p[i];
        }
    }
    string* getnameofdoctor()
    {
        return NameofDoctor;
    }
    string* getday()
    {
        return day;
    }
    string* gethour()
    {
        return hour;
    }
    double* getprice()
    {
        return price;
    }

    // default constructor
    Doctor() {
        for (int i = 0; i < 3; i++) {
            NameofDoctor[i] = "unknown";
            price[i] = 00.00;
            hour[i] = "unknown";
            day[i] = "unknown";
        }
        int age = 0;
        string name = "   ";
        char gender = ' ';
        string email = "      ";
        string  phoneNumber = "    ";
        string address = "   ";
        long long  nationalid = 0;
        string nationality = "   ";
        int employeeID = 0;
        int salary = 0;
        string department = "   ";

    }
    // parameterized constructor
    Doctor(string dep[], double pr[], string hou[], string d[])
    {

        for (int i = 0; i < 3; i++) {
            NameofDoctor[i] = dep[i];
            price[i] = pr[i];
            hour[i] = hou[i];
            day[i] = d[i];

        }
        int Age5, patientID5, test1;
        long long NationID5;
        string Name5, Nation5, Email5, Address5, PhoneNumber5, BloodType5, HIC5;
        char gender5;

        cout << "Enter your Name" << "\n";

        getline(cin, Name5);
        getline(cin, Name5);
        cout << "Enter your Nationality " << "\n";
        getline(cin, Nation5);
        cout << "Enter your National ID" << "\n";
        cin >> NationID5;
        cout << "Enter your Age" << "\n";
        cin >> Age5;
        cout << "Enter your Gender" << "\n";
        cin >> gender5;
        cout << "Enter your Email" << "\n";
        cin.ignore();
        getline(cin, Email5);
        cout << "Enter your Address" << "\n";
        getline(cin, Address5);
        cout << "Enter your Phone Number" << "\n";
        getline(cin, PhoneNumber5);
        cout << "Enter your patient ID" << "\n";
        cin >> patientID5;
        cout << "Enter your Blood Type" << "\n";
        cin.ignore();
        getline(cin, BloodType5);
        cout << "Enter your HIC" << "\n";
        getline(cin, HIC5);

        p1.setName(Name5);
        p1.setNationality(Nation5);
        p1.setnationalid(NationID5);
        p1.setAge(Age5);
        p1.setGender(gender5);
        p1.setEmail(Email5);
        p1.setAddress(Address5);
        p1.setPhoneNumber(PhoneNumber5);
        p1.setPatientId(patientID5);
        p1.setBloodType(BloodType5);
        p1.setHealthInsuranceCard(HIC5);

    }

    // copy constructor
    Doctor(Doctor& object) {
        for (int i = 0; i < 3; i++) {
            NameofDoctor[i] = object.NameofDoctor[i];
            price[i] = object.price[i];
            hour[i] = object.hour[i];
            day[i] = object.day[i];
        }
    }

    //method to display information
    int displayINFO() {
        string test;

        cout << "\n";
        cout << "do you want to make a test? \n";
        cin >> test;
        if (test == "yes" || test == "Yes") {
            int cost = 0, s;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "                             " << "1" << "                            " << "2" << "                            " << "3" << "\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "the name of Doctors: ";

            for (int i = 0; i < 3; i++)
            {
                if (i == 1) {
                    cout << "\t\t";
                }
                else if (i == 2) {
                    cout << "\t    ";
                }

                cout << "        " << NameofDoctor[i];
            }
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "Appointment: ";
            for (int j = 0; j < 3; j++) {
                if (j == 1) {
                    cout << "  ";
                }
                else if (j == 2) {
                    cout << "     ";
                }
                cout << "               " << day[j] << "\t";

            }
            cout << "\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "Hour: ";
            for (int g = 0; g < 3; g++) {

                if (g == 1) {
                    cout << "  ";
                }
                else if (g == 2) {
                    cout << " ";
                }

                cout << "          " << hour[g] << "\t";
            }
            cout << "\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "price: ";
            for (int m = 0; m < 3; m++) {
                if (m == 2) {
                    cout << "     ";
                }
                cout << "                  " << price[m] << "\t";
            }
            cout << "\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "Which Doctor do you want ?" << "\n";
            cin >> s;
            if (s == 1)
            {
                cost = cost + 1000;
            }
            else if (s == 2)
            {
                cost = cost + 1500;
            }
            if (s == 3)
            {
                cost = cost + 2000;
            }

            p1.diplayInfo();
            cout << "the cost is  " << cost << "\n";


        }
        else if (test == "No" || test == "no") {
            return 0;
        }
    }

    // Destructor
    ~Doctor() {

    }
};


int main() {
    double price[3] = { 1200.0,1000.0, 800.0 };
    double price2[3] = { 5000,7500.0, 10000.0 };
    string conditions[3] = { "fully operational","Emergency" ," under doctor supervision" };
    string doctors[3] = { "DR. Hany", "DR. Mohamed", "DR. Mahmoud" };
    string devices[3] = { "X-Ray Machine", "MRI Scanner", "Ultrasound" };
    string nameofxray[3] = { "Chest x-ray","Hand x-ray","Lung x-ray" };
    int resloutiontype[3] = { 2000,500,10000 };
    string Levelofenergy[3] = { "High","Medium","High" };
    string equipment[3] = { "Microscope","Spectrometer","centrifuge" };
    string labname[3] = { "Data lab","Biotech lab","Precision Solutions" };
    string typeofanalysis[3] = { "Descriptive","Diagnostic","predictive" };

    int b, m;
    cout << "\t \t \t Welcome \n";
    cout<<  "\t \t \t--------- \n\n";
            cout<<"Type the number for what you choose\n";

    cout << " 1- Registration \n";
    cout << " 2- Admin \n\n ";
    cin >> m;
    if (m == 1) {
        cout<<"Type the number for what you want to register for\n";
        cout << " 1-Doctor\n 2-Analysis\n 3-x-ray\n\n";
        cin >> b;
        if (b == 1)
        {
            cout << "what section do you need ?\n";
            cout << " 1-Heart\n" << " 2-stomache\n" << " 3-Eye\n" << " 4-Dentist \n";
            int departent;
            cin >> departent;
            if (departent == 1)
            {
                string Nameofdoctor[3] = { "Dr.Mahmoud","Dr.Mohamed","Dr.Ahmed" };
                double price1[3] = { 1000,1500,2000 };
                string hour1[3] = { " 3.00pm to 7pm ", " 7.30pm to 10:30pm" ,"8.45am to 11am" };
                string day1[3] = { "sanday ","friday","wednesday" };

                Doctor d1(Nameofdoctor, price1, hour1, day1);
                d1.displayINFO();
            }
            else if (departent == 2)
            {
                string Nameofdoctor[3] = { "Dr.Ahmed","Dr.Omar","Dr.Reem" };
                double price1[3] = { 1000,1500,2000 };
                string hour1[3] = { " 3.00pm to 7pm ", " 7.30pm to 10:30pm" ,"8.45am to 11am" };
                string day1[3] = { "sanday ","friday","wednesday" };

                Doctor d1(Nameofdoctor, price1, hour1, day1);
                d1.displayINFO();

            }
            else if (departent == 3)
            {
                string Nameofdoctor[3] = { "Dr.Toqa","Dr.Linda","Dr.Haydyy" };
                double price1[3] = { 1000,1500,2000 };
                string hour1[3] = { " 3.00pm to 7pm ", " 7.30pm to 10:30pm" ,"8.45am to 11am" };
                string day1[3] = { "sanday ","friday","wednesday" };

                Doctor d1(Nameofdoctor, price1, hour1, day1);
                d1.displayINFO();


            }
            else if (departent == 4)
            {
                string Nameofdoctor[3] = { "Dr.Toqa","Dr.Mahmoud","Dr.Yousef" };
                double price1[3] = { 1000,1500,2000 };
                string hour1[3] = { " 3.00pm to 7pm ", " 7.30pm to 10:30pm" ,"8.45am to 11am" };
                string day1[3] = { "sanday ","friday","wednesday" };

                Doctor d1(Nameofdoctor, price1, hour1, day1);
                d1.displayINFO();


            }
        }
        if (b == 2) {
            Analysis A1(price, doctors, conditions, devices, labname, typeofanalysis, equipment);
            A1.displayInfo();

        }
        else if (b == 3)
        {

            XRay xrayLab(price2, doctors, conditions, devices, Levelofenergy, resloutiontype, nameofxray);
            xrayLab.displayInfo();
        }
    }

    else if (m == 2) {
        string name;
        int id;
        cout << "Enter your Name to login \n";
        cin >> name;
        cout << "Enter your id to login \n";
        cin >> id;
        if ((name == "Mahmoud" && id == 42310368) ||
            (name == "Mahmoud" && id == 42310097) ||
            (name == "Toqa" && id == 42310114) ||
            (name == "Ahmed" && id == 42310184) ||
            (name == "yousef" && id == 42310281) ||
            (name == "Mohamed" && id == 42310067) ||
            (name == "linda" && id == 42310077) ||
            (name == "Haydyy" && id == 43210212) ||
            (name == "reem" && id == 42310343) ||
            (name == "omar" && id == 42310378))
        {
            Employee e1(20, "Mahmoud", 'M', "Mahmoudsherif@gmail.com", "01013765365", "Cairo", "Egyption", 156646446, 1, 30000, "IT");
            Employee e2(19, "Ahmed", 'M', "Ahmedhafez@gmail.com", "015161561654", "Cairo", "Egyption", 654647866, 2, 28000, "nurse");
            Employee e3(19, "Toqa", 'F', "ToqaEhab@gmail.com", "01102126464", "Cairo", "Egyption", 554456456, 3, 26000, "nurse");
            Employee e4(19, "yousef", 'M', "yousef85@gmail.com ", "0119738435", "cairo", "egyption", 5465, 131, 20000, "IT");
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            e1.diplayInfo();
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            e2.diplayInfo();
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            e3.diplayInfo();
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            e4.diplayInfo();
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            string update;
            cout << "do you need to update the information ? \n";
            cin >> update;
            if (update == "yes" || update == "Yes")
            {
                int x;
                cout << " 1-add" << "\n";
                cout << " 2-edit" << "\n";
                cout << " 3-delete" << "\n";
                cin >> x;
                if (x == 1)
                {
                    int age8, id8;
                    double salary8;
                    long long nationalid8;
                    string Name8, email8, phonenumber8, address8, nationality8, department8;
                    char gender8;
                    cout << "Enter your Name" << "\n";
                    getline(cin, Name8);
                    getline(cin, Name8);
                    cout << "Enter your Nationality " << "\n";
                    getline(cin, nationality8);
                    cout << "Enter your National ID" << "\n";
                    cin >> nationalid8;
                    cout << "Enter your Age" << "\n";
                    cin >> age8;
                    cout << "Enter your Gender" << "\n";
                    cin >> gender8;
                    cout << "Enter your Email" << "\n";
                    cin.ignore();
                    getline(cin, email8);
                    cout << "Enter your Address" << "\n";
                    getline(cin, address8);
                    cout << "Enter your Phone Number" << "\n";
                    getline(cin, phonenumber8);
                    cout << "Enter your patient ID" << "\n";
                    cin >> id8;
                    cout << "Enter your salary \n";
                    cin >> salary8;
                    cout << "Enter your department \n";
                    cin >> department8;
                    Employee e7(age8, Name8, gender8, email8, phonenumber8, address8, nationality8, nationalid8, id8, salary8, department8);
                    cout << "----------------------------------------------------------------------------------------------------------" << endl;
                    e1.diplayInfo();
                    cout << "----------------------------------------------------------------------------------------------------------" << endl;
                    e2.diplayInfo();
                    cout << "----------------------------------------------------------------------------------------------------------" << endl;
                    e3.diplayInfo();
                    cout << "----------------------------------------------------------------------------------------------------------" << endl;
                    e4.diplayInfo();
                    cout << "----------------------------------------------------------------------------------------------------------" << endl;
                    e7.diplayInfo();
                    cout << "----------------------------------------------------------------------------------------------------------" << endl;

                }
                else if (x == 2)
                {
                    cout << "enter the employee you need to edit \n";
                    int thenumberofempolyee;
                    cin >> thenumberofempolyee;
                    if (thenumberofempolyee == 1)
                    {
                        int age9, id9;
                        double salary9;
                        long long nationalid9;
                        string Name9, email9, phonenumber9, address9, nationality9, department9;
                        char gender9;
                        cout << "Enter your Name" << "\n";
                        getline(cin, Name9);
                        getline(cin, Name9);
                        cout << "Enter your Nationality " << "\n";
                        getline(cin, nationality9);
                        cout << "Enter your National ID" << "\n";
                        cin >> nationalid9;
                        cout << "Enter your Age" << "\n";
                        cin >> age9;
                        cout << "Enter your Gender" << "\n";
                        cin >> gender9;
                        cout << "Enter your Email" << "\n";
                        cin.ignore();
                        getline(cin, email9);
                        cout << "Enter your Address" << "\n";
                        getline(cin, address9);
                        cout << "Enter your Phone Number" << "\n";
                        getline(cin, phonenumber9);
                        cout << "Enter your patient ID" << "\n";
                        cin >> id9;
                        cout << "Enter your salary \n";
                        cin >> salary9;
                        cout << "Enter your department \n";
                        cin >> department9;
                        Employee e1(age9, Name9, gender9, email9, phonenumber9, address9, nationality9, nationalid9, id9, salary9, department9);
                        e1.diplayInfo();
                        e2.diplayInfo();
                        e3.diplayInfo();
                        e4.diplayInfo();


                    }
                    else if (thenumberofempolyee == 2)
                    {
                        int age9, id9;
                        double salary9;
                        long long nationalid9;
                        string Name9, email9, phonenumber9, address9, nationality9, department9;
                        char gender9;
                        cout << "Enter your Name" << "\n";
                        getline(cin, Name9);
                        getline(cin, Name9);
                        cout << "Enter your Nationality " << "\n";
                        getline(cin, nationality9);
                        cout << "Enter your National ID" << "\n";
                        cin >> nationalid9;
                        cout << "Enter your Age" << "\n";
                        cin >> age9;
                        cout << "Enter your Gender" << "\n";
                        cin >> gender9;
                        cout << "Enter your Email" << "\n";
                        cin.ignore();
                        getline(cin, email9);
                        cout << "Enter your Address" << "\n";
                        getline(cin, address9);
                        cout << "Enter your Phone Number" << "\n";
                        getline(cin, phonenumber9);
                        cout << "Enter your patient ID" << "\n";
                        cin >> id9;
                        cout << "Enter your salary \n";
                        cin >> salary9;
                        cout << "Enter your department \n";
                        cin >> department9;
                        Employee e2(age9, Name9, gender9, email9, phonenumber9, address9, nationality9, nationalid9, id9, salary9, department9);
                        e1.diplayInfo();
                        e2.diplayInfo();
                        e3.diplayInfo();
                        e4.diplayInfo();


                    }

                    else if (thenumberofempolyee == 3)
                    {
                        int age9, id9;
                        double salary9;
                        long long nationalid9;
                        string Name9, email9, phonenumber9, address9, nationality9, department9;
                        char gender9;
                        cout << "Enter your Name" << "\n";
                        getline(cin, Name9);
                        getline(cin, Name9);
                        cout << "Enter your Nationality " << "\n";
                        getline(cin, nationality9);
                        cout << "Enter your National ID" << "\n";
                        cin >> nationalid9;
                        cout << "Enter your Age" << "\n";
                        cin >> age9;
                        cout << "Enter your Gender" << "\n";
                        cin >> gender9;
                        cout << "Enter your Email" << "\n";
                        cin.ignore();
                        getline(cin, email9);
                        cout << "Enter your Address" << "\n";
                        getline(cin, address9);
                        cout << "Enter your Phone Number" << "\n";
                        getline(cin, phonenumber9);
                        cout << "Enter your patient ID" << "\n";
                        cin >> id9;
                        cout << "Enter your salary \n";
                        cin >> salary9;
                        cout << "Enter your department \n";
                        cin >> department9;
                        Employee e3(age9, Name9, gender9, email9, phonenumber9, address9, nationality9, nationalid9, id9, salary9, department9);
                        e1.diplayInfo();
                        e2.diplayInfo();
                        e3.diplayInfo();
                        e4.diplayInfo();


                    }
                    else if (thenumberofempolyee == 4)
                    {
                        int age9, id9;
                        double salary9;
                        long long nationalid9;
                        string Name9, email9, phonenumber9, address9, nationality9, department9;
                        char gender9;
                        cout << "Enter your Name" << "\n";
                        getline(cin, Name9);
                        getline(cin, Name9);
                        cout << "Enter your Nationality " << "\n";
                        getline(cin, nationality9);
                        cout << "Enter your National ID" << "\n";
                        cin >> nationalid9;
                        cout << "Enter your Age" << "\n";
                        cin >> age9;
                        cout << "Enter your Gender" << "\n";
                        cin >> gender9;
                        cout << "Enter your Email" << "\n";
                        cin.ignore();
                        getline(cin, email9);
                        cout << "Enter your Address" << "\n";
                        getline(cin, address9);
                        cout << "Enter your Phone Number" << "\n";
                        getline(cin, phonenumber9);
                        cout << "Enter your patient ID" << "\n";
                        cin >> id9;
                        cout << "Enter your salary \n";
                        cin >> salary9;
                        cout << "Enter your department \n";
                        cin >> department9;
                        Employee e4(age9, Name9, gender9, email9, phonenumber9, address9, nationality9, nationalid9, id9, salary9, department9);
                        e1.diplayInfo();
                        e2.diplayInfo();
                        e3.diplayInfo();
                        e4.diplayInfo();


                    }

                    else
                    {
                        cout << "invalid \n";
                    }

                }
                else if (x == 3)
                {
                    cout << "choose the employee you need to remove\n";
                    int number;
                    cin >> number;
                    if (number == 1)
                    {
                        e2.diplayInfo();
                        e3.diplayInfo();
                        e4.diplayInfo();
                    }
                    else if (number == 2)
                    {
                        e1.diplayInfo();
                        e3.diplayInfo();
                        e4.diplayInfo();
                    }
                    else if (number == 3)
                    {
                        e1.diplayInfo();
                        e2.diplayInfo();
                        e4.diplayInfo();

                    }
                    else if (number == 4) {
                        e1.diplayInfo();
                        e2.diplayInfo();
                        e3.diplayInfo();
                    }


                }
            }
        }


    }
}
