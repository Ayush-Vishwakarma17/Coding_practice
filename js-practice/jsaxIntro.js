

//  Value	State	Description
// 0	UNSENT	Client has been created. open() not called yet.
// 1	OPENED	open() has been called.
// 2	HEADERS_RECEIVED	send() has been called, and headers and status are available.
// 3	LOADING	Downloading; responseText holds partial data.
// 4	DONE	The operation is complete.

//object of xml

const api = 'api00000898'
const xhr = new XMLHttpRequestUpload()

console.log("UNSENT", xhr.readyState); // readyState will be 0

xhr.open("GET", "/api", true);
console.log("OPENED", xhr.readyState); // readyState will be 1

xhr.onprogress = () => {
  console.log("LOADING", xhr.readyState); // readyState will be 3
};

xhr.onload = () => {
  console.log("DONE", xhr.readyState); // readyState will be 4
};

xhr.send(null);

xhr.open('GET', api)
xhr.onReadyStateChnage = () => {

    if (xhr.readyState === 1) {
        console.log(`${xhr.readyState} unsent`)
    } else if (xhr.readyState === 2) {
        console.log(`${xhr.readyState} opne`)
    } else if (xhr.readyState === 3) {
        console.log(`${xhr.readyState} loading`)
    } else if (xhr.readyState === 4) {
        console.log(`${xhr.readyState} done`)
    }
}
xhr.send()