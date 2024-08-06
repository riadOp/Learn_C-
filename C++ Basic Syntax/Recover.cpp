#include<iostream>
#include<iomanip>
namespace first{
    int a = 10;
}

namespace second {
    double c = 2.0849;
}

namespace third{
    int f = 20;
}

int a = 200;
int function1(int a,int b);
int function2(int arr[],int size);

int main(){
    using namespace third;
    int a = 100;
    float b = 5.006565;
    double c = 2.0000;
    const int cat = 3;
    std::string name = "Riaasdd islaa ";
    std::string cars[] ={"Car1","car2","Car3"};
    int arr[5];

    typedef std::string sentence_t;
    typedef int number_t;
    typedef float decimal_t;
    using long_t = double;

    number_t num = 10;
    sentence_t name2 = "Zeitsu";
    long_t num2 = 4.0839473;

    int in; char in2;
    std::string name3;

    std::getline(std::cin >> std::ws, name3);
    std::cin >> in;
    std::cin >>in2;
    

      if(in>30){
        std::cout <<"13.Greater than 30 \n";
    }else if(in>40){
        std::cout << "13.Greater than 40\n";
    }else{
        std::cout << "13.Nothing\n";
    }

    in > 30 ? std::cout <<"OK" : std::cout <<"Not ok\n";

    while(num==2){
        std::cout << "Hello\n";
    }

    do{
        std::cout << "Do Loop\n";
    }while(num>200);

    for(int i =1 ; i<=3;i++){
        std::cout << "For Loop\n";
    }

    for(int i = 0 ; i<5 ; i++){
        std::cin >> arr[i];
    }

    int size = sizeof(cars) / sizeof(cars[0]);
    int size2 = sizeof(arr) / sizeof(arr[0]); 
    
    std::cout << "!!! Recalling C pluss pluss !!! " << std::endl;
    std::cout << "1." << a  <<std::endl;
    std::cout << "2." <<b  << std::endl;
    std::cout << "3." << name << std::endl;
    std::cout << "4." << cat << std::endl;
    std::cout << "5." << first::a << std::endl;
    std::cout << "6." << second::c << std::endl;
    std::cout << "7." << f <<std::endl;
    std::cout <<"8." << num << std::endl;
    std::cout <<"09." << name2 <<std::endl;
    std::cout <<"10.Type Conversion : " <<char(num2) <<std::endl;
    std::cout <<"11.in 1 :" << in <<std::endl;
    std::cout <<"12.in 2 :" <<in2 <<std::endl;
    std::cout <<"Sum Using Function : " << function1(a,b) << std::endl;
    std::cout << "Local Variable : " <<a <<std::endl ;
    std::cout << "Global Variable : " <<::a <<std::endl;
    std::cout << "set Precision : " <<std::setprecision(2) <<std::fixed <<c <<std::endl;
    for(int i = 0; i < size ;i++){
        std::cout <<"Element " << i+1 <<":" << cars[i] <<std::endl;
    }
    
    std::cout << function2(arr,size2);
  
    return 0;
}

int function1(int a,int b){
    return a+b;
}

int function2(int arr[],int size){
    for(int i = 0 ; i<size ; i++){
        std::cout << "Element " <<i+1 <<":" << arr[i] << std::endl;
    }
}