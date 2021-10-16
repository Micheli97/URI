var input = require('fs').readFileSync('/dev/stdin', 'utf8');

let testes = input.split('\n')

testes.shift()

testes.map( item => {
    let count = 0
    let a = item.split('').map(item => {
        if(item === '1') count +=2
        if(item === '2' || item === '3' || item === '5') count +=5
        if(item === '4') count +=4
        if(item === '6' || item === '9' || item === '0') count +=6  
        if(item === '7') count +=3
        if(item === '8') count +=7
    })
    if(count !== 0) console.log(`${count} leds`)  
})