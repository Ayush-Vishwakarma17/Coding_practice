import { useState } from 'react'

function App() {
  const [color, setColor] = useState('orange')

  return (
    <>
      <div className='bg-red-900 flex flex-col w-full h-screen duration-300 justify-center items-center' style={{backgroundColor: color}}><h1 className='text-white text-7xl'>Jai Baddie...</h1>
      <div className='  w-1/2 h-20 flex justify-around items-center'>
        <button onClick={() => {setColor('red')}}  className='outline outline-3 outline-white bg-red-800 px-7 py-2 text-white text-2xl cursor-pointer rounded-full'>Red</button>
        <button onClick={() => {setColor('green')}} className='outline outline-3 outline-white bg-green-800 px-7 py-2 text-white cursor-pointer text-2xl rounded-full'>Green</button>
        <button onClick={() => {setColor('blue')}} className='outline outline-3 outline-white bg-blue-800 px-7 py-2 cursor-pointer text-white text-2xl rounded-full'>Blue</button>
        <button onClick={() => {setColor('yellow')}} className='outline outline-3 outline-white bg-yellow-400 px-7 py-2 cursor-pointer text-white text-2xl rounded-full'>Yellow</button>
        <button onClick={() => {setColor('purple')}} className='outline outline-3 outline-white bg-purple-800 px-7 py-2 cursor-pointer text-white text-2xl rounded-full'>purple</button>
      </div>
      </div>
    </>
  )
}

export default App
