### push

<!-- push(2)
push(3)
push(4)
push(5)
pop()
top()
size() 
explain all

-->

## implementation using each data structure

### Stack is data structure
- Stack is a LIFO data structure
- Stack is a ADT (Abstract Data Type)
- Stack is a ADT (Abstract Data Type) with 4 operations
>> LIFO  -> Last in first out 

```python
class Stack():
    push(x)
    pop()
    top()
    size()
    # example
    push 2 3 4 1 
    pop top top pop push5 top size

    2 3 4 1 
    last element pushed 1
    pop always takes out last element 1
    2 3 4 
    top = 4
    top = 4
    pop
    2 3
    push 5
    2 3 5
    size 3
```


## Que
- Que is a FIFO data structure
- Que is a ADT (Abstract Data Type)
- Que is a ADT (Abstract Data Type) with 4 operations
>> FIFO -> First in first out
`push top pop size`

push (2,1,3,4)
pop top pop top 
push 7
top 
size

```
2 1 3 4
pop 
1 3 4
top = 1
pop 
3 4
top = 3
push 7
3 4 7
top=3
size = 3

```
