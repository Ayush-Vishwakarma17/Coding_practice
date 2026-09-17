function customrender(reactElement, container) {
    /*  
    
    ------------- it has a issue of not getting all prop from prop object at one time ----------

    
    const domElement = document.createElement(reactElement.type)
    domElement.innerHTML = reactElement.info
    domElement.setAttribute('href', reactElement.props.href)
    domElement.setAttribute('target', reactElement.props.target)
    ontainer.appendChild(domElement) 
    
    */

    // ------------ below code uses for in loop to set all the prop attributes --------

    const domElement = document.createElement(reactElement.type)
    domElement.innerHTML = reactElement.info
    for (const prop in reactElement.props) {
        if (prop === 'children') {
            continue
        }
        domElement.setAttribute(prop, reactElement.props[prop])
    }
    container.appendChild(domElement)
}


const reactElement = {
    type: 'a',
    props: {
        href: 'https://aayushdev-portfolio.vercel.app/',
        target: '_blank'
    },
    info: 'click me to visit my portfolio'
}

const root = document.querySelector('#root')
customrender(reactElement, root)