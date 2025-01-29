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
    void PLusOne()
    {
        StartCount += 1;
        
    }
    void MinusOne() 
    {
        StartCount -= 1;
        

    }
    int GetCurrentCount() 
    {
        cout << StartCount << endl;
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
    Counter c;
    if (answer == Yes)
    {
        cout << "Введите начальное значение счётчика:";
        cin >> StartCount;
        c = Counter(StartCount);

    }
    else if (answer == No)
    {
        c = Counter();

    }
    do
    {
        cout << "Введите команду ('+', '-', '=' или 'x'):" ;
        cin >> Symbol;
        if (Symbol == '+')
        {
            c.PLusOne();
        }
        else if (Symbol == '-')
        {
            c.MinusOne();
        }
        else if (Symbol == '=')
        {
            c.GetCurrentCount();
        }
        else if (Symbol == 'x')
        {
            cout << "До свидания! " << endl;
            break;
        } 
       
    } while (true);
}
        

      
    


