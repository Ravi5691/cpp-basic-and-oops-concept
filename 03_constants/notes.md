 Literals : Literals are the most obvious kind of constants. They are used to express particular values within the source code of a program.
 Literal constants can be classified into: integer, floating-point, characters, strings, Boolean, pointers, and user-defined literals.
In addition to decimal numbers (those that most of us use every day), C++ allows the use of octal numbers (base 8) and hexadecimal numbers (base 16) as literal constants. For octal literals, the digits are preceded with a 0 (zero) character. And for hexadecimal, they are preceded by the characters 0x (zero, x). For example, the following literal constants are all equivalent to each other:


75         // decimal
0113       // octal
0x4b       // hexadecimal 

'z'
'p'
"Hello world"
"How do you do?"


The first two expressions represent single-character literals, and the following two represent string literals composed of several characters. Notice that to represent a single character, we enclose it between single quotes ('), and to express a string (which generally consists of more than one character), we enclose the characters between double quotes (").

\n	newline
\r	carriage return
\t	tab
\v	vertical tab
\b	backspace
\f	form feed (page feed)
\a	alert (beep)
\'	single quote (')
\"	double quote (")
\?	question mark (?)
\\	backslash (\)

**********************************************************************

PreProcessor : Another mechanism to name constant values is the use of preprocessor definitions.

#define identifier replacement 
ex - #define PI 3.14159

Note that the #define lines are preprocessor directives, and as such are single-line instructions that -unlike C++ statements- do not require semicolons (;) at the end; the directive extends automatically until the end of the line. If a semicolon is included in the line, it is part of the replacement sequence and is also included in all replaced occurrences.

After this directive, any occurrence of identifier in the code is interpreted as replacement, where replacement is any sequence of characters (until the end of the line). This replacement is performed by the preprocessor, and happens before the program is compiled, thus causing a sort of blind replacement: the validity of the types or syntax involved is not checked in any way.




