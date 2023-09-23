const size = 10;
const array = [3, 5, 0, 0, 6, 8, 0, 9, 0, 12];
bubbleSort(array);
console.log("Past array: \n");
printArray(array);
ZerosAtEnd(array);
console.log("Present array: \n");
printArray(array);

//Functions:
function printArray(array)
{
for (let i = 0; i < array.length; i++) 
    console.log(array[i]);
}

function ZerosAtEnd(array)
{
    let ctr = 0
    for(let i = 0; i < array.length; i++)
    {
        if(array[i] != 0)
        {
            array[ctr] = array[i];
            ctr ++;
        }
    }
    while(ctr < array.length)
    {
        array[ctr] = 0;
        ctr++;
    }
}

function bubbleSort(arr) {
    let n = arr.length;

    for (let i = 0; i < n - 1; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                let temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}