/*
*FileName:date.cpp
*Author:Zhang Guanglong
*Function : DETERMINR THE DAY OF THE YEAR
*Date: Jan 8 2020
*E-mail: zzzpg13@163.com
*/
#include<iostream>

using namespace std;

int main()
{
    int date=0;
    int year, month, day, flag;
    char x;
    int arr[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};


    cout << "你想玩日期游戏吗?想请输入y，不想请输入n。"<<endl;
    while(1)
    {
        cin >> x;


        if ('y'==x)
        {
            while(1)
            {

                cout << "请输入一个日期：（例如  2001 8 23 ）"<<endl;
                cin >> year >> month >> day;


                if ( (year%4==0 && year&100!=0)  ||  (year%400==0) )
                {
                    arr[2]+=1;
                }


                if ( month<13 && month >0 && day >0 && day <= arr[month] )
                {
                    flag=1;
                    break;
                }
                else
                {
                    cout << "您输入的不是有效日期，请重新输入一个有效日期； "<<endl;
                }
            }

            if (1==flag)
            {
                for( int i=1; i<month; i++)
                {
                    date+=arr[i];
                }

                date+=day;


                cout << "Year: " << year << " Month: "<< month <<
                     " Day: " << day <<" is the " << date << "th day in the Year: "
                     << year << endl;

                cout << "您还想继续玩日期游戏吗？想请输入 y ， 不想请输入 n "<<endl;

            }

        }

        if ('n'==x)
        {
            cout << "Bye bye"<<endl;
            break;
        }


        if ('y'!=x && 'n'!=x)
        {
            cout << "输入的是非法字符，请重新输入 y 或 n "<<endl;
            continue;
        }

    }


    return 0;
}
