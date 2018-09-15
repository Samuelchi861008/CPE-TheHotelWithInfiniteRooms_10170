/* **************************************************************************

    * File Name : The_Hotel_With_Infinite_Rooms.cpp

    * Creation Date : 2018-09-10 16:52:20

    * Last Modified : 2018-09-15 23:05:16

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
    int firstPeople; //第一個旅行團人數
    long long day; //天數
    long long ans; //最後人數

    while(cin >> firstPeople >> day)
    {
        for(int i = firstPeople; day > 0; i++)
        {
            day -= i; 
            ans = i;
        }
        cout << ans << endl;
    }
    return 0;
}
