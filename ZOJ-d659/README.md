# ZOJ-d659 - Cost Cutting

XYZ 股份有限公司被巨大的金融海嘯襲擊而必須得減少支出，這些措施包括縮小辦公空間、開放資源、削減獎勵、減少奢侈品的開銷以及裁員。現在這家公司有3位員工，而現在公司要裁掉其中 2 個。經過一連串的面談，公司希望裁掉拿最多薪水以及拿最少薪水的兩人。這種作法似乎是現在的一股趨勢。現在給你3位員工的薪水，請你找出誰不會被裁員。

> * 題目來源：**UVA-11727**
> * 記憶體限制：512 MB
> * 公開 測資點#0 (100%): 1.0s , < 1K

---
## Input

第一行有一整數 T (T < 20) 代表下列有幾行測資。每行測資包括三個整數代表三人的薪水，他們的薪水介於 1,000 至 10,000 之間。

---
## Output

對於每行測資，請輸出一行格式為「Case X: Y」，其中 X 代表第幾筆測資，Y 代表不會被裁員的員工薪水。

---
## Sample Input

```
3
1000 2000 3000
3000 2500 1500
1500 1200 1800
```

---
## Sample Output

```
Case 1: 2000
Case 2: 2500
Case 3: 1500
```