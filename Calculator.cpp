
#include <iostream>


class Calculator 
{
private :
    double num1 = 0;
    double num2 = 0;
public: 
    double add(double num1 ,double num2)
    {
         
        return num1 + num2;
    }
    double multiply(double num1, double num2)
    {
        
        return num1 * num2;
    }
    double subtract_1_2(double num1, double num2)
    {
        
        return   num1 - num2;
    }
    double subtract_2_1(double num1, double num2)
    {
        return num2 - num1;
    }
    double divide_1_2(double num1, double num2)
    {
       return num1 / num2;
    }
    double divide_2_1(double num1, double num2)
    {
       
        return num2 / num1;
    }
    bool set_num1(double *num1) 
    {
        if (*num1 != this->num1) 
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
        if (*num2 != this->num2)
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
    Calculator cal;
    std::cout << "Введите num1: ";
    std::cin >> FirstNumber;
    std::cout << "Введите num2: ";
    std::cin >> SecondNumber;
    while (true)
    {

        if (cal.set_num1(&FirstNumber) == true && cal.set_num2(&SecondNumber) == true)
        {
            std::cout << "num1 + num2 = " << cal.add(FirstNumber, SecondNumber) << std::endl;
            std::cout << "num1 - num2 = " << cal.multiply(FirstNumber, SecondNumber) << std::endl;
            std::cout << "num2 - num1 = " << cal.subtract_1_2(FirstNumber, SecondNumber)<<std::endl;
            std::cout << "num1 * num2 = " << cal.subtract_2_1(FirstNumber, SecondNumber)<<std::endl;
            std::cout << "num1 / num2 = " << cal.divide_1_2(FirstNumber, SecondNumber)<< std::endl;
            std::cout << "num2 / num1 = " << cal.divide_2_1(FirstNumber, SecondNumber)<<std::endl;
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



