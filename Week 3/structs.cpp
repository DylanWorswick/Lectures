#include<iostream>

    struct Student{
        //we want to sore an id name and grade!
        public:
            std::string name;
            int ID;
            double grade;
    };

 void test(Student s1){
       std::cout<<s1.name<<std::endl;
        
    }


int main(){
    //note how there is this repetitive stuff over and over

   
    Student student1;
    Student *pointerStudent;
    
    student1.name="Dylan";
    student1.grade=98.7;
    student1.ID=1852145;
    student1.name="Dylan Worswick";//notice how we can update this value
    std::cout<<student1.name<<std::endl;
    pointerStudent=&student1;
    std::cout<<pointerStudent->name<<std::endl;
    test(student1);




    return 0;
}