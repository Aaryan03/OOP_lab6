/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

class Employee
  {
    private:
      string employee_name;
      long int employee_id;
      string employee_dept;
      float monthly_salary;
      
    public:
      void read()
      {
          cout << "Enter Employee Name: ";
          getline(cin,employee_name);
          cout << "Enter Employee ID: ";
          cin >> employee_id;
          cout << "Enter Employee Department: ";
          cin >> employee_dept;
          cout << "Enter monthly salary (in rupees): ";
          cin >> monthly_salary;
      }
      
      void print()
      {
          cout << "\nEmployee Details:-\n";
          cout << "Employee Name: " << employee_name << "\nEmployee ID: " << employee_id << "\nEmployee Department: " << employee_dept << endl;
      }
      
      friend class Sales;
  };
  
class Sales
  {
    private:
    long int n;
    float incentive;
    
    public:
      
      void read_display(Employee ob1)
      {
        cout << "\nEnter Number of Sales in the month:\n";
        cin >> n;
        if (n<50)
        {
            cout << "\nMonthly Salary of " << ob1.employee_name << " is " << ob1.monthly_salary << " rupees\n";
            cout << "No incentives applicable. Work Harder!\n";
        }
        
        else if ((n>50)&&(n<100))
        {
            incentive = (0.1)*(ob1.monthly_salary);
            cout << "\nMonthly Salary of " << ob1.employee_name << " is " << ob1.monthly_salary << " rupees\n";
            cout << "Incentive acquired for the month is " << incentive << " rupees\n";
        }
        
        else if ((n>100)&&(n<150))
        {
            incentive = (0.2)*(ob1.monthly_salary);
            cout << "\nMonthly Salary of " << ob1.employee_name << " is " << ob1.monthly_salary << " rupees\n";
            cout << "Incentive acquired for the month is " << incentive << " rupees\n";
        }
        
        else
        {
            incentive = (0.3)*(ob1.monthly_salary);
            cout << "\nMonthly Salary of " << ob1.employee_name << " is " << ob1.monthly_salary << " rupees\n";
            cout << "Incentive acquired for the month is " << incentive << " rupees\n";
        }
        
      }
      
      void performance(Employee ob2)
      {
          if (n<50)
          {
              cout << "Poor Performance by " << ob2.employee_name << " in this month.\n";
          }
          
          else if ((n>50)&&(n<100))
          {
               cout << "Satisfactory Performance by " << ob2.employee_name << " in this month.\n";
          }
          
          else if ((n>100)&&(n<150))
          {
               cout << "Good Performance by " << ob2.employee_name << " in this month.\n";
          }
          
          else 
          {
               cout << "Excellent Performance by " << ob2.employee_name << " in this month.\n";
          }
      }
    
  };


int main()
{
    Employee ob;
    Sales obj;
    ob.read();
    ob.print();
    obj.read_display(ob);
    obj.performance(ob);
    return 0;
}
