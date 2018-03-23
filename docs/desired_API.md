# Desired API

### Read a lua table
A lua table should be read and transferred to a layered data structure.
```
table = {
    a = {1,2,3,4,5},
    b = {
        c = "hello",
        d = "world"
    }
}
```
This table should be read as:
```
auto table = std::vector<lp::Table> 
```