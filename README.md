# writing-with-chemistry
Write words or phrases using as letters the elements of the periodic table.

Given a word or a phrase, the program tries to write it using as letters only the element of the periodic table. If there are multiple possibilities or combinations, it tries to find them all, and it prints them in a kind-of-tree format. If there are not, it stops.

## Examples

```
carbonio
c (carbonio)
ar (argon)
 |  | b (boro)
 |  |  | o (ossigeno)
 |  |  |  | n (azoto)
 |  |  |  |  | i (iodio)
 |  |  |  |  |  | o (ossigeno)
 |  |  |  | ni (nickel)
 |  |  |  |  |  | o (ossigeno)
ca (calcio)
 | rb (rubidio)
 |  |  | o (ossigeno)
 |  |  |  | n (azoto)
 |  |  |  |  | i (iodio)
 |  |  |  |  |  | o (ossigeno)
 |  |  |  | ni (nickel)
 |  |  |  |  |  | o (ossigeno)

ossigeno
o (ossigeno)
 | s (zolfo)
 |  | s (zolfo)
 |  |  | i (iodio)
 |  |  | ge (germanio)
 |  |  |  |  | n (azoto)
 |  |  |  |  |  | o (ossigeno)
 |  |  |  |  | no (nobelio)
 |  | si (silicio)
 |  |  | ge (germanio)
 |  |  |  |  | n (azoto)
 |  |  |  |  |  | o (ossigeno)
 |  |  |  |  | no (nobelio)
os (osmio)
 |  | s (zolfo)
 |  |  | i (iodio)
 |  |  | ge (germanio)
 |  |  |  |  | n (azoto)
 |  |  |  |  |  | o (ossigeno)
 |  |  |  |  | no (nobelio)
 |  | si (silicio)
 |  |  | ge (germanio)
 |  |  |  |  | n (azoto)
 |  |  |  |  |  | o (ossigeno)
 |  |  |  |  | no (nobelio)

amore
am (americio)
 | o (ossigeno)
 | re (renio) 
```
