# Assignment-16-Date-structure

### Bekmyrza Abdykadyrov COM-20.
![image](https://github.com/Bekmyrzapro/Assignment-16-Date-structure/assets/74038682/2e632230-c07f-43db-ab19-54b4c80d7d8c)

\\

![image](https://github.com/Bekmyrzapro/Assignment-16-Date-structure/assets/74038682/b18cafa3-3543-40ef-a98d-f2afb6124619)
![image](https://github.com/Bekmyrzapro/Assignment-16-Date-structure/assets/74038682/26a8a55e-4bf1-41c1-9677-b9e6d26248a9)



 We start by defining a Date structure. This structure holds three important pieces of information: the day, the month, and the year.

Now, we need to make sure that any date we work with is valid. We create a function called isValidDate() to check just that. It looks at the day, month, and year to ensure they're within reasonable ranges.

Next up, we want to be able to set a new date if needed. The newDate() function does just that. It updates the date, but only if the new one is valid. If it's not, it kindly lets us know with an error message.

But wait, we also want to know what day of the week a date falls on, right? That's what getDayOfWeek() is for. We'll figure out the logic for that later.

And how about finding out how many days are between two dates? Well, we'll write a function for that too, called calculateDifference(). But for now, it's just a placeholder.

When we want to see a date in a nice, readable format, printDate() comes to the rescue. It prints the date in a way that's easy for us humans to understand.

Now, in our main program, we create a list of dates and add a few to it. Then, we sort them using the built-in sort() function, which relies on our < operator to compare dates.

Finally, we display the sorted dates one by one, so we can admire our work. And that's it! Our little date-handling program is up and running, ready to help us manage dates in C++.
