const nums = [1,2,3,43,4,5,6,]

const newNums = nums.map(it => (it+10))
console.log(newNums.join(" "))

for (let i of newNums) {
    console.log(i)
}

const doubleNums = nums.map(it => it*2)
console.log(doubleNums.join(" "))

const rupee = nums.map(it => ("$"+it))
console.log(rupee.join(" "))
for (let i of rupee) {
    console.log(typeof(i))
}