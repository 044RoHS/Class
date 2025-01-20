
#include <iostream>


class Calculator 
{
private:
    double num1 = 0;
    double num2 = 0;
public: 
    double add(double num1 ,double num2)
    {
        std::cout<< "num1 + num2 = " << num1 + num2 << std::endl;
        return 0;
    }
    double multiply(double num1, double num2)
    {
        std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
        return 0;
    }
    double subtract_1_2(double num1, double num2)
    {
        std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
        return 0;
    }
    double subtract_2_1(double num1, double num2)
    {
        std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
        return 0;
    }
    double divide_1_2(double num1, double num2)
    {
        std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
        return 0;
    }
    double divide_2_1(double num1, double num2)
    {
       std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
        return 0;
    }
    bool set_num1(double num1) 
    {
        num1 == this->num1 ? true : false;
        return 0;
    }
    bool set_num2(double num2) 
    {
        num2 == this-> num2? true : false;
        return 0;
    }

};


int main()
{
    setlocale(LC_ALL, "RU");
    double FirstNumber;
    double SecondNumber;
    Calculator cal;
   while (true)
   {
        std::cout << "Введите num1: ";
        std::cin >> FirstNumber;
        std::cout << "Введите num2: ";
        std::cin >> SecondNumber;
        if (cal.set_num1(FirstNumber) == true && cal.set_num2(SecondNumber) == true) 
        {
            cal.add(FirstNumber, SecondNumber);
            cal.multiply(FirstNumber, SecondNumber);
            cal.subtract_1_2(FirstNumber, SecondNumber);
            cal.subtract_2_1(FirstNumber, SecondNumber);
            cal.divide_1_2(FirstNumber, SecondNumber);
            cal.divide_2_1(FirstNumber, SecondNumber);
        }
        else if (cal.set_num1(FirstNumber) == false && cal.set_num2(SecondNumber) == true)
        {
            std::cout << "Неверный ввод! ";
            std::cout << "Введите num1: ";
            std::cin >> FirstNumber;
            
        }
        else if (cal.set_num1(FirstNumber) == true && cal.set_num2(SecondNumber) == false)
        {
            std::cout << "Неверный ввод! ";
            std::cout << "Введите num1: ";
            std::cin >> FirstNumber;

        }
       



    }

   
    
}



