//Code to sentinel linearly search key in array:

//Searching function:
function sentinelSearch(arr, x) {
    let n = arr.length;
    let last = arr[n - 1];

    arr[n - 1] = x;

    let i = 0;
    while (arr[i] != x) {
        i++;
    }

    arr[n - 1] = last;
    if (i < n - 1 || last == x) {
        return i;
    } else return -1;
}

//Driver code:
let array = [12, 35, 78, 45, 109, 178, 134, 136, 346, 30, 54];
let key = 54;

//Function call:
let result = sentinelSearch(array, key);

if (result == -1) console.log(`Key ${key} is not found in the array`);
else console.log(`Key ${key} if found in index ${result} in the array`);
