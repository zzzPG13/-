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
    cout<<"�����������������?��������y������������n��"<<endl;
    while(1)
    {
        cin >> x;
        if (x=='y')
        {
            while (1)
            {
                cout << "������һ����λ��:";
                cin >> date;

                if (date>=10000 && date<=99999)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    cout<<"������Ĳ�����λ��������������һ����λ��"<<endl;

                }
            }


            if (flag == 1)
            {
                myriabit=(date/10000);
                kilobit=(date%10000)/1000;
                decade=(date%100)/10;
                unit=(date%10);


                if (myriabit==unit  &&  kilobit==decade)
                    cout<<"�ǣ�"<<endl;
                else
                    cout<<"��"<<endl;
                cout <<"����������������������������y������������n��"<<endl;
            }
        }

        if (x=='n')
        {
            cout << "Bye Bye"<<endl;
            break;
        }



        if (x!='y'  &&  x!='n')
        {
            cout<<"��������ǷǷ��ַ�������������y��n"<<endl;
            continue;
        }



    }
    return 0;
}



