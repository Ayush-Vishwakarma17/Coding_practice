const arr = [1,2,3,4,5,6,7]

const nums = arr.filter((num) => {
    if (num > 2){
        return num
    }
})

for (let num of nums) {
    console.log(num);
}

const books = [
    {   title: "tom 2",
        genere: "romance",
        price: 2999
    },
    {   title: "Cristraphikar",
        genere: "horror",
        price: 1999
    },
    {   title: "law Power",
        genere: "knowledge",
        price: 1999
    },
    {   title: "Mathematics Disc",
        genere: "horror",
        price: 1999
    },
]


//chaining of the filter map and reduce cause filter just select if condition satisfies
//cant modify it like it will return whole object if it satisfies the condition not just 
//the title or pricing.

const horrorBooks = books.filter((it) => (it.genere === "horror")).map((it) => it.title)

console.log(horrorBooks)


