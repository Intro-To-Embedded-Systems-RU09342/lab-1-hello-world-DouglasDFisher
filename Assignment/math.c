/*
 * math.c
 */

#ifndef MATH_C_
#define MATH_C_

/*
 * math
 * Description: Performs the following functions on two integers:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1)
 * Pre: Num1: Interger 1, Num2: Interger 2, Operator: Math operation
 *      Requires both numbers are non-null integers, and the operator is a valid
 *      math function, otherwise it returns num1
 * Post: The result of the operation
 */
int math(int num1, int num2, char Operator) {
    //Checks the integers are not null
    if(num1 == NULL || num2 == NULL)
        return num1;
        
    switch(Operator) {
        //Addition
        case '+':
            return num1 + num2;
        //Subtraction
        case '-':
            return num1 - num2;
        //Multiplication
        case '*':
            return num1 * num2;
        //Division
        case '/':
            return num1 / num2;
        //Modulus
        case '%':
            return num1 % num2;
        //Left-Shift
        case '<':
            return num1 << num2;
        //Right-Shift
        case '>':
            return num1 >> num2;
        //Bit-wise and
        case '&':
            return num1 & num2;
        //Bit-wise or
        case '|':
            return num1 | num2;
        //Bit-wise Xor
        case '^':
            return num1 ^ num2;
        //Bit-wise not
        case '~':
            return ~num1;
        //Default error case
        default:
            return num1;
    }
}

#endif /* MATH_C_ */
