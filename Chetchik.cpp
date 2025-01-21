#include <iostream>
# include<string>
using namespace std;

class Counter
{
private:
    int StartCount;
public:
    Counter( int StartCount) 
    {
        this->StartCount = StartCount;
    }
    Counter() 
    {
        StartCount = 1;
    }
    int PLusOne()
    {
        StartCount += 1;
        return 0;
    }
    int MinusOne() 
    {
        StartCount -= 1;
        return 0;

    }
    int GetCurrentCount() 
    {
        cout << StartCount;
        return 0;
    }
    

};

int main()
{
    setlocale(LC_ALL, "RU");
    string answer;
    char Symbol;
    int StartCount;
    string Yes = "да";
    string No = "нет";
    cout << "Вы хотите указать начальное значение счётчика? " << endl;
    cout << "Введите да или нет:";
    cin >> answer;
    
        if (answer.compare(Yes) == 0)
        {
            cout << "Введите начальное значение счётчика:";
            cin >> StartCount;
            Counter count(StartCount);
            while (true) 
            {
                cout << "Введите команду ('+', '-', '=' или 'x'):";
                cin >> Symbol;
                if (Symbol == '+')
                {
                    count.PLusOne();
                }
                else if (Symbol == '-')
                {
                    count.MinusOne();
                }
                else if (Symbol == '=')
                {
                    count.GetCurrentCount();
                }
                else if (Symbol == 'x')
                {
                    cout << "До свидания! " << endl;
                    break;
                }

            }
         

        }
        else if (answer == No)
        {
            Counter counter;
            while (true) 
            {
                cout << "Введите команду ('+', '-', '=' или 'x'):";
                cin >> Symbol;
                if (Symbol == '+')
                {
                    counter.PLusOne();
                }
                else if (Symbol == '-')
                {
                    counter.MinusOne();
                }
                else if (Symbol == '=')
                {
                    counter.GetCurrentCount();
                }
                else if (Symbol == 'x')
                {
                    cout << "До свидания! " << endl;
                    break;
                }

            }
            
        }
    
    
}

