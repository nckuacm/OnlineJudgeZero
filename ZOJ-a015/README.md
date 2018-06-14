# ZOJ-a015 - 矩陣的翻轉

已知一 ($m \times n$) 矩陣 $A$，我們常常需要用到另一個將 $A$ 中之行與列調換的矩陣。這個動作叫做矩陣的翻轉。舉例來說，若

$$
A = \left[
\begin{matrix}
3 & 1 & 2 \\
8 & 5 & 4
\end{matrix}
\right]
$$

現在請您針對所讀取到的矩陣進行翻轉。

> * 記憶體限制： 512 MB
> * 公開 測資點#0 (100%): 1.0s , < 1K

---
## Input

第一行會有兩個數字，分別為列 (row) $< 100$ 和  (column) $< 100$，緊接著就是這個矩陣的內容。

---
## Output

直接輸出翻轉後的矩陣。

---
## Sample Input

```
2 3
3 1 2
8 5 4
```

---
## Sample Output

```
3 8
1 5
2 4
```