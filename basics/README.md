# 🔍 DSA_SEARCHING

Welcome to the **DSA Searching Algorithms** repository.

In this repository, I am discussing two major searching algorithms in detail:

- 📌 **Linear Search**
- 📌 **Binary Search**

---

## 📘 Linear Search

Linear search can be performed on both **sorted** and **unsorted** arrays.

---

### 🔹 Linear Search for Sorted Array

Here's a brief explanation of the code:

- The `linearSearch` function takes three arguments: `arr` (the array to search), `target` (the value to search for), and `n` (the size of the array).
- The function uses a `for` loop to iterate through the array from the beginning to the end.
- At each iteration, it checks if the current element is **equal** to the target value. If so, it returns the **index** of the element.
- If the current element is **greater** than the target value, it returns `-1`, since the array is sorted and the target value cannot be found in the remaining elements.
- If the loop completes without finding the target value, the function returns `-1`.

#### 🧪 In the `main` function:
- We create an example array and set the target value to `23`.
- We call the `linearSearch` function and store the result.
- If the result is not `-1`, we print a success message with the index of the found element. Otherwise, we print a failure message.

> **Note:** This implementation takes advantage of the fact that the input array is sorted in ascending order.  
> If the array is not sorted, the linear search algorithm would need to iterate through the entire array, resulting in a time complexity of **O(n)**.

---

### 🔹 Linear Search for Unsorted Array

Here's a brief explanation of the code:

- The `linearSearch` function takes three arguments: `arr`, `target`, and `n`.
- It uses a `for` loop to iterate through the array.
- At each iteration, it checks if the current element is equal to the target.
- If found, the index is returned. If not, `-1` is returned.

#### 🧪 In the `main` function:
- We define an example array and a target value (`23`).
- We call the `linearSearch` function and store the result.
- Based on the result, we print whether the value was found or not.

> **Note:** Time complexity for this approach is always **O(n)** as every element must be checked.

---

## 📘 Binary Search

Binary search can only be performed on **sorted arrays**.

---

### 🔹 How Binary Search Works

Here's a brief explanation of the code:

- The `binarySearch` function takes four arguments: `arr` (array), `target` (value to search), `low` (start index), and `high` (end index).
- A `while` loop is used to divide the array into halves.
- If the target value is found in the middle, its index is returned.
- If not, either the left or right half is selected for further searching.
- If the value is not found, `-1` is returned.

#### 🧪 In the `main` function:
- We define a sorted array and target value (`23`).
- We call the `binarySearch` function.
- If the value is found, its index is printed. Otherwise, a failure message is displayed.

> **NOTE:** Binary search is only applicable to **sorted** arrays.  
> If the array is not sorted, the binary search algorithm **will not work correctly**.

---

## 📎 Summary Table

| Algorithm        | Applicable On      | Best Case | Worst Case | Time Complexity |
|------------------|--------------------|-----------|------------|-----------------|
| Linear Search    | Sorted/Unsorted    | O(1)      | O(n)       | O(n)            |
| Binary Search    | Sorted only        | O(1)      | O(log n)   | O(log n)        |

---

## 💻 Sample Function Calls

```cpp
// Linear Search on Unsorted Array
int result = linearSearch(arr, 23, n);

// Binary Search on Sorted Array
int result = binarySearch(arr, 23, 0, n - 1);
