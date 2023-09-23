//Code to sentinel linearly search key in array:

//Search function:
function sentinelSearch(arr, n, x) {
    var last = arr[n - 1];
    arr[n - 1] = key;

    var i = 0;
    while (arr[i] != key) i++;

    arr[n - 1] = last;

    if (i < n - 1 || arr[n - 1] == key) {
        console.log(x +" is present in index "+ i);
    }
    else
    console.log("Element not found");
}
//Driver code:
var array = [12, 25, 45, 150, 46, 78, 43, 120, 167, 56];
var n = array.length;
var key = 566;
//Function call:

sentinelSearch(array, n, key);
