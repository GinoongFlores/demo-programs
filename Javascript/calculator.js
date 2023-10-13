function calculator() {
	console.log("Welcome to the calculator program.");
	let number1 = prompt("Enter your first number: ");
	let number2 = prompt("Enter your second number: ");
	let operator = prompt("Enter your operator: ");

	if (operator === "+") {
		console.log(
			"The result is: " + (parseFloat(number1) + parseFloat(number2))
		);
	} else if (operator === "-") {
		console.log(
			"The result is: " + (parseFloat(number1) - parseFloat(number2))
		);
	} else if (operator === "*") {
		console.log("The result is: " + parseFloat(number1) * parseFloat(number2));
	} else if (operator === "/") {
		console.log("The result is: " + parseFloat(number1) / parseFloat(number2));
	} else {
		console.log("Invalid input. Please try again.");
	}
}

calculator();
