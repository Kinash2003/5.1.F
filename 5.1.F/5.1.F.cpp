// 5.1.F.cpp 
#include <iostream>
#include <exception>
#include <stdexcept>
#include "Date_Public.h"
#include "Date_Private.h"
#include <Windows.h> 

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try
    {
        
        Date_Private A2(7, 4, 1);
        Date_Private B2(3, 5, 2);
        Date_Private C2(2010, 2, 22);
        Date_Private D2(2010, 2, 22);
        int result;
        cout << " Date_Private: " << endl;

        cout << " Comparison Triad: " << endl;
        result = A2.Сomparison(A2, B2);
        A2.TriadResult(result);

        cout << " Comparison Date: " << endl;
        result = C2.Сomparison(C2, D2);
        C2.date1(result);

        cout << " A2++ " << endl; cout << A2++ << endl;
        cout << " A2-- " << endl; cout << A2-- << endl;
        cout << " ++A2 " << endl; cout << ++A2 << endl;
        cout << " --A2 " << endl; cout << --A2 << endl;
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (Bad_exception& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }
    try
    {
            Date_Public  A1(1, 1, 1);
            Date_Public B1(4, 4, 4);
            Date_Public C1(2010, 2, 22);
            Date_Public D1(2010, 2, 22);
            int result;
           
            cout << " Date_Public: " << endl;

            cout << " Comparison Triad: " << endl;
            result = A1.Сomparison(A1, B1);
            A1.TriadResult(result);

            cout << " Comparison Date: " << endl;
            result = C1.Сomparison(C1, D1);
            C1.date1(result);

            cout << " A2++ " << endl; cout << A1++ << endl;
            cout << " A2-- " << endl; cout << A1-- << endl;
            cout << " ++A2 " << endl; cout << ++A1 << endl;
            cout << " --A2 " << endl; cout << --A1 << endl;


    }
     
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (Bad_exception& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }

}    

        

      

        

   