#include <QCoreApplication>
#include<iostream>
#include<iomanip>

#define SQUARE(x) \
              (x*x)


#define COMPARE(x,y) \
               (x<y)



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double number;
    double total;
    std::cout<<"Please Enter a number - ";
    std::cin>>number;

    total=SQUARE(number);               //square

    std::cout<<total<<std::setprecision(2);

    double m,n;

    std::cout<<"Please Enter two variables ";
    std::cout<<std::endl;
    std::cin>>m;
    std::cout<<std::endl;
    std::cin>>n;

    bool answer;

    answer=COMPARE(m,n);               //If m<n ::true else false. 
 
    std::cout<<answer;

    return a.exec();
}
