import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import './index.css'
import App from './App.jsx'
import Card from './Card.jsx'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <App />
    <Card cardname = 'Nike Jordan' txtbtn = 'Buy Now'/>
  </StrictMode>,
)
