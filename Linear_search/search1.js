// Javascript code to linearly search x in arr[].

//Searching function:
function search(arr, n, x) {
    for (let i = 0; i < n; i++) {
        if (arr[i] == x) return i;
    }
    return -1;
}
//Driver code:
let arr = [10, 13, 34, 14, 76, 78];
let n = arr.length;
let key = 14;

//Function call:
let result = search(arr, n, key);
result == -1
    ? console.log("Item is not present in array.")
    : console.log("Element is present in index :", result);
