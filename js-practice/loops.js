const myArr = [2,3,4,5,6,76,1]

//for of looop

for (let val of myArr) {
    console.log(val)
}

const name = ["ayush", "aryan", "ayushi", "kirmada"]

for (let namein of name) {
    console.log(namein)
    
}

//for in loop shows the indexes


for (let val in myArr) {
    console.log(val)
}


for (let namein in name) {
    console.log(namein)
}

//object
const myObj = {
    name: "ayush",
    age: "20",
    status: "gareeb"
}

// for (let value of myObj) { //will give not iterable error cause 
//you can not iterate with for of loop in object
//     console.log(value)
// }

for (let value in myObj) {
    console.log(value, " -> ", myObj[value])
}