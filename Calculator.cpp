
#include <iostream>


class Calculator 
{
private :
    double num1 = 0;
    double num2 = 0;
public: 
    Calculator( int First , int Second ) 
    {
        num1 = First;
        num2 = Second;
    }
    double add()
    {
         
        return num1 + num2;
    }
    double multiply()
    {
        
        return num1 * num2;
    }
    double subtract_1_2()
    {
        
        return   num1 - num2;
    }
    double subtract_2_1()
    {
        return num2 - num1;
    }
    double divide_1_2()
    {
       return num1 / num2;
    }
    double divide_2_1()
    {
       
        return num2 / num1;
    }
    bool set_num1(double *num1) 
    {
        this->num1 = *num1 ;
        if(this->num1 != 0 ) 
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    bool set_num2(double *num2) 
    {
         this->num2 = *num2;
        if ( this->num2 != 0)
        {
            return true;
        }
        else
        {
            return false;
        };
    }

};


int main()
{
    setlocale(LC_ALL, "RU");
    double FirstNumber;
    double SecondNumber;
    std::cout << "Введите num1: ";
    std::cin >> FirstNumber;
    std::cout << "Введите num2: ";
    std::cin >> SecondNumber;
    Calculator cal(FirstNumber, SecondNumber);
    while (true)
    {

        if (cal.set_num1(&FirstNumber) == true && cal.set_num2(&SecondNumber) == true)
        {
            std::cout << "num1 + num2 = " << cal.add() << std::endl;
            std::cout << "num1 * num2 = " << cal.multiply() << std::endl;
            std::cout << "num1 - num2 = " << cal.subtract_1_2()<<std::endl;
            std::cout << "num2 - num1 = " << cal.subtract_2_1()<<std::endl;
            std::cout << "num1 / num2 = " << cal.divide_1_2()<< std::endl;
            std::cout << "num2 / num1 = " << cal.divide_2_1()<<std::endl;
            std::cout << "Введите num1: ";
            std::cin >> FirstNumber;
            std::cout << "Введите num2: ";
            std::cin >> SecondNumber;
        }
        else if (cal.set_num1(&FirstNumber) == false && cal.set_num2(&SecondNumber) == true)
        {
            std::cout << "Неверный ввод! " << std::endl;
            std::cout << "Введите num1: ";
            std::cin >> FirstNumber;
            

        }
        else if (cal.set_num1(&FirstNumber) == true && cal.set_num2(&SecondNumber) == false)
        {
            std::cout << "Неверный ввод! " << std::endl;
            std::cout << "Введите num2: ";
            std::cin >> SecondNumber;
            
        }
        else 
        {
            std::cout << "Неверный ввод! " << std::endl;
            std::cout << "Введите num1: ";
            std::cin >> FirstNumber;
            std::cout << "Введите num2: ";
            std::cin >> SecondNumber;

        }
    
       
       
       



    }

   
    
}



