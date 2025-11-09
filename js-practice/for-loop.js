//Typical for loops
//and use of break keyword


const arr = [2,3,4,5,6,7,8]
for (let i = 0; i < arr.length; ++i) {
    if (arr[i] == 5) {
        console.log("Target found", i)
        break;
    }
    console.log(arr[i] + " ")
}

// continue keyword and loop
//will find the index of target and then skip the below code

const array = [2,3,4,5,6,7,8]
for (let i = 0; i < array.length; ++i) {
    if (array[i] == 5) {
        console.log("Target found", i)
        continue;
    }
    console.log(array[i] + " ")
}

//for loop with a for loop

for (let i = 2; i <= 2; ++i) {
    console.log("\n")
    for (let j = 1; j <= 10; ++j) {
        console.log(`${i} * ${j} = ${i*j}`)
    }
}

