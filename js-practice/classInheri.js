class User {
    constructor(username) {
        this.username = username;
    }
    logUser() {
        console.log(`User name is: ${this.username}`)
    }
}

class UserTwo extends User {
    
    PrintUser(username, email, age) {
        super(username)
        this.email = email
        this.age = age
    }

}

const obj = new UserTwo
const user = obj.PrintUser('Ayush', '99@', 19)

