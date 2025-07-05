# 📊 DSA_SORTING

This repository discusses a variety of **sorting algorithms** in Data Structures and Algorithms, with clear explanations and implementation logic.

---

## 📋 List of Sorting Algorithms Covered

### 🔹 Bubble Sort

- **Number of passes** = `n - 1`
- Elements are compared in adjacent pairs and swapped if needed.

**How it works:**
- In **Pass 1**: Compare adjacent elements throughout the array.
- In **Pass 2**: Again compare adjacent pairs but skip the last element.
- Repeat this process until the array is sorted.

---

### 🔹 Insertion Sort

- The list is divided into two parts: **sorted** and **unsorted**.
- The first element is considered sorted.
- Adjacent comparisons are made, and elements are **shifted** if the preceding element is greater.
- Swapping continues and elements are added into the sorted portion one by one.

---

### 🔹 Selection Sort

- Selects the **smallest element** in the unsorted list and places it at its correct position.
- In each pass:
  - Find the location of the smallest element.
  - Swap it with the current index.
- Repeat this until the entire array is sorted.

---

### 🔹 Shell Sort

- An enhanced version of **Insertion Sort**.
- Introduces a **gap variable** (initially `n/2`) for comparing elements that are far apart.
- As the gap decreases, comparisons become more local.
- When the gap reaches `1`, the algorithm behaves like **Insertion Sort**.

---

### 🔹 Merge Sort

- Works on **Divide and Conquer** technique.

#### Steps:
1. **Divide**:
   - Divide the array into two halves recursively until you get subarrays of size 1.
2. **Conquer**:
   - Merge the sorted subarrays back together to form the final sorted array.

---

### 🔹 Quick Sort

- A highly efficient algorithm based on **Divide and Conquer**.
- Chooses a **Pivot** element and:
  - Partitions the array into two subarrays:
    - One with elements **less than** the pivot.
    - One with elements **greater than** the pivot.
- Recursively applies the same logic to both subarrays.

---

### 🔹 Heap Sort

*(To be added)*

---

### 🔹 Radix Sort

- Sorts elements based on **digit place values**.
- Uses **buckets** to distribute elements based on the current digit being considered.

#### How it works:
- **Pass 1**: Compare and sort based on the unit digit.
- **Pass 2**: Sort based on the tens digit.
- Continue until the highest digit place is sorted.

---

### 🔹 Bucket Sort

- Ideal for sorting **floating point numbers**.
- Similar to Radix Sort but works with fractional digits.

#### Steps:
- Create **10 buckets** (0 to 9).
- In **Pass 1**:
  - Place numbers in buckets based on the first digit after the decimal.
- In **Pass 2**:
  - Sort based on the second digit after the decimal.
- Continue this process until the list is sorted.

---


