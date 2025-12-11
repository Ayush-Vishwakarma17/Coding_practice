
//reduce method practice in js

const arr = [
    {title: "Gekko",
        hp: 100,
        pet: "wigman",
    },
    {title: "Reyna",
        hp: 120,
        pet: "gekko",
    },
    {title: "viper",
        hp: 130,
        pet: "chamber",
    },

]
const newarr = arr.reduce((acc, e) => {
    if (e.hp > 100) {
        acc.push(e.hp);
    }
    return acc;
}, []);

for (let val of newarr) {
    console.log(val);
}

const books = [
    {title: "gulab",
        pg: 100,
        writer: "prem",
    },
    {title: "karbala",
        pg: 150,
        writer: "prem",
    },
    {title: "gillu",
        pg: 120,
        writer: "mahadevi",
    },
    {title: "rachna",
        pg: 150,
        writer: "mahadevi",
    },
]

const writerNames = books.reduce((acc, key) => {
    if (key.writer === "mahadevi") {
        acc.push(key.title)
    }
    return acc
}, [])

for (let name of writerNames) {
    console.log(name);
}