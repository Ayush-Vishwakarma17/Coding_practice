function setname(username) {
    this.username = username
    console.log('called')
}

/*

this will call but call stack uses it's own this and after that the variable will be destroyed
so we pass our own this so that it sets our name

function createUser(username, pass, email) {
    setname(username) 
    this.pass = pass
    this.email = email
}

*/

function createUser(username, pass, email) {
    setname.call(this,username)
    this.pass = pass
    this.email = email
}

const userOne = new createUser('ayu', '9090', '@hello')
console.log(userOne)