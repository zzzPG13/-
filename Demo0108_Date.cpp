


/*
 * Author: Yan Yonghang
 * E-mail:feifanyyh@163.com
 * Date:Jan 8, 2020
 * Function: Computing the Date
 */

#include <iostream>

using namespace std;

int main()
{
	/* �����ı��ʣ��ڴ���Ĵ洢��Ԫ
	 * ��������Ҫ�أ������������͡�ֵ��ȡֵ��Χ
	 */

    //���飺һ�������ͬ�������͵�Ԫ�ص������洢�ռ�
    int date=0;
    int year, month, day;
    cout << "������һ�����ڣ������磺2020 1 8��";
    cin >> year >> month >> day;

    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; // ��ʼ��ֵ�б�

    if((year%4==0&&year%100!=0)||(year%400==0))
        arr[2]+=1;

    for(int i=1; i<month; i++)
        date+=arr[i];

    date+=day;

    cout << "Year: " << year << " Month: "
    << month << " Day: " << day <<
    " is the " << date << "th day in the Year: " << year << endl;



	return 0;  // �����������˳�ʱ���ó��������ϵͳ���ص�һ��ֵ��
}
