const user = {
    username: 'Ayush',
    age: 19,
    getUsername: function () {
        console.log(this.username)
        console.log(this.age)
        console.log(this)
    },
}
console.log(user.username)
console.log(user.getUsername())


function users(name, id, age) {
    this.name = name
    this.id = id
    this.age = age
    return this // withous this it will still return the object.
    //but the best practice is to return this
}

//without new keyword it will return whole this
//and using new keyword you get new copies and instance of constructor

const userOne = new users('Laila', 20, 22)
const userTwo = new users('Kamla', 19, 22)
console.log(userOne)
console.log(userTwo)