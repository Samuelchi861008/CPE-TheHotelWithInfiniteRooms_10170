# The Hotel with infinite Rooms 

有一間很奇怪的旅館，他有無限多的房間。來到這家旅館的旅行團都遵守以下的規則：

(一)同一個時間只能住一個旅行團。 

(二)每一旅行團在一早就住進旅館，然後在另一天的晚上離開。 

(三)上一個旅行團離開之後，隔天早上另一旅行團即住進。 

(四)除了第一個旅行團之外，每個剛來的旅行團的人數都比上一個旅行團多一人。 

有n個人的旅行團會在旅館住n天。例如：有一個4個人的旅行團在8月1日上午住進旅館，他們會在8月4日晚上離開旅館。下一個有5個人的旅行團會在8月5日住進，並且停留5天。
給你第一個旅行團的人數，請你告訴我在某一天住在這家旅館的旅行團的人數有多少人。 

每筆測試資料一列。每列有2個整數 S（1 <= S <= 10000）和 D（1 <= D <= 1015）。S代表第一個旅行團的人數，D代表從第一個旅行團住進後的天數（從1開始算起）。 

對每一測試資料，請輸出從第一個旅行團住進後的第D天時，住在旅館的旅行團的人數是多少。 

＊詳細說明：

===範例一===

firstPeople = 1, day = 6 

(1人)1 

(2人)2 3 

(3人)4 5 6 

output : 3

===範例二===

firstPeople = 3, day = 10 

(3人)1 2 3 

(4人)4 5 6 7 

(5人)8 9 10 11 12 

output : 5  

===範例三=== 

firstPeople = 3, day = 14 

(3人)1  2  3 

(4人)4  5  6  7 

(5人)8  9  10 11 12 

(6人)13 14 15 16 17 18  

output : 6 


# Output example
* 已成功通過「瘋狂程設」閱卷系統批改測試 
![image](https://github.com/Samuelchi861008/CPE-TheHotelWithInfiniteRooms_10170/blob/master/結果.png)
