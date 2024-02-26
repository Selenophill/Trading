1) Develop a C++ program to find the largest of three numbers
#include <iostream>
int main() 
{
double num1, num2, num3;
std::cout << "Enter three numbers: ";
std::cin >> num1 >> num2 >> num3;
if (num1 >= num2 && num1 >= num3) {
std::cout << "The largest number is: " << num1 << std::endl;
} else if (num2 >= num1 && num2 >= num3) {
std::cout << "The largest number is: " << num2 << std::endl;
} else {
std::cout << "The largest number is: " << num3 << std::endl;
}
return 0;
}



Output
 




2)Develop a C++ program to sort the elements in ascending and descending order
 #include <iostream>
void bubbleSortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
      … 

[Develop a C++ program using classes to display student name, roll number, marks obtained in two subjects and total score of student: 
#include <iostream>
#include <string>
class Student {
private:
    std::string name;
    int rollNumber;
    double subject1Marks;
double subject2Marks;
public:
    Student(conststd::string& studentName, int studentRollNumber, double marks1, double marks2)
       name(studentName),rollNumber(studentRollNumber), subject1Marks(marks1), subject2Marks(marks2) 
{
    }
    double calculateTotalScore() const 
{
        return subject1Marks + subject2Marks;
    }
    void displayStudentInfo() const 
{
        std::cout << "Student Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks in Subject 1: " << subject1Marks << std::endl;
        std::cout << "Marks in Subject 2: " << subject2Marks << std::endl;
        std::cout << "Total Score: " << calculateTotalScore() << std::endl;
    }
}
int main() 
{
    Student student("John Doe", 123456, 85.5, 92.0);
    student.displayStudentInfo();
return 0;
}
 

4)Develop a C++ program for a bank empolyee to print name of the employee, account_no. & balance.
Print invalid balance if amount<500, Display the same, also display the balance after withdraw and deposit.
 
#include <iostream>
#include <string>
class BankEmployee
 {
private:
    std::string employeeName;
    int accountNumber;
    double balance;
public:
    BankEmployee(const std::string& name, int accountNo, double initialBalance)
        : employeeName(name), accountNumber(accountNo), balance(initialBalance) {
    }
    void displayInformation() const {
        std::cout << "Employee Information:" << std::endl;
        std::cout << "Name: " << employeeName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
        if (balance < 500) {
            std::cout << "Invalid Balance! Balance should be at least 500." << std::endl;
        } else {
            std::cout << "Valid Balance." << std::endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. New Balance: " << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New Balance: " << balance << std::endl;
        } else 
std::cout << "Invalid deposit amount." << std::endl;
        }
    }
};
int main() 
{
    // Create a BankEmployee object
    BankEmployee employee("John Doe", 123456789, 1000.0);
    employee.displayInformation();
    employee.withdraw(200.0);
    employee.deposit(300.0);
return 0;
}







5)Develop a C++ program to demonstrate function overloading for the following prototypes.
#include<iostream.h>
add(int a, int b)
add(double a, double b)
int add(int a, int b) 
{
    return a + b;
}
double add(double a, double b) 
{
    return a + b;
}
int main() {
    int resultInt = add(5, 10);
    std::cout << "Sum of integers: " << resultInt << std::endl;
    double resultDouble = add(3.5, 2.5);
    std::cout << "Sum of doubles: " << resultDouble << std::endl;
 return 0;
}
 


6)Develop a C++ program using Operator Overloading for overloading Unary minus  operator.
 #include <iostream>
class Number {
private:
    int value;
public:
    Number(int initialValue) : value(initialValue) {}
    Number operator-() const 
{
        return Number(-value);
    }
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};
int main() {
    Number num1(10);
    std::cout << "Original value:" << std::endl;
    num1.display();
    Number num2 = -num1;
    std::cout << "Negated value:" << std::endl;
    num2.display();
return 0;
}
 

7)Develop a C++ program to implement Multiple inheritance for performing arithmetic operation of two numbers.
#include <iostream>
class Addition {
public:
    int add(int a, int b) 
{
        return a + b;
    }
};
class Subtraction 
{
public:
    int subtract(int a, int b) 
{
        return a - b;
    }
};
class Arithmetic : public Addition, public Subtraction 
{
public:
    void displayResults(int a, int b) {
        std::cout << "Addition: " << add(a, b) << std::endl;
        std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    }
};
int main() 
{
    Arithmetic arithmetic;
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    arithmetic.displayResults(num1, num2);
return 0;
}
 

