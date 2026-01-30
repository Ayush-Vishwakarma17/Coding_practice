import { useState } from 'react'
// let counter  = 20
// const addone = () => {
//     counter++;
//     let val = document.querySelector('#counter')
//     val.innerHTML = `current counter is: ${counter}`
// }
// const lessone = () => {
//     counter--
//     let val = document.querySelector('#counter')
//     val.innerHTML = `current counter is: ${counter}`
// }
function App() {
  let [count, setCount] = useState(10)
  const addone = () => {
    count += 1
    setCount(count)
  }
  const lessone = () => {
    count -= 1
    setCount(count)
  }
  return (
    <>
      <div >
          <h1 id='counter'>current counter is: {count}</h1>
          <button onClick={addone}>add 1</button>
          <button onClick={lessone}>less 1</button>
      </div>
      
    </>
  )
}
export default App
