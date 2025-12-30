const promiseOne = new Promise(function(resolve, reject) {

    //Do any async task
    //dataBase calls, cryptography, network

    setTimeout(() => {
        console.log('async task 1 is done.')
        resolve(); //the mistake i did i wrote the resolve call after setTimeout 
        //resolve should be inside the settimeout
    }, 1000);
    
})
//promise then get used
promiseOne.then(() => {
    console.log('async 1 resolved')
})

// without storing promise to a variable 

new Promise(function (resolve, reject) {
    setTimeout(() => {
        console.log('async task 2 is done')
        resolve()
    }, 1000)
}).then(() => {
    console.log('async 2 resolved')
})

/*Let's make another promise  to practice more about promise

    in promise Three we can se that whatever we pass in resolve we can use it in then
*/

const promiseThree = new Promise(function(resolve, reject) {
    // I forgot to use new keyword mind it for the next time 

    setTimeout(() => {
        resolve({'username': 'Ayush',
            'course': 'BCA',
        })
    }, 1000)
})
promiseThree.then((e) => {
    console.log(e)
})

//now then chaining and finally block

const promiseFour = new Promise(function(resolve, reject) {
    let error = false
    setTimeout(() => {
        if (error) {
            reject('Something, wrong here!')
        } else {
            resolve({username: 'ayush17',
                course: 'BCA',
            })
        }
    }, 1000)
})
promiseFour.then(function(user) {
    return user.username
}).then(function (username) {
    console.log(`${username} is printed`)
}).catch(function (error) {
    console.log(error)
}).finally(() => {console.log('request either resolved or rejected')})



// promise five to understand the try catch and without then and finally 

const promiseFive = new Promise(function (resolve, reject) {
    setTimeout(() => {
        let error = true;
        if (!error) {
            resolve({
                username: 'ayush',
                password: '696969',
            })
        } else {
            reject('Something, wrong here!')
        }
    }, 1000);
})

// using async await 

async function consumePromiseFive() {
    const response = await promiseFive
    console.log(response.username)
}
consumePromiseFive()

//using async await with try catch block

async function consumePromiseFive() {
    try{
        const response = await promiseFive
        console.log(response)
    } catch(error) {
        console.log(error)
    } 
}
consumePromiseFive()