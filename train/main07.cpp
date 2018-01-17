#include <iostream>
#include <cstdlib>
using namespace std;

class student {
  private:
    int id;
    double test1, test2;
    double getAverage();
    static int count;
  public:
    student(int no, double t1, double t2);
    void printStudent();
    static int teacherNo;
    static int getStudentCount(){ return count; };
};

int student::count=0;
int student::teacherNo = 101;
// constructor
student::student(int no, double t1, double t2){
  id=no;
  test1=t1; test2=t2;
  count++;
}
// member function
double student::getAverage(){
  return (test1+test2)/2.0;
}
void student::printStudent(){
  cout << "( " << id<<", "<<test1<<", "<<test2<< " )" << endl;
}


int main(){
  student std1(1,68.0, 78.0);
  student std2(2,52.4, 63.4);

  cout<<"teacher no(student): "<<student::teacherNo<<endl;
  std1.printStudent();
  std2.printStudent();

  cout<<"student1 count: "<<std1.getStudentCount()<<endl;
  cout<<"student2 count: "<<std2.getStudentCount()<<endl;


  return 0;
}

