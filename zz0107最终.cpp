/*
*FileName:zz0107.cpp
*Author:Zhang Guanglong
*Function:Judging of palindrome
*Date:Jan 07 2020
*E-mail:1355176037@qq.com
*/
#include<iostream>
using namespace std;
int main()
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



