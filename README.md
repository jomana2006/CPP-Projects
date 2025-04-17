# CPP-Projects
This repository consists of a number of small C++ projects.

## 1. CGPA Calculator (created on August 12, 2024)
This project is a calculator that calculates the Cumulative Grade Point Average (CGPA), which is a numerical representation of the student's overall academic performance across multiple semesters/courses.

How is CGPA calculated?

---> Grade Point Average (GPA) of each module is first calculated. To calculate it, each letter grade is given a certain grade point depending on the university's scaling (ex: A = 4.0, B = 3.0, etc). The grade point is then multiplied by the weight of the module (credit score), for example, if you got an A in a module which weighs 10 credit scores, you multiply the 4.0 by the 10 credit scores to get the GPS of that module.

---> Total GPA of the semester is calculated by summing up the GPA of each module and dividing it by the total credit scores in the semester. Let's say you took 3 modules in the semester, and each module weighs 10 credit scores, you multiply the GPA calculated for each module by its credit score, then you sum up the GPAs of each module, over the total credit score which is 30 in this example.

---> CGPA is then calculated by summing up the GPAs of the semesters and then dividing it by the number of semester.

## 2. RPS Game (created on August 12, 2024)
This project is a game of rock, paper, scissors against the computer.

The each option is given a number, and the user chooses a number from the given numbers. The program then proceeds to say the computer's choice, and announces the winner.

The computer's choice is determined using a function that randomly generates numbers called `rand()`.

## 3. Login and Regisstration System (created on August 28, 2024)
This project lets the user login or register into the program. 

It uses separate functions for each action which are called in the `main`.

It is mainly written to test the idea of login and registration using C++.