# State
The `State` class should encapsulate a `lua_State` and handle the details of the lua stack.

## Use cases
### Initializing an empty lua state
To initialize an empty lua state, this should be sufficient
```
int main() {
    lp::State state;
}
```

### Loading a chunk from a file
To load a chunk from a `.lua` file, the following methods should be possible
```
int main() {
    lp::State state1;
    state1.load("path/to/file.lua");
}
```