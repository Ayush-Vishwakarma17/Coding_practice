
const cappachino = {
    item : 'coffeee',
    price : '299 rs',
    color : 'white',

    coffeedone: () => {
        console.log('Order completed!')
    }
}

console.log(Object.getOwnPropertyDescriptor(cappachino,'item'))

//item property will not be enumerable and writable

Object.defineProperty(cappachino, 'item', {
    enumerable: true,
    writable: true
})

console.log(Object.getOwnPropertyDescriptor(cappachino,'item'))

for (let [key, value] of Object.entries(cappachino)) {
    if (typeof(value) !== 'function') {
        console.log(`${key} : ${value}`)
    }
}
