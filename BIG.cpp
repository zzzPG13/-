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
    int choice;

    cout << "********************************************************************************"<<endl;
    cout << "********************************************************************************"<<endl;
    cout << "*************                  WELCOME!!!                          *************"<<endl;
    cout << "*************                1.Date                                *************"<<endl;
    cout << "*************                2.Palindrome                          *************"<<endl;
    cout << "********************************************************************************"<<endl;
    cout << "********************************************************************************"<<endl;
    cout << "                                                                                "<<endl;
    cout << "                                                                                "<<endl;

    cout << "Input 1 to play Date . Input 2 to play Palindrome.Please input your choice:"<<endl;
    cin >> choice;


    switch (choice)
    {
        case 1:
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
        case 2:
        {
            int date;
            int flag;
            int myriabit, kilobit, decade, unit;
            char x;
            cout<<"您想玩回文数程序吗?想请输入y，不想请输入n。"<<endl;
            while(1)
            {
                cin >> x;
                if (x=='y')
                {
                    while (1)
                    {
                        cout << "请输入一个五位数:";
                        cin >> date;

                        if (date>=10000 && date<=99999)
                        {
                            flag = 1;
                            break;
                        }
                        else
                        {
                            cout<<"您输入的不是五位数，请重新输入一个五位数"<<endl;

                        }
                    }


                    if (flag == 1)
                    {
                        myriabit=(date/10000);
                        kilobit=(date%10000)/1000;
                        decade=(date%100)/10;
                        unit=(date%10);


                        if (myriabit==unit  &&  kilobit==decade)
                            cout<<"是！"<<endl;
                        else
                            cout<<"否！"<<endl;
                        cout <<"您想继续玩回文数程序吗？想请输入y，不想请输入n。"<<endl;
                    }
                }

                if (x=='n')
                {
                    cout << "Bye Bye"<<endl;
                    break;
                }



                if (x!='y'  &&  x!='n')
                {
                    cout<<"您输入的是非法字符，请重新输入y或n"<<endl;
                    continue;
                }



            }
            return 0;
        }
    }


    return 0;
}
