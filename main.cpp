#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

    int bianry_to_decimal(int n,bool bit[])
    {
        int number = 0,up = 0;
        for(int i=n-1;i >= 0;i--)
        {
            if(bit[i])
            {
                number += pow(2,up);
            }
            up++;
        }
        return number;
    }

    void decimal_to_binary(int num) {
        int bit[32];
        int i = 0;

        while (num > 0) {
            bit[i] = num % 2;
            num = num / 2;
            i++;
        }
        for(int j=i-1;j>=0;j--)
        {
            cout << bit[j];
        }

    }

    int one_compelement(int n,bool bit[])
    {
        bool new_bit[n];
        for(int i=0;i<n;i++)
        {
            new_bit[i] = false;
        }
        for(int i=0;i<n;i++)
        {
            if(bit[i])
            {
                new_bit[i] = false;
            }else if(!bit[i])
            {
                new_bit[i] = true;
            }
        }
        cout << "1's complement: ";
        for(int i=0;i<n;i++)
        {
            cout << new_bit[i];
        }
        cout << endl;
        return bianry_to_decimal(n,new_bit);
    }

    int two_compelement(int n,bool bit[])
    {
        bool check = false;
        bool new_bit[n];
        for(int i=0;i<n;i++)
        {
            new_bit[i] = false;
        }
        for(int i=n-1;i>=0;i--)
        {
            new_bit[i] = bit[i];
            if(bit[i])
            {
                for(int j=i-1;j>=0;j--)
                {
                    if(bit[j])
                    {
                        new_bit[j] = false;
                    }else if(!bit[j])
                    {
                        new_bit[j] = true;
                    }
                }
                check = true;
            }
            if(check)
            {
                break;
            }
        }
        cout << "2's complement: ";
        for(int i=0;i<n;i++)
        {
            cout << new_bit[i];
        }
        cout << endl;
        return bianry_to_decimal(n,new_bit);
    }

    int signed_magnitude(int n,bool bit[])
    {
        if(!bit[0])
        {
            return bianry_to_decimal(n-1,bit);
        }else if(bit[0])
        {
            return ((-1)*bianry_to_decimal(n-1,bit));
        }
    }




fstream history(bool bit[],int n)
{
    fstream information("History.txt", ios::app);
    information << "\nThe Number Math Changes:\n";
    information << "Decimal: " << bianry_to_decimal(n,bit) << endl;
    information << "Bianry: ";

    for(int i=n-1;i<=0;i--)
    {
        if(i % 4 == 0)
        {
            information << ' ';
        }
        information << bit[i];
    }
    information << endl;
    information << "Two Complement: " << two_compelement(n,bit) << endl;
    information << "One Complement: " << one_compelement(n,bit) << endl;
    information << "Signed: " << signed_magnitude(n,bit) << endl;
    for(int i=0;i<30;i++)
    {
        information << "----";
    }
}

int main()
{
    int counter = 0;
    cout << "Enter number of your Bit: \n";
    cin >> counter;
    bool bianry[counter];
    for(int i=0;i < counter;i++)
    {
        cout << "Enter number " << i+1 << " : ";
        cin >> bianry[i];
    }

    history(bianry,counter);
    return 0;
}
