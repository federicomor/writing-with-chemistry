# writing-with-chemistry
Write words or phrases using as letters the elements of the periodic table.

Given a word or a phrase, the program tries to write it using as letters only the element of the periodic table. If there are multiple possibilities or combinations, it tries to find them all, and it prints them in a kind-of-tree format. If there are not, it stops.

## Examples

```
Text:
ossigeno
o (oxygen)
 | s (sulfur)
 |  | s (sulfur)
 |  |  | i (iodine)
 |  |  |  | ge (germanium)
 |  |  |  |  | n (nitrogen)
 |  |  |  |  |  | o (oxygen)
 |  |  |  |  |  | | -> END
 |  |  |  |  |  | no (nobelium)
 |  |  |  |  |  | | -> END
 |  |  | si (silicon)
 |  |  |  | ge (germanium)
 |  |  |  |  | n (nitrogen)
 |  |  |  |  |  | o (oxygen)
 |  |  |  |  |  | | -> END
 |  |  |  |  |  | no (nobelium)
 |  |  |  |  |  | | -> END
 | os (osmium)
 |  | s (sulfur)
 |  |  | i (iodine)
 |  |  |  | ge (germanium)
 |  |  |  |  | n (nitrogen)
 |  |  |  |  |  | o (oxygen)
 |  |  |  |  |  | | -> END
 |  |  |  |  |  | no (nobelium)
 |  |  |  |  |  | | -> END
 |  |  | si (silicon)
 |  |  |  | ge (germanium)
 |  |  |  |  | n (nitrogen)
 |  |  |  |  |  | o (oxygen)
 |  |  |  |  |  | | -> END
 |  |  |  |  |  | no (nobelium)
 |  |  |  |  |  | | -> END


Text:
carbon
c (carbon)
 | ar (argon)
 |  | b (boron)
 |  |  | o (oxygen)
 |  |  |  | n (nitrogen)
 |  |  |  | | -> END
 | ca (calcium)
 |  | rb (rubidium)
 |  |  | o (oxygen)
 |  |  |  | n (nitrogen)
 |  |  |  | | -> END


Text:
arsenic
ar (argon)
 | s (sulfur)
 |  | se (selenium)
 |  |  | n (nitrogen)
 |  |  |  | i (iodine)
 |  |  |  |  | c (carbon)
 |  |  |  |  | | -> END
 |  |  |  | ni (nickel)
 |  |  |  |  | c (carbon)
 |  |  |  |  | | -> END   
```
