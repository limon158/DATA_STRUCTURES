//Code to search element using binary search in array:

//Driver code:
let array = [2, 5, 8, 12, 16, 23, 38, 56, 72, 91];
let key = 56;
let left = 0;
let right = array.length - 1;

//Function call:
let result = binarySearch(array, left, right, key);
result == -1
    ? console.log(`Item ${key} not an element of this array`)
    : console.log(`Item ${key} found in index : ${result}`);

//Search function:
function binarySearch(arr, l, r, x) {
    if (l <= r) {
        let m = l + Math.floor((r - l) / 2);

        if (arr[m] == x) return m;

        if (arr[m] > x) return binarySearch(arr, l, m - 1, x);
        else return binarySearch(arr, m + 1, r, x);
    }
    return -1;
}
