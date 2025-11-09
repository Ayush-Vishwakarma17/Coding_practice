//Nullish Coalescing Operator

let value;

value = null ?? 20 // it check the input values and assign the right values 
console.log("The value is " + value)

//it always ignore the null and undefined input

value = undefined ?? 30
console.log("The value is " + value);


//Ternary Operator

let value1 = "2"
let value2 = 2

//Condition ? true : false

value1 == value2 ? console.log("yes") : console.log("no")
value1 != value2 ? console.log("yes") : console.log("no")
value1 === value2 ? console.log("yes") : console.log("no")
value1 !== value2 ? console.log("yes") : console.log("no")

//if-else and nested if-else 

let num1 = 2
let num2 = "2"

if (num1 == num2) { //Check for value not type
    console.log("They are equal")
}

if (num1 === num2) { //Check for value and type both
    console.log("They are strictly equal") 

} else {
    console.log("They are not equal");
}


//Switch case 

switch(3) {
    case 1: console.log("Ayush")
    break
    case 2: console.log("Arpita")
    break
    case 3: console.log("Bhaiya-relation")
    break
}

