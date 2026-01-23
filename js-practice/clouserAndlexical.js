
//----------------lexical scoping ---------


// parent function will transfer it's variable to child functions
//this is known as lexical scoping 


// function brand() {
//     const brandname = 'oppo'
//     function printbrand() {
//         console.log(brandname);
//         const brand2 = 'xi'
//     }   
//     function print2 () {
//         console.log(brand2)
        
//     }
//     printbrand()
//     print2()
// }

// brand()


//-------------------- Clousers --------------



function brand() {
    const brandname = 'oppo'
    const brandname2 = 'Motorola'
    console.log(brandname2)

    function printbrand() {
        console.log(brandname);
        console.log(brandname2);
    }   
    return printbrand()
}


const myPrint = brand()
// console.log(myPrint)
