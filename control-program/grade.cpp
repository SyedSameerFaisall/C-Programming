#include <iostream>
using namespace std;
int main(){
  int number;
  char grade;
  cout << "Enter the number of the student in Math1014: "<<endl;
  cin >> number;
  // if (number>=90){
  //   grade = 'A';
  // }      
  // else if (number >=80){
  //   grade = 'B';
  // }
  // else if (number >=70){
  //   grade = 'C';
  // }
  // else if (number >=60){
  //   grade = 'D';
  // }
  // else {
  //   grade = 'F';
  // }
  grade = (number>=90) ? 'A'
    : (number>=80) ? 'B'
      : (number>=70) ? 'C'
        : (number>=60) ? 'D' : 'F';
  cout << "The grade of the student in Math1014 is " << grade << endl;
}