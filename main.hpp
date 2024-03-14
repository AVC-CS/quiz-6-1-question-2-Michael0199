#include <iostream>
#include <fstream>
using namespace std;



int writeFile(int);
int readFile(int);

int writeFile(string T){
   
  ofstream ofs;
   ofs.open(T);
   if (!ofs)
   {
       cout << "File Open Error\n";
       exit(0);
   }
      int N,ID; 
      string Name; 
      string Dep;
      double Salary;
cout << "Enter the number of employees: ";
      cin >> N;
      ofs << N;
      for (int i = 0; i < N; i++) {
        cin >> ID >> Name >> Dep >> Salary;
        ofs << ID << Name << Dep << Salary;
      ofs.close();
}
return N;
  }


int readFile(string T){
  ifstream ifs;
  ifs.open(T);
  if (!ifs)
  {
      cout << "File Open Error\n";
      exit(0);
  }
  int N, ID; 
    string Name; 
    string Dep;
    double Salary, TotalSalary, AverageSalary;;
      ifs >> N;
      for (int i = 0; i < N; i++){
        ifs >> ID >> Name >> Dep >> Salary;
        cout << ID << Name << Dep << Salary;
  }
return N;
}