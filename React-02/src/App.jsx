import { useState } from 'react'

function App() {
  const [count, setCount] = useState(0)

  return (
    <>
      <div className='bg-orange-500 rounded-full flex justify-center items-center '><h1>Hi - Welcome to the Tailwind World</h1></div>
    </>
  )
}

export default App
