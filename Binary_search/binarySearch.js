//Code to finding key using binary search in array.

//Driver code:
let array = [2, 5, 8, 12, 16, 23, 38, 56, 72, 91];
let key = 56;

//Function call:
let result = binarySearch(array, key);
result == -1
    ? console.log(`Item ${key} not an element of this array`)
    : console.log(`Item ${key} found in index : ${result}`);

//Search function:
function binarySearch(arr, x) {
    let left = 0;
    let right = arr.length - 1;
    let mid;

    while (left <= right) {
        mid = left + Math.floor((right - left) / 2);

        if (arr[mid] == x) return mid;

        arr[mid] > x ? (right = mid - 1) : (left = mid + 1);
    }
    return -1;
}
