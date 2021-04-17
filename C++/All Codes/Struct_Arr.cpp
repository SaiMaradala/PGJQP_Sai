 #include<iostream>

       struct Employee
       {
              int Id;
              char Name[25];
              int Age;
              long Salary;
       };

       int main()
       {
              int i;
              Employee Emp[ 3 ];         /

              for(i=0;i<3;i++)
              {

              cout << "\nEnter details of " << i+1 << " Employee";

                    cout << "\n\tEnter Employee Id : ";
                    cin >> Emp[i].Id;

                    cout << "\n\tEnter Employee Name : ";
                    cin >> Emp[i].Name;

                    cout << "\n\tEnter Employee Age : ";
                    cin >> Emp[i].Age;

                    cout << "\n\tEnter Employee Salary : ";
                    cin >> Emp[i].Salary;
              }

              cout << "\nDetails of Employees";
              for(i=0;i<3;i++)
              cout << "\n"<< Emp[i].Id <<"\t"<< Emp[i].Name <<"\t"
                       << Emp[i].Age <<"\t"<< Emp[i].Salary;


       }
