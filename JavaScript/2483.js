var input = require('fs').readFileSync('/dev/stdin', 'utf8');

let a = parseInt(input.split('\n'))
let natal = 'Feliz nat'

for(let i=0; i < a; i++) {
    natal += 'a'
}

natal+= 'l!'
console.log(natal)