const name = "Ayush"

// using parameter and argument passing

setTimeout((n) => {
    console.log(n)
}, 1000, "Ayush")

// //function to say radhe radhe

function greet() {
    console.log("radhe radhe")
}

//using passing the function refference

setTimeout(greet, 2000)

//simply printing 

console.log("vishwakarma")

const printHi = setTimeout(greet, 2000)
const clear = clearTimeout(printHi)

const printHiMulti = setInterval(greet,1000)
clearInterval(printHiMulti)