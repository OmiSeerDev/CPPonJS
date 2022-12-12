const input = document.querySelector('#num1');
const parity = document.querySelector('#form');
const result = document.querySelector('#result');

function numclassif (event) {
  // input.value = parseInt(input.value);
input.value %2 != 0? 
        result.innerText = `${input.value} is an odd number!`:
        result.innerText = `${input.value} is an even number!`;

    console.log(event);
    event.preventDefault();
}
    
    setTimeout(
        parity.addEventListener('submit',numclassif),500
        )