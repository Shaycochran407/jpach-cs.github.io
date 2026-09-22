#include <stdio.h>

// ============================================================
// CSCI 232 – Lab: Implementing Standard Library Functions
//
// RULES:
//   - Use ONLY: if, switch, goto, putchar(), getchar()
//   - Do NOT use: while, for, do-while
//   - Do NOT use any standard library functions
//
// Iteration pattern (shown in lab today):
//
//   int i = 0;
//   loop:
//       if (i >= n)
//           goto done;
//       // body
//       i++;
//       goto loop;
//   done:
//
// ============================================================


// ============================================================
// FUNCTION 1: my_isdigit
//
// Returns 1 if c is a digit character ('0' through '9').
// Returns 0 otherwise.
//
// Example:
//   my_isdigit('5')  →  1
//   my_isdigit('a')  →  0
// ============================================================
int my_isdigit(char c)
{
    if( c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}


// ============================================================
// FUNCTION 2: my_islower
//
// Returns 1 if c is a lowercase letter ('a' through 'z').
// Returns 0 otherwise.
//
// Example:
//   my_islower('m')  →  1
//   my_islower('M')  →  0
// ============================================================
int my_islower(char c)
{
    if (c >= 'a' && c <= 'z') {
        return 1;
    }
    return 0;
}


// ============================================================
// FUNCTION 3: my_strlen
//
// Returns the number of characters in the string s,
// not counting the null terminator '\0'.
//
// Example:
//   my_strlen("hello")  →  5
//   my_strlen("")        →  0
// ============================================================
int my_strlen(char s[])
{
   if (s[0] == '\0')
{
        return 0;
    }
    return 1 + my_strlen(s + 1);
}


// ============================================================
// FUNCTION 4: my_strcpy
//
// Copies the string src into dest,
// including the null terminator '\0'.
//
// Example:
//   my_strcpy(buf, "hello")  →  buf contains "hello"
// ============================================================
void my_strcpy(char dest[], char src[])
{
     dest[0] = src[0];
     if (src[0] != '\0') {
         my_strcpy(dest + 1, src + 1);
     }
}   
    


// ============================================================
// FUNCTION 5: my_atoi
//
// Converts a string of digit characters to an integer.
// Handles an optional leading '-' sign.
//
// Examples:
//   my_atoi("123")   →   123
//   my_atoi("-42")   →  -42
//   my_atoi("0")     →    0
// ============================================================
int my_atoi(char s[])
{
    int result = 0;
    int sign = 1;
    int i = 0;


        if (s[0] == '-') 
        {
            sign = -1;
            i = 1;
        }

        se_digits:
         if (s[0] >= '0' && s[0] <= '9') 
         {
            result = result * 10 + (s[0] - '0');
            i++;
            goto se_digits;
         }

         return result * sign;
}







// ============================================================
// Do NOT modify below this line.
// ============================================================

void runTests(void);

int main() 
{
	 runTests(); 
	 return 0; 
}
