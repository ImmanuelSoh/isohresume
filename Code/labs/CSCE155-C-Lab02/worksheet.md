
# Computer Science I
## Lab 2.0 Worksheet

Name(s) and Login(s):
Immanuel Soh, Computer Science
ImmanuelSoh


1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

81 years, 50 weeks, 4 days old on 8/29/2023



2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

72 years, 34 weeks, 4 days old on 8/29/2023



3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

A. Non-existent day of month: It accepts the input and outputs a change based on the "new" calendar system

B. Non-existent month of year: It also accepts the input and outputs a change based on the "new calendar system



4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 bytes
  range: -32768 to 32767
* `int`
  size: 4 bytes
  range: -2147483648 to 2147483647
* `long int`
  size: 8 bytes
  range: -9223372036854775808 to 9223372036854775807
* `float`
  size: 4 bytes
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25
  GBP: 88.96
  JPY: 14375
  b) $1,000.52
  GBP: 355.68
  JPY: 57472
  c) $968,410.12
  GBP: 344269.80
  JPY: 55627898


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?

No, because the output would exceed the maximum value



7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.
What value do you get?  Is this result correct?

I got 0, which isn't correct. This is caused by two integers being divided.

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

Again, I got 0 because of two integers being divided.

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.

Just needed to add (double) before the variable "area"