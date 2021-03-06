# ZOJ-a133 - Credit Check

很久以前在一個古老師王國有兩座形狀不同的塔聳立在兩個不同的城市裡。塔是以圓形磁磚疊起來的。每塊磁磚的高度相同且半徑均為整數。因此，儘管兩座塔形狀不同，卻包含了許多相同的磁磚。然而在建塔的一千多年後，國王命令建築師移除某些磁磚好使兩座塔的形狀大小都相同，並且要維持可能的最大高度。磁磚的順序須與原始建築相同。國王認為這樣可以象徵兩個城市的和諧與平等。他名之為「雙子星塔」。現在，大約兩千年後，你被賦予一個更簡單的任務：給你兩座塔的描述，你只要找出可能的最大磁磚數。

> * 題目來源：**UVA-10066**
> * 記憶體限制：512 MB
> * 公開測資點#0 (100%): 1.0s , < 1M

---
## Input

輸入有若干筆測資。每筆測資代表一對雙子星塔。每筆測資的第一行有兩個整數 $N_1$ 及 $N_2$ ($1 \le N_1, N_2 \le 100$) 代表兩座塔的磁磚數。下一行含有 $N_1$ 個正整數，代表第一座塔由上而下磁磚的半徑。下一行的 $N_2$ 個整數則是第二座塔由上而下磁磚的半徑。$N_1$ 及 $N_2$ 為 $0$ 代表輸入結束。

---
## Output

對於每一對雙子星塔，輸出它的編號及每座塔所能保留的最大可能磁磚數。測資間請空一行。

---
## Sample Input

```
7 6
20 15 10 15 25 20 15
15 25 10 20 15 20
8 9
10 20 20 10 20 10 20 10
20 10 20 10 10 20 10 10 20
0 0
```

---
## Sample Output

```
Twin Towers #1
Number of Tiles : 4

Twin Towers #2
Number of Tiles : 6

```