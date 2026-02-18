# Password Strength Checker

## Functionality:
- This program accepts an input string from the command line and rates the string based on how secure it would be as a password. It rates the password based on length, upper and lowercase letters, digits, and special symbols. The more random and varied the password is, the higher security score will be.

## Setup:
- To run this program, download the provided password_checker.c file. Compile it with the C compiler of your choice. For example, using bash:
```bash
gcc password_checker.c

./a.out
```
- The program will ask you for a password. Input any string you like, and it will provide feedback about the security.

## Limitations:
- This is a very basic password checker. It does not check for common words or repeated phrases that are often guessed in brute-force password attacks.
- The best way to get a strong password is to use a random combination of upper and lowercase letters, digits, and special characters.
	- Warning: repeating a string such as "aA1!aA1!aA1!" would result in a strong password if it was repeated enough times. This would not necessarily be a strong password in the real world because of repeated substrings.

## Ethical Considerations:
- This program makes no guarantees about password security, as mentioned in the limitations section. Please ensure there are no repeated phrases in your passwords.
- This program could potentially be modified to return a false result, such as a false positive for a weak password.
- This program should not be used in environments where security is very important. It is a tool to understand how password security works.
