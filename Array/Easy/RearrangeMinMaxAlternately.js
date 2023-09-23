function rearrange(array) {
    const n = array.length;
    let temp = [];
    let left = 0;
    let right = n - 1;
    let flag = true;
    let i;
    for (i = 0; i < n; i++) {
        if (flag) temp[i] = array[right--];
        else temp[i] = array[left++];
        flag = !flag;
    }
    for (i = 0; i < n; i++) array[i] = temp[i];
    for (i = 0; i < n; i++) console.log(array[i]);
}

const array = [1, 2, 3, 4, 5, 6, 7];
rearrange(array);
