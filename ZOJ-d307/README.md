# ZOJ-d307 - Goldbach's Conjecture (II)

在 1742 年一個德國業餘數學家 Christian Goldbach，他作了以下的猜測：任何一個比 $4$ 大的偶數一定能夠找到 $2$ 個質數使其和相等。例如：

* $8 = 3 + 5$ ($3$ 和 $5$ 都是奇數，且是質數)
* $20 = 3 + 17 = 7 + 13$
* $42 = 5 + 37 = 11 + 31 = 13 + 29 = 19 + 23$

你的任務就是寫一個程式輸出對每一個大於 $4$ 的偶數，可以找到幾組這樣的奇數質數的組合。請注意：我們只對有幾組不同的組合有興趣，所以 $(p_1, p_2)$ 和 $(p_2, p_1)$ 不應該被視為不同的組合。

> * 題目來源：**UVA-686**
> * 記憶體限制：512 MB
> * 公開 測資點#0 (100%): 1.0s , < 1M

---
## Input

輸入包含好幾筆測試資料，每筆資料 $1$ 行,包含一個偶數的整數 $n$ ($4 \le n < 2{15}$)。$n = 0$ 代表輸入結束。

---
## Output

對每筆輸入資料你應該輸出一個整數，代表輸入可找到幾組不同的組合。

---
## Sample Input

```
8
20
42
6
10
12
0
```

---
## Sample Output

```
1
2
4
1
2
1
```