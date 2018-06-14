# ZOJ-d418 - Product of digits

給你一個大於等於 $0$ 的整數 $N$，請你你找到最小的自然數 $Q$ ，使得在 $Q$ 中所有數字 (digit) 的乘積等於 $N$。例如：$N = 10$，可以找到 $Q = 25$，因為 $2 \times 5 = 10$。

> * 題目來源：**UVA-993**
> * 記憶體限制： 512 MB
> * 公開 測資點#0 (100%): 1.0s , < 1K

---
## Input

輸入的第一列有一個整數代表共有多少組測試資料。每組測試資料一列有 $1$ 個整數 $N$ ($0 \le N \le 1000000000$)，請參考 Sample Input。

---
## Output

每組測試資料輸出一列，輸出自然數 $Q$，如果 $Q$ 不存在，請輸出 `-1`。

---
## Sample Input

```
5
1
10
123456789
216
26
```

---
## Sample Output

```
1
25
-1
389
-1
```