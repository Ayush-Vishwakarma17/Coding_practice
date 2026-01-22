
//object coffeee to know about getters and setters!

class Coffee {
    constructor(name, price) {
        this.name = name
        this.price = price
    }
    get name() {
        return this._name.toUpperCase()
    }
    set name(value) {
        this._name = value.toUpperCase()
    }

    get price() {
        return this._price.toUpperCase()
    }
    set price(value) {
        this._price = value.toUpperCase()
    }
}

const coff = new Coffee('cappachino', '299 rs') 
console.log(coff.name)
console.log(coff.price)