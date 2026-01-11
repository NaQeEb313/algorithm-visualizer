

---

# 🔁 Backtracking Algorithm Visualizer

A **code-driven backtracking visualizer** that separates **algorithm execution (C++)** from **visualization (browser)**.

* **C++** generates recursion steps into a log file
* **JavaScript (p5.js)** animates those steps in the browser

This keeps the algorithm **fast**, **clean**, and **easy to understand**.

---

## 📂 Project Structure

```
.
├── main.cpp        # Backtracking algorithms (C++)
├── steps.log       # Auto-generated execution steps
├── index.html      # Browser visualizer (p5.js)
└── README.md
```

---

## ⚙️ Supported Algorithms

| Name          | Description                      |
| ------------- | -------------------------------- |
| `binary`      | Binary string generation         |
| `subset`      | All subsets of a set             |
| `combination` | k-combinations (k fixed in code) |
| `permutation` | All permutations of a set        |

---

## 🚀 How to Use (After Downloading)

### 1️⃣ Compile the Code

```bash
g++ main.cpp -o visualizer
```

---

### 2️⃣ Run the Program and Give Input

The program reads from **standard input**.

#### Input Format

```
<algorithm_name>
<input values>
```

#### Examples

**Binary (length = 3)**

```
binary
3
```

**Subset**

```
subset
1 2 3
```

**Combination**

```
combination
1 2 3 4
```

**Permutation**

```
permutation
1 2 3
```

Run:

```bash
./visualizer
```

✔ This generates **`steps.log`**

---

### 3️⃣ Open the Visualizer in Browser

Start a local server (recommended):

```bash
python -m http.server
```

Open in browser:

```
http://localhost:8000/index.html
```

📌 **`steps.log` and `index.html` must be in the same folder.**

---

## 🎮 Browser Controls

| Key   | Action       |
| ----- | ------------ |
| Space | Play / Pause |
| `+`   | Speed up     |
| `-`   | Slow down    |

---

## 📏 Maximum Input Size (IMPORTANT)

Backtracking grows **exponentially**, so limits are intentional.

### 🔹 Recommended (With Visualization)

```
Input size: 8 – 12
```

✔ Smooth animation
✔ Clear understanding
✔ Best for learning & demos

---

### 🔹 Without Visualization (C++ only)

```
Binary / Subset: up to 25–30
Permutation: up to 10–11
```

⚠️ Not suitable for visualization

---

### 📊 Algorithm-wise Limits (Visual)

| Algorithm       | Max Input |
| --------------- | --------- |
| Binary / Subset | 10–12     |
| Combination     | 8–10      |
| Permutation     | 7–8       |

---

## ⚡ Performance Notes

* C++ runs **without delay by default**
* Visualization speed is controlled **only in the browser**
* Logging is optimized for speed

---

## 🎓 Educational Purpose

This project helps understand:

* Recursion
* Backtracking
* Call stack behavior
* Time complexity growth

Ideal for:

* College projects
* Viva / presentations
* Algorithm learning

---

## 🧠 Design Philosophy

> **Compute fast. Visualize separately.**

The algorithm does **not** slow down for animation.
The browser replays execution independently.

---

## 🔮 Future Scope

* Recursion tree visualization
* Step skipping / fast-forward
* Zoom & pan support
* Export animation

---

## 📜 License

Free to use for **educational and personal purposes**.

---