7) Develop a C++ program using Constructor in Derived classes to initialize alpha, beta and gamma and display corresponding values.
 #include <iostream>
class Base 
{
protected:
    int alpha;
public:
    Base(int a) : alpha(a) {}
    void displayAlpha() const 
{
        std::cout << "Alpha: " << alpha << std::endl;
    }
};
class Derived1 : public Base 
{
protected:
    int beta;
public:
    Derived1(int a, int b) : Base(a), beta(b) {}
    void displayBeta() const 
{
        std::cout << "Beta: " << beta << std::endl;
    }
};

class Derived2 : public Derived1 
{
private:
    int gamma;

public:
    Derived2(int a, int b, int c) : Derived1(a, b), gamma(c) {}
    void displayGamma() const {
        std::cout << "Gamma: " << gamma << std::endl;
    }
};
int main() 
{
    Derived2 obj(1, 2, 3);
    obj.displayAlpha();
    obj.displayBeta();
obj.displayGamma();
return 0;
}
 

8)Develop a C++ program to create a text file, check file created or not, if created it will write some text into the file and then read the text from the file.
#include <iostream>
#include <fstream>
#include <string>
int main() 
{
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        std::cout << "File created successfully!" << std::endl;

        std::string textToWrite = "Hello, this is a sample text.";
        outFile << textToWrite << std::endl;
        std::cout << "Text written to the file." << std::endl;
        outFile.close();
        std::ifstream inFile("example.txt");
        if (inFile.is_open()) {
            std::cout << "Reading text from the file:" << std::endl;
           std::string line;
            while (getline(inFile, line)) {
                std::cout << line << std::endl;
            }
            inFile.close();
        } else 
{
            std::cerr << "Error opening file for reading." << std::endl;
        }
    } else 
{
        std::cerr << "Error creating file." << std::endl;
    }
return 0;
}
 

9) Develop a C++ program to write and read time in/from binary file using fstream
#include <iostream>
#include <fstream>
#include <ctime>
void writeTimeToFile(const std::string& filename) {
    std::time_t currentTime = std::time(nullptr);
    std::ofstream outFile(filename, std::ios::binary);
    if (outFile.is_open()) {
        outFile.write(reinterpret_cast<const char*>(&currentTime), sizeof(currentTime));

        outFile.close();
std::cout << "Time successfully written to file." << std::endl;
    } else 
{
 std::cerr << "Error opening file for writing." << std::endl;
    }
}
void readTimeFromFile(const std::string& filename) 
{
    std::ifstream inFile(filename, std::ios::binary);
    if (inFile.is_open()) 
{
        std::time_t storedTime;
        inFile.read(reinterpret_cast<char*>(&storedTime), sizeof(storedTime));
        inFile.close();

        std::cout << "Time read from file: " << std::asctime(std::localtime(&storedTime)) << std::endl;
    } else
{
        std::cerr << "Error opening file for reading." << std::endl;
    }
}
int main() {
    const std::string filename = "time_data.bin";
    writeTimeToFile(filename);
    readTimeFromFile(filename);
 return 0;
}
 

10) Develop a function which throws a division by zero exception and catch it in catch block. Write a C++ program to demonstrate usage of try, catch and throw to handle exception.
#include <iostream>
#include <stdexcept>
// Function that throws a division by zero exception
double divide(int numerator, int denominator) {
    if (denominator == 0) 
{
   throw std::runtime_error("Division by zero is not allowed.");
    }
    return static_cast<double>(numerator) / denominator;
}
int main() 
{
    int numerator, denominator;
// Get input from the user
    std::cout << "Enter numerator: ";
    std::cin >> numerator;
std::cout << "Enter denominator: ";
    std::cin >> denominator;

{
        
        double result = divide(numerator, denominator);
        std::cout << "Result of division: " << result << std::endl;
    } 
catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
return 0;
}
 

Develop a C++ program that handles array out of bounds exception using C++.
#include <iostream>
#include <stdexcept>
int main() 
{
    const int size = 5;
    int arr[size];
 try 
{
        int index;
        std::cout << "Enter the index to access: ";
        std::cin >> index;
if (index < 0 || index >= size) {
            throw std::out_of_range("Array index out of bounds");
        }
        std::cout << "Value at index " << index << ": " << arr[index] << std::endl;
} 
catch (const std::out_of_range& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
} 
catch (...) 
{
        std::cerr << "Unknown exception caught" << std::endl;
    }
return 0;
}
        std::cerr << "Unknown exception caught" << std::endl;
    }
return 0;
}
 

