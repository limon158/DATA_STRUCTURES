function rearrange(a) {
    let n = a.length;
    let newArr = [];
    let l = 0,
        r = n - 1;
    for (let i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) newArr[i] = a[r--];
        else newArr[i] = a[l++];
    }
    for (let j = 0; j < n; j++) console.log(newArr[j]);
}

const array = [5, 7, 10, 14, 16, 18];
console.log("Before rearrange: \n");
for (let i = 0; i < array.length; i++) console.log(array[i]);
console.log("After rearrange: \n");
rearrange(array);
