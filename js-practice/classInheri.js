class User {
    constructor(username) {
        this.username = username;
    }
    logUser() {
        console.log(`User name is: ${this.username}`)
    }
}

class UserTwo extends User {
    
    constructor(username, email, age) {
        super(username)
        this.email = email
        this.age = age
    }

    printUser() {
        console.log(`${this.username} and ${this.email} and age is: ${this.age} thanks.`)
    }
}

const obj = new UserTwo('Ayush', '999@gmail.com', 19)
obj.printUser()

