#include <iostream>
#include <string>
using namespace std;

// create a class
class person {
    protected:
        string surname;
    private:
        int balance;
    public:
        int age;
        string name;

        // constructor, method automaticalyl called when object is made
        person(int personAge, string personName, string personSurname, int personBalance) {
            age = personAge;
            name = personName;
            surname = personSurname;
            balance = personBalance;
        }

        // class method
        void printInfo() {
            cout << "name is " << name << " and age is " << age << endl;
        }

        // method outside
        void speak(string sentence);

        // setters to change values
        void setDetails(int personAge, string personName, string personSurname, int personBalance) {
            age = personAge;
            name = personName;
            surname = personSurname;
            balance = personBalance;
        }

        // getters
        int getAge() {
            return age;
        }

        string getName() {
            return name;
        }
};

// inheritance
class relative: public person {
    public:
        string relativeType;

        relative(int personAge, string personName, string personSurname, int personBalance, string relativeKind) : person(0, "", "", 0) {
            age = personAge;
            name = personName;
            surname = personSurname;
            relativeType = relativeKind;
        }

        void whoRelative() {
            cout << name << " is a " << relativeType << endl;
        }
};

// polymorphism
class ceo : public person {
    public:
        ceo(int personAge, string personName, string personSurname, int personBalance) : person(0, "", "", 1000000) {
            age = personAge;
            name = personName;
            surname = personSurname;
        }

        void printInfo() {
            cout << "very important ceo, cant leak information" << endl;
        }
};

// class method but outside
void person::speak(string sentence) {
    cout << name << " says " << sentence << endl;
}

int main() {
    // polymorphism
    ceo tim(60, "tim", "tim", 1000000);
    tim.printInfo();
    tim.speak("hello, im ceo of some fancy company");

    // create object
    person jonathan(19, "jonathan", "lu", -1000);

    // alternative way to instantiate it but constructor is better
    /*
    jonathan.age = 19;
    jonathan.name = "jonathan";
    */
    
    // access object
    cout << jonathan.age << endl;
    cout << jonathan.name << endl;

    // call object methods
    jonathan.printInfo();

    // method declared outside w/ parameter
    jonathan.speak("bish bash bosh");

    // setter change details
    jonathan.setDetails(20, "jon", "lu", 1000);

    // use getters 
    cout << jonathan.getAge() << endl;
    cout << jonathan.getName() << endl;


    // inheritance
    relative brother(28, "generic name", "lu", 1000, "brother");
    brother.whoRelative();
    brother.printInfo();
    brother.getAge();
    brother.getName();

    return 0;
}